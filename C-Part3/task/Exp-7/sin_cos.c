//appropriate upto 10 terms
#include <stdio.h>
#include <math.h>
int fact(int);
void main(){
	float x,y,k,p,term1,term2,sum1=0,sum2=1;
	printf("Enter a number x to find sin(x) value:");
	scanf("%f",&x);
	x=x*(3.1415/180);
	for(int i=1;i<=10;i++){
		k=i+(i-1);
		term1=pow(x,k)/fact(k);
		if(i%2==0)
			sum1=sum1-term1;
		else
			sum1=sum1+term1;
	}
	printf("The value of sin x approximation upto 10 terms is %f\n",sum1);
	printf("ENter a number y to find cos(y) value:");
	scanf("%f",&y);
	y=y*(3.1415/180);
	for(int i=2;i<=10;i++){
		p=2*(i-1);
		term2=pow(y,p)/fact(p);
		if(i%2==0)
			sum2=sum2-term2;
		else
			sum2=sum2+term2;
	}
	printf("The value of cos x approximation upto 10 terms is %f\n",sum2);
}
int fact(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
