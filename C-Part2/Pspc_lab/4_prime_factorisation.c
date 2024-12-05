#include <stdio.h>
int isprime(int n){
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0)
			count++;
	}
	if(count==2)
		return n;
	return 0;
}
void pf(int n){
	int term=0;
	for(int i=2;i<=n;i++){
		if(isprime(i)>0 && n%i==0){
			printf("%d*",i);
			term=i;
			break;
		}
	}
	if(n/term!=1)
		pf(n/term);
}
void main(){
	printf("Enter a number:");
	int n;
	scanf("%d",&n);
	pf(n);
	printf("\b \n");
}

