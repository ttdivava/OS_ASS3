
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
    std::cout << "Hello World!\n";
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

    // the return is 1 if a requested memory space has been successfull
    return 1;
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
