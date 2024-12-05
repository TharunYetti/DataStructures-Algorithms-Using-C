#include <stdio.h>  
void main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){	
			if(i==1 || j==1 || j==5 || i==5 || i==j || (i%2==0 && j%2==0)){
				printf("* ");
			}
			else{
				printf("- ");
			}
			
			//printf("* ");
		}
		printf("\n");
	}
}































/*
#include <stdio.h>
void main(){
	char name[6]="THARUN";
	for(int i=1;i<=6;i++){
		for(int k=1;k<=(6-i);k++){
			printf("  ");
		}
		for(int j=1;j<=i;j++){
			printf("%c-",name[j-1]);
		}
		printf("\n");
	}
}
*/

/*
#include <stdio.h>
void main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}

*/
/*
#include <stdio.h>
void main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(j<=i){
				printf("%d",j);
			}
			else{
				printf("%d",i);
			}
		}
		printf("\n");
	}
}
*/



/*
#include <stdio.h>
void main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=(5-i);j++){
			printf("  ");
		}
		for(int k=1;k<=i;k++){
			if(k==1 || k==i){
				printf("* ");
			}
			else{
				printf("- ");
			}
		}
		printf("\n");
	}
}
*/



/*
#include <stdio.h>
void main(){
	int row=3,i,j,k;
	for(i=1;i<=row;i++){
		for(j=1;j<=row+1-i;j++){
			printf("* ");
		}
		for(k=1;k<=(i-1);k++){
			printf("- ");
		}
		printf("\n");
	}
}
*/
