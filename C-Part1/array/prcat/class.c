//inverse of a matrix
#include <stdio.h>
void main(){
	int r,c,temp,temp2,i,j;
	printf("Enter the rows and columns of matrix with a space between:");
	scanf("%d",r,c);
	int m1[r][c];
	float d=0,c[r][c];
	printf("Enter Matrix 1 elements\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("ENter the element at m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	if(r==2){
		d += (m1[0][0])*(m1[1][1])-(m1[1][0])*(m1[0][1]);
		if(d==0){
			printf("NO inverse\n");
		}
		else{
			printf("D is %f\n",d);
			temp=m1[1][1];
			m1[1][1]=m1[0][0];
			m1[0][0]=temp;
			m1[0][1]=-m1[0][1];
			m1[1][0]=-m1[1][0];
			printf("Adjoint matrix is \n");
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					printf("%d ",m1[i][j]);
				}
				printf("\n");
			}
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					c[i][j]=m1[i][j]/d;
				}
			}
			printf("Resultant matrix is \n");
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					printf("%10.1f ",c[i][j]);
				}
				printf("\n");
			}
		}
	}
	else if(r==3){
		d += m1[0][0](m1[1][1]*m1[2][2]-m1[2][1]*m1[1][2]) - m1[0][1](m1[1][0]*m1[2][2]-m1[2][0]*m1[1][2]) + m1[0][2](m1[1][0]*m1[2][1]-m1[2][0]*m1[1][1]);	
	}
}
