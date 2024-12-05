#include <stdio.h>
struct node{
	int data;
	char data2;
	//double data2;
	struct node *link;
};
void main(){
	struct node n1;
	printf("%d\n",sizeof(n1.data));
	printf("%d\n",sizeof(n1.data2));
	printf("%d\n",sizeof(n1.link));
	printf("%d\n",sizeof(n1));
	struct node k1,k2;
	k2={24,'D'};
	k1.data=23;
	k1.data2='A';
	printf("%d\n",k1.data);
	printf("%c\n",k1.data2);
}
