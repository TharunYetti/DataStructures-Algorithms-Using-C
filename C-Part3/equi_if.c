#include <stdio.h>
int s1,s2,s3;
void main(){
	printf("Enter the sides of traingle s1,s2 and s3:");
	scanf("%d %d %d",&s1,&s2,&s3);
	if( s1+s2>s3 || s2+s3>s1 || s1+s3>s2 ){
		if(s1==s2 && s2==s3){
			printf("Equilateral triangle.\n");
		}
		else{
			printf("Not an equilateral triangle.\n");
		}
	}
	else{
		printf("Given sidelengths won't form a triangle\n");
	}
}
