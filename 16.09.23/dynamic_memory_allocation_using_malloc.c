#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i,sum = 0;
	printf("Enter the no. elements \n");
	scanf("%d", &n);
	int* ptr = (int*) malloc(n * sizeof(int));
	for(i=0; i<n; i++)
	{
		scanf("%d", (ptr+i));
		sum = sum + *(ptr + i);
	}
	printf("Sum of numbers is %d",sum);
	free(ptr);
}


