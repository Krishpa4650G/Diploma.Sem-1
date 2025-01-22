#include <stdio.h>
void main ()
{
	float basic_salary , gross_salary , HRA=0 , DA=0 ;
	printf("enter basic salary");
	scanf("%f",&basic_salary);
	
	if (basic_salary>=30,000)
	{
		HRA=0.3*basic_salary;
		DA=0.95*basic_salary;
	}
	else if (basic_salary>=20,000)
	{
		HRA=0.25*basic_salary;
		DA=0.90*basic_salary;
	}
	else if(basic_salary>=10,000)
	{
		HRA=0.2*basic_salary;
		DA=0.8*basic_salary;
	}
	gross_salary=basic_salary+HRA+DA;
	printf("%f",gross_salary);
	
	
	
}
