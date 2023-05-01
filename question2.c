//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
int simple(int p,int r,int t)
{
    int SI = p*r*t/100;
    return SI;
}
    int main()
    {
        int p,r,t,S;
    printf("Enter amt of Principal,Rate and Time\n");
    scanf("%d%d%d",&p,&r,&t);
    S=simple(p,r,t);
    printf("TOTAL SIMPLE INTEREST IS %d",S);
        return 0;
    }
