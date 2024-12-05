//to read any digit and display the word
#include <stdio.h>
int num;
void main(){
	printf("Enter a number:");
	scanf("%d",&num);
	switch(num){
		case 0: printf("Zero\n");break;
		case 1: printf("One\n");break;
		case 2: printf("Two\n");break;
		case 3: printf("Three\n");break;
		case 4: printf("Four\n");break;
		case 5: printf("Five\n");break;
		case 6: printf("Six\n");break;
		case 7: printf("Seven\n");break;
		case 8: printf("Eight\n");break;
		case 9: printf("Nine\n");break;
		default: printf("Enter a single digit!!!\n");
	}
}
/*
#include <stdio.h>
char* name(int n){
	switch(n){
		case 0: return "Zero";
		case 1: return "One";
		case 2: return "Two";
		case 3: return "Three";
		case 4: return "Four";
		case 5: return "Five";
		case 6: return "Six";
		case 7: return "Seven";
		case 8: return "Eight";
		case 9: return "Nine";
	}
}
void main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("%s\n",name(num));
}
*/
