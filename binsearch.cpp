// searching an ordered list with binary search

#include <stdio.h>
#include <stdlib.h>
#define COMPARE(x,y)((x)<(y) ? -1: (x) == (y) ? 0: 1)

int binsearch(int[], int, int, int);

int main()
{
	int key = 5;
	int a[] = {1,2,3,4,5,6,7};
	int left = 0;
	int right = (sizeof(a) - 1);
	binsearch(a, key, left, right);
	printf("%d",key);
	return 0;
	
}
int binsearch(int list[], int searchnum, int left, int right) 
{	int middle;
	while (left <=  right){
		middle = (right+left)/2;
		switch (COMPARE(list[middle], searchnum))
		{
			case -1: left = middle + 1;
			return left;
			break;
			case 0: return middle;
			case 1: right = middle -1;
		}
		
		
	}
	return -1;
}
