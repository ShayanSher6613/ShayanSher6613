#include<stdio.h>
int recursion(int b);
int main()
{
    int num,sum;
    printf("Enter the number: ");
    scanf("%d",&num);
    sum = recursion(num);
    printf("%d",sum);
}
recursion(int b)
{
    if( b == 1 )
    {
      return 1;
    }
    return b + recursion(b-1);

}