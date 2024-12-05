#include <stdio.h>
void main(){
	int n,sum=0,n1=0;
	printf("enter number:");
	scanf("%d",&n);
	for(int i=1;n1<=n;i++){
		int c=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				c+=1;
			}
		}
		if(c!=1){
			sum+=i;
			n1+=1;
		}
	}
	printf("TOtal sum is %d\n",sum);
}
