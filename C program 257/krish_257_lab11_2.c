#include <stdio.h>
void main ()
{
	int a , b , c ;
	printf("enter 3 number");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	a>b?a>c?printf("a is max"):printf("c is max"):b>c?printf("b is max"):printf("c is max  ");
}