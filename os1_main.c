/**************************************************************
* Project: Assignment 1 – Command Line Arguments
*
* Description: This program displays the number of arguments
*	       from command line and lists each one on the console.
**************************************************************/	

#include<stdio.h>


int main(int argc, char* argv[])            //argc to count number of arguments
{				  	   //argv[] to store each argument
	int i;

	printf("\nThere were %d arguments on the command line.",argc);  //prints number of arguments

	for(i=0;i<argc;i++){		//loop to print each argument with its number	
	     printf("\nArgument %d:\t%s", i, argv[i]);
	}
	printf("\n");	

	return 0;
}
