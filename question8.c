/*Write a function to calculate the number of arrangements one can make from n items 
and r selected at a time.(TSRS)*/
#include<stdio.h>
int arran(int n,int r);
int fact(int n);
int main()
{
    int n,r;
    printf("Enter the N items and selected items\n");
    scanf("%d%d",&n,&r);
    printf("%d",arran(n,r));
}
int arran(int n,int r)
{
    return (fact(n)/(fact(n-r)));
}
int fact(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
        
    }
    return fact;
}