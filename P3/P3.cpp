﻿
/************************************************************************************************************
*** NAME : 			Tite Divava	& Anirudh Dhoundiyal													  ***
*** CLASS : 		CSc 456																			  	  ***
*** ASSIGNMENT : 	Assignement 3																		  ***
*** DUE DATE : 		11/22/2020													   						  ***
*** INSTRUCTOR :    Kwanghee Won																		  ***
*************************************************************************************************************
*** DESCRIPTION :  	In this assignement, The program 													  ***
************************************************************************************************************/
#include <iostream> 
#include <vector> 
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

//Prototypes of functions:
void memoryManager(int memSize, int frameSize);
int allocate(int allocSize, int pid);
int deallocate(int pid);
int write(int pid, int logical_address);
int read(int pid, int logical_address);
void printMemory();
void menu();

int main()
{
    menu();

    
}

void menu(){
    string usr_input = " ";
    cout << "*********************";
    cout << "List of the command is as following";
    cout << "**********************" << endl;
    //fix this line
    cout << "1. M memorySize frameSize" 
         << endl << "2. A sizepid" 
         << endl << "3. W" 
         << endl << "4. R" 
         << endl << "5. D" 
         << endl << "6. P" 
         << endl << "7. exit";
    
    cout << endl << "Please enter the command:" ;
    getline(cin, usr_input);




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
void memoryManager(int memSize, int frameSize) {
    // initializing each frame with a value of 0
    int frame = 0;


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
int allocate(int allocSize, int pid) {

    // the return is 1 if a requested memory space has been successfully  allocated 
    // if not it returns -1
    return 1;
}

int deallocate(int pid)
{
    return 0;
}

int write(int pid, int logical_address)
{
    return 0;
}

int read(int pid, int logical_address)
{
    return 0;
}

void printMemory()
{
}
