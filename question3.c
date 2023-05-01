/*Write a function to check whether a given number is even or odd. Return 1 if the 
number is even, otherwise return 0. (TSRS)*/
#include<stdio.h>
int evenodd(int a);
int main()
{
    int a,s;
    printf("Enter The Value\n");
    scanf("%d",&a);
    //s=evenodd(a);
    printf("Value is %d",evenodd(a));

}
int evenodd(int a)
{
     if(a%2==0)
     {
     printf("Even Number\n");
     return 1;
     }
     else
     printf("Odd number\n");
     return 0;

}