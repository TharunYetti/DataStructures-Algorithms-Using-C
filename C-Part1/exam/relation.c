#include<stdio.h>
void main (){
	int a,b;
	printf("Enter the first value : ");
	scanf("%d",&a);
	printf("Enter the second value : ");
	scanf("%d",&b);
	if (a==b){
		printf("%d=%d \n ",a,b);
	}
	else if (a>=b){
		printf("%d>=%d \n",a,b);
		printf("%d<=%d \n",b,a);
	}
	else if(b>=a){
		printf("%d>=%d \n",b,a);
		printf("%d<=%d \n",a,b);
	}
	else if (a>b){
		printf("%d>%d \n",a,b);
		printf("%d<%d \n",b,a);
	}
	else if (b>a){
		printf("%d>%d \n",b,a);
		printf("%d<%d \n",a,b);
	}
	else{
		printf("Enter the valid input");
	}

}
	
		
		
