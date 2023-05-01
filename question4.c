//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural(int n);
int main()
{
    int n,s;
    printf("Enter the value upto which natural number to be printed \n");
    scanf("%d",&n);
    //s=natural(n);
    natural(n);
}
void natural(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf(" %d",i);
    }

}