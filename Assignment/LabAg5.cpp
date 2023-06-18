#include<stdio.h>
int sum_of_digits(int num);
int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
    int sum = sum_of_digits(num);
    printf("\nThe Sum of the digits is %d",sum);
}
int sum_of_digits(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else
    {
        return(num%10) + sum_of_digits(num/10);

    }
}
