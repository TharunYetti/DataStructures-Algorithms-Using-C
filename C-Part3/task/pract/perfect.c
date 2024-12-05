#include <stdio.h>
void main(){
	int num=6,sum=0,r,temp;
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(num==sum){
		printf("Mr.PERFECT\n");
	}
	else{
		printf("NOT PERFECT\n");
	}
	printf("%d\n",sum);
}
