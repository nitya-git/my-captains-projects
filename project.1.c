#include<stdio.h>
main()
{
	int a,b;
	printf("Enter values of a and b : ");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("Before swapping a=%d,b=%d\n",a,b);
	a=a+b; b=a-b; a=a-b;
	printf("After swapping a=%d,b=%d",a,b);
} 
