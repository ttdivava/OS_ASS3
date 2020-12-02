
/************************************************************************************************************
*** NAME : 			Tite Divava	& Anirudh Dhoundiyal													  ***
*** CLASS : 		CSc 456																			  	  ***
*** ASSIGNMENT : 	Assignement 3																		  ***
*** DUE DATE : 		11/25/2020													   						  ***
*** INSTRUCTOR :    Kwanghee Won																		  ***
*************************************************************************************************************
*** DESCRIPTION :  	In this assignement, The program 													  ***
************************************************************************************************************/
#include <iostream> 
#include <iomanip>
#include <vector> 
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
using namespace std;

//Prototypes of functions:
void memoryManager(int memSize, int frameSize, vector<int>& freeFrameList);
int allocate(int allocSize, int pid, vector<int>& freeFrameList, int* processSize);
int deallocate(int pid, int& alloc_size, int& init_size, vector<int>& freeFrameList);
int write(int pid, int logical_address);
int read(int pid, int logical_address);
void printMemory(int init_size, vector<int>& freeFrameList, int* processSize);
void menu(string& usr_input, vector<string>& usr_command);
void runner(vector<string>& usr_command, vector<int>& freeFrameList,int & init_size, int & alloc_size, int *);

struct Page_table
{
    int pageTable[10];
};

//global variables
string buffer;
char* memory;
const int FRAMESIZE = 1;
map <int, Page_table> process_list;


int main()
{
    string usr_input = "";
    int init_size = 0;
    int alloc_size = 0;
    //string process_list[20];
    vector<string> usr_command;
    vector<int>freeFrameList;
    int processSize[10] = {-1};

    while (usr_input != "exit") {
        menu(usr_input, usr_command);
        runner(usr_command, freeFrameList, init_size, alloc_size, processSize);
    }

}

void initializeProcessList() {
    Page_table x = {0};
    for (int i = 0; i < 10; i++) {
        process_list.insert(pair<int, Page_table> (i,x));
    }

   // for (auto p = process_list.begin(); p != process_list.end(); ++p)
     //   cout << p.first;
}

void menu(string& usr_input, vector<string> &usr_command){
    
    cout << "*********************";
    cout << "List of the command is as following";
    cout << "**********************" << endl;
    //menu display
    cout << "1. M memorySize frameSize" 
         << endl << "2. A sizepid" 
         << endl << "3. W" 
         << endl << "4. R" 
         << endl << "5. D" 
         << endl << "6. P" 
         << endl << "7. exit";
    cout << endl << "Please enter the command:";
    getline(cin, usr_input);
    stringstream temp(usr_input);
    usr_command.clear();
    while (temp >> buffer) {
        usr_command.push_back(buffer);
    }
}

void runner(vector<string>& usr_command, vector<int>& freeFrameList, int& init_size, int& alloc_size, int * processSize)
{
    char tempchar = usr_command[0][0];
    cout << tempchar;
    switch (tempchar){

    case 'M':
        init_size = stoi(usr_command[1]);
        memoryManager(init_size, FRAMESIZE, freeFrameList);
        break;
    case 'A':
        alloc_size = stoi(usr_command[1]);
        int a = allocate(alloc_size, stoi(usr_command[2]), freeFrameList, processSize);
        break;
    case 'W':
        int w = write(stoi(usr_command[1]), stoi(usr_command[2]));
        break;
    case 'R':
        int r = read(stoi(usr_command[1]), stoi(usr_command[2]));
        break;
    case 'D':
        int d = deallocate(stoi(usr_command[1]), alloc_size, init_size, freeFrameList);
        break;
    case 'P':
        printMemory(init_size, freeFrameList, processSize);
        break;
    default:
        cout << "Invalid commands" << endl;
        break;
    }

}


/******************************************************************************
*** FUNCTION < memoryManager >  								  			***
*******************************************************************************
*** DESCRIPTION : <	This function simulates creation and initialization of a ** 
                    physical memory space consisting of frames >         	***
*** INPUT ARGS :  < int memeSize, int frameSize > 							***
*** OUTPUT ARGS : < None > 													***
*** IN/OUT ARGS : < None >			 										***
*** RETURN : 	  < None > 													***
******************************************************************************/
void memoryManager(int memSize, int frameSize, vector<int>& freeFrameList) {
    memory = new char[memSize];
    if (!memory)
    {
        cout << "Memory not allocated." << endl << "Trying again..." << endl;
        memory = new char[memSize];
        if (!memory) {
            cout << "Memory allocationg has failed!";
                exit(1);
        }

    }



}

/******************************************************************************
*** FUNCTION < allocate >  								  			        ***
*******************************************************************************
*** DESCRIPTION : <	This function allocates a chunk of memory space to      ***
***               <    a process, a set of pages are allocated to a process ***
***               <    which are then mapped to available free frames >     ***
*** INPUT ARGS :  < int allocSize, int pid >    							***
*** OUTPUT ARGS : < None > 													***
*** IN/OUT ARGS : < None >			 										***
*** RETURN : 	  < int > 													***
******************************************************************************/
int allocate(int allocSize, int pid, vector<int>& freeFrameList, int * processSize) {
    int random_value,
        random_index;

    srand(time(NULL));

    for (int i = 0; i < allocSize; i++) {
        random_index = rand() % freeFrameList.size();
        random_value = freeFrameList[random_index];

        process_list[pid].pageTable[i] = random_value;

        freeFrameList.erase(remove(freeFrameList.begin(), freeFrameList.end(), random_value), freeFrameList.end());

    }
    processSize[pid] = allocSize;
    // the return is 1 if a requested memory space has been successfully  allocated 
    // if not it returns -1
    return 1;
  
}

int deallocate(int pid, int & alloc_size, int & init_size,vector<int>& freeFrameList)
{
    auto i = process_list.find(pid);
    if (i != process_list.end()) {
        for (int m = 0; m < alloc_size; m++) {
            freeFrameList.push_back(process_list[pid].pageTable[m]);
            process_list[pid].pageTable[m] = 0;
        }

        delete process_list[pid].pageTable;

        for (int n = 0; n < init_size; n++)
            process_list[pid].pageTable[n] = 0;
        
        return 1;
    }
        
    return -1;
}

int write(int pid, int logical_address)
{
    auto f = process_list.find(pid);

    if (f != process_list.end()) {
        memory[process_list[pid].pageTable[logical_address]] = '1';
        return 1;
    }
    return 0;
}

int read(int pid, int logical_address)
{
    auto f = process_list.find(pid);

    if (f != process_list.end()) {
        cout << "Read value: " << memory[process_list[pid].pageTable[logical_address]] << endl;
        return 1;
    }
    return 0;
}

void printMemory(int init_size, vector<int>& freeFrameList, int * processSize)
{
    cout << "Memory: " << endl;
    for (int i = 0; i < init_size; i++) {
        cout << memory[i] << setw(5);
    }
    int count = 0;
    cout << endl;

    cout << "FreeFrame List:" << endl;
    for (auto i = freeFrameList.begin(); i != freeFrameList.end(); i++)
        cout << *i << setw(5);

    for (int i = 0; i < 10; i++)
        if (processSize[i] != -1)
            cout << i << setw(5) << processSize[i] << endl;
        
}
