#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n;
	char* str;
	printf("Enter the no. of characters \n");
	scanf("%d", &n);
	str = (char*) malloc(n * sizeof(char) + 1);
	printf("Enter the string: \n");
	scanf("%s", str);
	
	printf("Displayed string: %s",str);
	
	free(str);
}
