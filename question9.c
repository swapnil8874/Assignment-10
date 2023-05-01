//function to check whether a given number contains a given digit or not.TSRS
#include<stdio.h>
int check(int x,int y);
int main()
{
    int x,y,new;
    printf("Enter the Number\n");
    scanf("%d",&x);
    printf("Enter the Digit\n");
    scanf("%d",&y);
    printf("%d",check(x,y));

}
int check(int x,int y)
{
    while (x!=0)
    {
    int new = x%10;
    if(new==x)
    return new;
    x=x/10;
    }
    
    return 0;
}