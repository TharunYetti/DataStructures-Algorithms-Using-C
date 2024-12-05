#include<stdio.h>
void main()
{
	int marks;
	printf("\n----------");
	printf("\nEnter The Marks between 0 To 100");
	printf("\nEnter The Mark:");
	scanf("%d",&marks);
	switch(marks/10)
	{
		case 10:
		case 9:
			printf("\nYour grade is 'Ex' \n");
			break;
		case 8:
			printf("\n Your grade is 'A' \n");
			break;
		case 7:
			printf("\n Your grade is 'B' \n");
			break;
		case 6:
			printf("\n Your grade is 'C' \n");
			break;
		case 5:
			printf("\n Your grade is 'D' \n");
			break;
		case 4:
			printf("\n Your grade is 'E' \n");
			break;
		case 3:
		case 2:
		case 1:
		case 0:
			printf("Your grade is remedial");
			break;
		default:
			printf("Enter a valid input");
	}
}
		
