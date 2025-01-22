#include <stdio.h>
void main()
{
float a,b,c;
printf("enter a,b");
scanf("%f%f" , &a,&b);
c=a;
a=b;
b=c;
printf("%f%f", a, b);




}