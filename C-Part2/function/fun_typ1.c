#include <stdio.h>
void prime_in_range();
void main(){
	printf("Hello!\tWelcome\n");
	prime_in_range();
	printf("\nThank You\n");
}
void prime_in_range(){
	int num,i,count;
	printf("Enter a number upto which you want prime numbers:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		count=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==1){
			printf("%d ",i);
		}
	}
}
