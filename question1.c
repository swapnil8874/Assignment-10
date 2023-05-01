//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(float );

float area(float r)
{ 
    float area;

    
     area = 3.14*r*r;
    return area;
}
int main()
{
    float r;
    printf("ENTER VALUE OF R\n");
    scanf("%f",&r);

   printf("Area Of a Circle is %.2f",area(r));
    return 0;
}