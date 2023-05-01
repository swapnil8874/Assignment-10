//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd(int n);
int main()
{
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    odd(n);
}
void odd(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",2*i-1);
    }
}