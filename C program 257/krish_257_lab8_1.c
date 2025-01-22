#include <stdio.h>
void main ()
{

float a,b,choice=0,result=0;
printf("enter two number");
+
scanf ("%f%f",&a,&b);

printf ("enter a choice 1-subtration/2-addition/3-multiplication/4-divition");
	scanf("%f" , &choice);

	if (choice==1)
	{
		result = a-b;
	}
    else if (choice==2)
  {
  	result = a+b ;
  }
  	else if(choice==3)
{
	result = a*b;
}
	else if (choice==4)
{
	result = a/b;
}
else
{
	printf("enter a valid choice");
}

printf("%f", result);
}