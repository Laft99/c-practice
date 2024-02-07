//understanding pointers once for all 

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int *iPtr;
	 i =  7;
	 iPtr = &i;
	  
	 printf("the value of i is %d \n", i);
	 printf("the pointer should be pointing to the address of the variable instead of the  value of the variable\n");
	 printf("%p \n",iPtr); // this returns the address or place in memory
	 printf("%d\n",*iPtr); //basically with the star we go to the address and return its value
	 printf("%p\n",&i); // same as above
	
	
	
}
