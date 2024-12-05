#include<stdio.h>
void main()
{
int c;
	printf("Enter a number(1-7)to print a day: ");
	scanf("%d", &c);
	switch(c){
	case 1:
		printf("Monday\n");
		break;	
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	case 7:
		printf("Sunday\n");
		break;
	default:
		printf("Enter valid number\n");
}


	int month;
	printf("enter a number from 1 to 12:");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("The given month has 31 days\n");
			break;
	
		case 4:
		case 6:
		case 9:
		case 11:
			printf("The given month has 30 days\n");
			break;	
	
	
		case 2:
			printf("The month has only 28 days");
	}



int a,b;
char ch;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter operation: ");
	scanf("%s", &ch);
	switch(ch){
		case '+' :
			printf("%d",a+b);
			break;
		case '-' :
			printf("%d",a-b);
			break;
		case '*' :
			printf("%d",a*b);
			break;
		case '/' :
			printf("%d",a/b);
			break;
		default:
			printf("Invalid opeartion \n");
	}
}
