//check whether the given triangle is valid or not
#include <stdio.h>
int s1,s2,s3;
void main(){
	printf("Enter the sides of a triangle with a space between:");
	scanf("%d %d %d",&s1,&s2,&s3);
	if( (s1+s2>s3) && (s2+s3>s1) && (s3+s1>s2) ){
		printf("Tringle is Valid!\n");
	}
	else{
		printf("Tringle is Inalid!\n");
	}
}
