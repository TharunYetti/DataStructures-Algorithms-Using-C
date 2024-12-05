#include <stdio.h>
int inp;
void main(){
	printf("Enter a Year:");
	scanf("%d",&inp);
	if( (inp%100==0) && (inp%4==0) && (inp%400==0) ){
				printf("%d is a Leap Year\n",inp);
	}
	else if((inp%100 != 0) && (inp%4==0)){
			printf("%d is a Leap Year\n",inp);
	}
	else{
		printf("%d is not a Leap Year\n",inp);
	}
}
