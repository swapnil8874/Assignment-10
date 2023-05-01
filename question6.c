//Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int n);
int main()
{
    int a,n,i,s;
    printf("Enter the value\n");
    scanf("%d",&a);
     s=fact(a);
    printf("%d",s);
    
}
int fact(int n)
{
    int sum=1;
    for(int i=1;i<=n;i++)
    {
      sum=sum*i;
    }
    return sum;
}