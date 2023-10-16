#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i,sum=0;
	printf("Enter the no. of elements: \n");
	scanf("%d ",&n);
	int* ptr = (int*) calloc(n,sizeof(int));
	
	for(i=0; i<n; i++)
	{
		scanf("%d", (ptr+i));
		sum = sum + *(ptr + i);
	}
	printf("Sum of no. is %d \n", sum);
	for(i=0; i<n; i++)
	{
		printf("%d ",*(ptr+i));
	}
	free(ptr);
}
