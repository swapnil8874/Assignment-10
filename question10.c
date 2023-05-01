/*Write a function to print all prime factors of a given number. For example, if the 
number is 36 then your result should be 2, 2, 3, 3 TSRN */
#include<stdio.h>
void primefact(int n)
{
    for(int i=2; n!=1;i++)
    {
        while (n%i==0)
        {
            n=n/i;
            printf("%d,",i);
        }

    }
}
int main()
{
    int a;
     printf("Enter the value\n");
    scanf("%d",&a);
    primefact(a);
    return 0;
}