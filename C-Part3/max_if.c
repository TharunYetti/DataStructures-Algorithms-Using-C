/*#include <stdio.h>
int a,b,c;
void main(){
	printf("Enter three numbers with a space between:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b){
		if(a>=c){
			printf("%d is the maximum number.\n",a);
		}
	}
	else{
		if(b>=c){
			printf("%d is the maximum number.\n",b);
		}
		else{
			printf("%d is the maximum number.\n",c);
		}
	}
}
*/
#include <stdio.h>
int a,b,c;
void main(){
	printf("Enter three numbers with a space between:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b){
		if(a>=c){
			printf("%d is the maximum number.\n",a);
		}
		else{
			printf("%d is the maximum number.\n",c);
		}
	}
	else{
		if(b>=c){
			printf("%d is the maiximum number.\n",b);
		}
		else{
			printf("%d is the maiximum number.\n",c);
		}
	}
}
