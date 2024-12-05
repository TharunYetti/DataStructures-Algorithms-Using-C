#include <stdio.h>
int s1,s2,s3;
void main(){
	printf("Enter the sides of traingle s1,s2 and s3:");
	scanf("%d %d %d",&s1,&s2,&s3);
	if( s1+s2>s3 || s2+s3>s1 || s1+s3>s2 ){
		if( (s1==s2 && s2!=s3) || (s2==s3 && s3!=s1) || (s3==s1 && s1!=s2) ){
			printf("Isosceles triangle\n");
		}
		else{
			printf("Not an isosceles Triangle.\n");
		}
	}
	else{
		printf("Given sidelengths won't form a triangle\n");
	}
}
