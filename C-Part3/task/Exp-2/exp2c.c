#include <stdio.h>
char id[10],br[5];
long ph;
float m1,m2,m3,m4,avg;
int age,sum;
void main(){
	printf("Enter your ID and branch with a space Between:");
	scanf("%s %s",id,br);
	//printf("YOur ID is %s and branch is %s\n",id,br);
	
	printf("Enter your age and phone number with a space gap between:");
	scanf("%d %ld",&age,&ph);
	//printf("Your age is %d and Your Ph NUmber is %ld \n",age,ph);
	
	printf("Enter your marks of four subjects with a space between:");
	scanf("%f %f %f %f",&m1,&m2,&m3,&m4);
	//printf("Your marks are %d, %d, %d and %d \n",m1,m2,m3,m4);
	sum=m1+m2+m3+m4;
	avg=sum/4.0;
	
	printf("Id:%s \nBranch: %s \nAge: %d \nPh.Number: %ld \n",id,br,age,ph);
	printf("Average of Four subjects is %f\n",avg);
}
