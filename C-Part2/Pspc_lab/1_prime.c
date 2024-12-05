#include <stdio.h>
void main(){
	int n,count;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Prime numbers are ");
	for(int i=1;i<=n;i++){
		count=0;
		for(int j=i;j>=1;j--){
			if(i%j==0)
				count++;
		}
		if(count==2)
			printf("%d,",i);
	}
	printf("\b \n");
}
