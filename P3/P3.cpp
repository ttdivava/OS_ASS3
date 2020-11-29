
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
using memoryManager std;

void menu();

int main()
{
    menu();

    
}

menu()
{
    string usr_input = " ";
    cout << "**************************";
    cout << "List of the command is as following:";
    cout << "***************************" << endl;
    //fix this line
    cout << "M memorySize frameSize" << endl << "A sizepid" << endl << "W" << endl << endl << "R" << endl << endl << "D" << endl << endl << "P" << endl << "exit" << endl;
    
    cout << endl << "Please enter the command:" << endl;
    getline(cin, input);


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

    return 0;
}
