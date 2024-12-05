#include <stdio.h>
void main(){
	float arr[2][2]={{1.0,2.0},{3.0,4.0}};
	float det=arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];
	float temp00=arr[0][0],temp11=arr[1][1];
	arr[0][0]=temp11;arr[0][1]=-arr[0][1];arr[1][0]=-arr[1][0];arr[1][1]=temp00;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("%.1f ",arr[i][j]/det);
		}
		printf("\n");
	}
	
}
