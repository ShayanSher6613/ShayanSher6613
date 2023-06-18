//8.	Write a program to reverse a number using recursion
#include<stdio.h>
main()
{
	int num,remainder,reverse=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	while(num!=0)
	{
		remainder = num%10;
		num = num/10;
		reverse = reverse * 10 + remainder;
	}
	
	printf("The reversed number is %d",reverse);
}
