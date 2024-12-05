#include <stdio.h>
int m=32;
int main(){
	printf("32/10 is %d\n",m/10); //32/10 is 3
	printf("7/6 is %d\n",7/6); //7/6 is 1
	printf("-7/6 is %d\n",-7/6); //-7/6 is -1
	printf("7/(-6) is %d\n",7/-6); //7/(-6) is -1
	printf("%d\n",7%6); //1
	printf("%d\n",-7%6); //-1
	printf("%d\n",7%-6); //1
	printf("%f\n",7.0/6); //1.166667
	printf("%f\n",7/6.0); //1.166667
	printf("%f\n",7.0/6.0); //1.166667
	printf("Complement of 10 is %d\n",~10); //-11 = 2"s complement of 1111 1010
}
