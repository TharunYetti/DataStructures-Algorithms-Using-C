//9
#include <stdio.h>
void main(){
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(n*2);j++){
			if(j<=i){
				printf("%d",j);
			}
			else if(j>((n*2)-i)){
				printf("%d",(n*2)-j+1);
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
