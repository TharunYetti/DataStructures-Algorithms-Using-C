#include <stdio.h>
void mat_add();
void mat_multi();
void mat_transpose();
void mat_sub();
void main(){
	int choice;
	printf("Enter your choice\n1-Matrix addition\n2-Matrix Multiplication\n3-Tranpose of matrix\n4-Subtraction of Matrix\n5-to exit\nEnter:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			mat_add();
			break;
		case 2:
			mat_multi();
			break;
		case 3:
			mat_transpose();
			break;
		case 4:
			mat_sub();
			break;
		case 5: break;
		default:printf("Thank you\n");
	}
	
}
void mat_add(){
	printf("Enter the order of the matrices (eg. rows columns):");
	int r,c;
	scanf("%d %d",&r,&c);
	int m1[r][c],m2[r][c];
	printf("Enter the matrix 1 elements\n");
	for(int j=0;j<r;j++){
		for(int k=0;k<c;k++){
			printf("Enter the element m1[%d][%d]:",j+1,k+1);
			scanf("%d",&m1[j][k]);
		}
	}
	printf("Enter the matrix 2 elements\n");
	for(int j=0;j<r;j++){
		for(int k=0;k<c;k++){
			printf("Enter the element m1[%d][%d]:",j+1,k+1);
			scanf("%d",&m2[j][k]);
		}
	}
	printf("The additon of two matrices is\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d ",m1[i][j]+m2[i][j]);
		}
		printf("\n");
	}
}
void mat_multi(){
	printf("Enter the order of the first matrix(eg. rows columns):");
	int r1,c1,r2,c2;
	scanf("%d %d",&r1,&c1);
	printf("Enter the order of the second matrix(eg. rows columns):");
	scanf("%d %d",&r2,&c2);
	if(c1==r2){
		int m1[r1][c1],m2[r2][c2],c[r2][c1];
		printf("Enter the matrix 1 elements\n");
		for(int j=0;j<r1;j++){
			for(int k=0;k<c1;k++){
				printf("Enter the element m1[%d][%d]:",j+1,k+1);
				scanf("%d",&m1[j][k]);
			}
		}
		printf("Enter the matrix 2 elements\n");
		for(int j=0;j<r1;j++){
			for(int k=0;k<c1;k++){
				printf("Enter the element m2[%d][%d]:",j+1,k+1);
				scanf("%d",&m2[j][k]);
			}
		}
		for(int i=0;i<r1;i++){
			for(int j=0;j<c2;j++){
				c[i][j]=0;
				for(int k=0;k<c1;k++)
					c[i][j]+=(m1[i][k]*m2[k][j]);
			}
		}
		printf("The Multiplication matrix is\n");
		for(int i=0;i<r2;i++){
			for(int j=0;j<c1;j++)
				printf("%d ",c[i][j]);
			printf("\n");
		}		
	}
	else{
		printf("Matrix Multiplication is not possible\n");
	}
}
void mat_transpose(){
	int r,c;
	printf("Enter the order of matrix (eg rows columns):");
	scanf("%d %d",&r,&c);
	int m[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("Enter element m[%d][%d]:",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	printf("The transpose is \n");
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			printf("%d ",m[j][i]);
		}
		printf("\n");
	}
}
void mat_sub(){
	printf("Enter the order of the matrices (eg. rows columns):");
	int r,c;
	scanf("%d %d",&r,&c);
	int m1[r][c],m2[r][c];
	printf("Enter the matrix 1 elements\n");
	for(int j=0;j<r;j++){
		for(int k=0;k<c;k++){
			printf("Enter the element m1[%d][%d]:",j+1,k+1);
			scanf("%d",&m1[j][k]);
		}
	}
	printf("Enter the matrix 2 elements\n");
	for(int j=0;j<r;j++){
		for(int k=0;k<c;k++){
			printf("Enter the element m1[%d][%d]:",j+1,k+1);
			scanf("%d",&m2[j][k]);
		}
	}
	printf("The subtraction of two matrices is\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d ",m1[i][j]-m2[i][j]);
		}
		printf("\n");
	}
}
