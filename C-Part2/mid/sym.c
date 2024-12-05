#include <stdio.h>
#include <stdlib.h>
void main(){
	int a[3][3]={{1,2,4},{2,5,6},{3,6,7}};
	int isok=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(a[i][j]==a[j][i])
				isok=1;
			else
				isok=0;
				break;
		}
		if(isok==0){
			printf("NOt symmetric\n");
			exit(1);
		}
	}
	if(isok!=0){
		printf("Symmetric\n");
	}
}
