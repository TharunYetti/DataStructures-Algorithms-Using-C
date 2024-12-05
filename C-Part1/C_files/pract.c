//decimal to binary and binary to decimal
#include <stdio.h>
#include <math.h>
int dectobin(int);
int bintodec(int);
void main(){
	int n1,n2;
	printf("Enter a number to convert from decimla to binary:");
	scanf("%d",&n1);
	printf("The Binary value is %d\n",dectobin(n1));
	printf("Enter a number to convert from binary to decimal:");
	scanf("%d",&n2);
	printf("The Decimal value is %d\n",bintodec(n2));	
	

	/*
	int x,y,z=2;
	float k=2.0;
	x=y=10;
	printf("%d\n",y);
	switch(x&&y){
		case (x || 10):printf("Hello\n");
		default:printf("World\n");	
	}
	*/
	
}
int dectobin(int n){
	int num=0,i=0,dig;
	while(n!=0){
		dig=n%2;
		num+=dig*pow(10,i);
		i++;
		n/=2;
	}
	return num;
}
int bintodec(int n){
	int num=0,i=0,dig;
	while(n!=0){
		dig=n%10;
		num+=dig*pow(2,i);
		i++;
		n/=10;
	}
	return num;
}
