//grades of student by switch
#include <stdio.h>
int g;
float s1,s2,s3,sum,avg;
void main(){
	printf(">>Enter the marks of three subjects out of 100, with a space between:");
	scanf("%f %f %f",&s1,&s2,&s3);
	sum=s1+s2+s3;
	avg=sum/3;
	g=avg/10;
	printf("grade:%d\n",g);
	printf("The average of three subjects is %.2f\n",avg);
	switch(g){
		case 10:
		case 9:printf("Your Grade is 'Ex'\n");break;
		case 8:printf("Your Grade is 'A'\n");break;
		case 7:printf("Your Grade is 'B'\n");break;
		case 6:printf("Your Grade is 'C'\n");break;
		case 5:printf("Your Grade is 'D'\n");break;
		case 4:printf("Your Grade is 'E'\n");break;
		default: printf("Congratulations! You can study this year again. [Remedial padindi ra lucha!!]\n");
	}
	printf("\n");
}
