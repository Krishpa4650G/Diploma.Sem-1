#include <stdio.h>
void main ()
{
	int day ;
	printf("enter a number");
	scanf("%d", &day);
	switch (day)
	{
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thusday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
			break;
		case 7:
			printf("sunday");
			break;
		default:
		printf("enter number from 1 to 7");
		break;
	}
	
	
	
	
}
