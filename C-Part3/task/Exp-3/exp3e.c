//by using switch 1) Print day of week 2)No.of days in a month 3)Create a simple calculator using arithmetic operators

#include <stdio.h>
int inp;
void main(){
	printf("Enter 1- for day of week, 2- for No.of days in a month, 3- For simple calculator:");
	scanf("%d",&inp);
	int day,month,counter,counter2;
	float a,b;
	switch(inp){
		case 1: printf("Enter a number to know the day of week:");
			scanf("%d",&day);
			switch(day){
				case 1: printf("Monday\n");break;
				case 2: printf("Tuesday\n");break;
				case 3: printf("Wednesday\n");break;
				case 4: printf("Thursday\n");break;
				case 5: printf("Friday\n");break;
				case 6: printf("Saturday\n");break;
				case 7: printf("Sunday\n");break;
				default: printf("You should enter the number in range (1-7), Run again\n");
			}break;
		case 2: printf("Enter a number to know the no.of days in month (January-1, February-2 etc...):");
			scanf("%d",&month);
			if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
				counter=1;
			}
			else if(month==2){	
				counter=2;
			}
			else{
				counter=3;
			}
			switch(counter){
				case 1: printf("The month has 31 Days.\n");break;
				case 2: printf("The month has 28 Days.\n");break;
				case 3: printf("The month has 30 Days.\n");break;
			}
			break;
		case 3: printf("Enter two positive integers with a space between to perform arithmetic oprations:");
			scanf("%f %f",&a,&b);
			printf("Enter a number , 1- for addition, 2- for subtarction , 3- for division, 4- for multipliction:");
			scanf("%d",&counter2);
			switch(counter2){
				case 1: printf("The addition of the two numbers is %f\n",a+b);break;
				case 2: printf("The subtraction of the two numbers is %f\n",a-b);break;
				case 3: printf("The Division of the two numbers is %f\n",(float)a/b);break;
				case 4: printf("The Multiplication of the two numbers is %f\n",a*b);break;
				default: printf("You have entered the wrong number.\n");
			}
			break;
		default: printf("Ypu have entered wrong number.\n");
	}
}
