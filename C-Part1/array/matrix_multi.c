#include <stdio.h>
void main(){
	int m[2][3][4]={ { {2,3,4,5},{2,5,7,3},{3,5,2,7} } , { {299,33,48,52},{29,58,77,33},{33,54,29,3} } };
	int r1=2,c1=2,r2=2,c2=2,m1[r1][c1],m2[r2][c2],c[r2][c1],i,j,k;
	c[0][0]=0;
	c[0][1]=0;
	c[1][0]=0;
	c[1][1]=0;
	if(c1==r2){
		printf("Enter Matrix 1 elements\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("ENter the element at m1[%d][%d]:",i,j);
				scanf("%d",&m1[i][j]);
			}
		}
		printf("Enter Matrix 2 elements\n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("ENter the element at m2[%d][%d]:",i,j);
				scanf("%d",&m2[i][j]);
			}
		}
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				for(k=0;k<c1;k++){
					c[i][j]+=m1[i][k]*m2[k][j];
				}
			}
		}
		printf("Resultant matrix is \n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("Matrix Multiplication is NOt possible\n");
	}
	
	
}
