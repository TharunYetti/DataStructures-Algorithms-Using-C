#include <stdio.h>
int n1,n2,n3,n4,n5;
int max,min;
int main(){
	printf("Enter five numbers with a space gap between:");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	//printf("Your number are %d,%d,%d,%d and %d",n1,n2,n3,n4,n5);
	
	max=(n1>=n2 && n1>=n3 && n1>=n4 && n1>=n5) ? n1 :(n2>=n3 && n2>=n4 && n2>=n5) ? n2 :(n3>=n4 && n3>=n5) ? n3 : (n4>=n5) ? n4 : n5 ;
	min=(n1<=n2 && n1<=n3 && n1<=n4 && n1<=n5) ? n1 :(n2<=n3 && n2<=n4 && n2<=n5) ? n2 :(n3<=n4 && n3<=n5) ? n3 : (n4<=n5) ? n4 : n5 ;
	
	printf("%d is the maximum number among five.\n",max);
	printf("%d is the minimum number among five.\n",min);
	return 0;
}
