/*#include <stdio.h>
int main(){
	int rad;
	printf("Enter radius of circle:");
	scanf("%d",&rad);
	printf("Area is %f",3.14*rad*rad);
}*/
#include <stdio.h>
int num=98;
int main(){
	for(int i=1;i<=5;i++){
		printf("%d\n",i);
	}
	for(float f=1;f<=4;f++){
		printf("%f \n",f);
	}
	for(char c='A';c<='Z';c++){
		printf("%c\n",c);
	}
	printf("%c\n",num);
}

