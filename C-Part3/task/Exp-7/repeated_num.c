//duplicate number and its repitions
#include <stdio.h>
void main(){
	int num[20],n;
	printf("How many numbers do you want to enter(1-20):");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the element numbers[%d]:",i);
		scanf("%d",&num[i]);
	}
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(num[i]==num[j] && i!=j)
				count++;
		}
		if(count!=0){
			printf("Repeated number found, it is %d and the duplicate number repeated %d time(s)\n",num[i],count);
			break;
		}
	}
	
}

