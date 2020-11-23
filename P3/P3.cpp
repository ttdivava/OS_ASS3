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

int main()
{
    std::cout << "Git is Hard as a rock!!!!\n";
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
/******************************************************************************
*** FUNCTION < deallocate >  								  			    ***
*******************************************************************************
*** DESCRIPTION : <	This function deallocates a memory space from a process ***
                    with process ID pid >                                   ***
*** INPUT ARGS :  < int pd >                       							***
*** OUTPUT ARGS : < None > 													***
*** IN/OUT ARGS : < None >			 										***
*** RETURN : 	  < int > 													***
******************************************************************************/
int deallocate(int pd) {

    // returns 1 if successful 
    // -1 if not successful
    return 1;
}
/******************************************************************************
*** FUNCTION < write >  								  			        ***
*******************************************************************************
*** DESCRIPTION : <	This function is used to write a value of '1' to the    ***
                    memory space of a process with pid. a value of '1' is   ***
                    written at the memory address specified by the parameter **
                    'logical_address' >                                     ***  
*** INPUT ARGS :  < int pd >                       							***
*** OUTPUT ARGS : < None > 													***
*** IN/OUT ARGS : < None >			 										***
*** RETURN : 	  < int > 													***
******************************************************************************/
int write(int pid, int logical_address) {
    // logical address is simply a page number 

    // A page number must be converted to the corresponding frame number in order to write a value of ‘1’

    // To find the corresponding frame number based on the provided page number,you need to use the page table of the process with pid

    // This function returns 1 if successful,and ‐1 if not successful

}


/******************************************************************************
*** FUNCTION < read >  								  			            ***
*******************************************************************************
*** DESCRIPTION : <	This function is used to read a value from the memory   ***
***                 location specified by the page number ‘logical_address >***
*** INPUT ARGS :  < int pid, int logical_address >                          ***
*** OUTPUT ARGS : < None > 													***
*** IN/OUT ARGS : < None >			 										***
*** RETURN : 	  < int > 													***
******************************************************************************/
int read(int pid, int logical_address) {
    // Make sure to translate the page number into the corresponding frame number
    // using the page table to read a value from the memory space
}

/******************************************************************************
*** FUNCTION < printMemory >						  			            ***
*******************************************************************************
*** DESCRIPTION : <	This function prints out the physical memory space >    ***
*** INPUT ARGS :  < int pid, int logical_address >                          ***
*** OUTPUT ARGS : < None > 													***
*** IN/OUT ARGS : < None >			 										***
*** RETURN : 	  < int > 													***
******************************************************************************/
void printMemory(void) {

}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
