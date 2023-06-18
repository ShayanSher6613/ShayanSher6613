#include<stdio.h>
int recursion(int b);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    recursion(num);
}
recursion(int b)
{
    if( b >= 2 )
    {
        recursion(b-1);
    }
    printf("%d ",b);
}