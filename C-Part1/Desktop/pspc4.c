#include <stdio.h>
int sym(int rows,int cols,int a[rows][cols]){
	int isorder;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			isorder=0;
			if(a[i][j]==a[j][i])
				isorder=1;
			if(isorder==0)
				return 0;
		}
	}
	return 1;
}
void main(){
	printf("ENter rows and cols with space:");
	int rows,cols;
	scanf("%d %d",&rows,&cols);int a[rows][cols];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("enter a[%d][%d]",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	int order=sym(rows,cols,a);
	if(order==0)
		printf("Not Symmetric\n");
	else if(order==1)
		printf("Symmetric\n");
}
