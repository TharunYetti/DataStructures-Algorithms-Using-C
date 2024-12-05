//check whether the given triangle is equilateral, sisosceles or scalen
#include <stdio.h>
int s1,s2,s3;
void main(){
	printf("Enter the sides of a triangle with a space between:");
	scanf("%d %d %d",&s1,&s2,&s3);
	if(s1==s2 && s2==s3){
		printf("It is an equilateral triangle.\n");
	}
	else if( (s1==s2 && s2!=s3) || (s2==s3 && s3!=s1) || (s3==s1 && s1!=s2) ){
		printf("It is an Isosceles triangle.\n");
	}
	else{
		printf("It is a scalen triangle.\n");
	}
}
