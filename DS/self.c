#include <stdio.h>
struct node{
	int n;
	struct node *next;
};
int main(){
	printf("Executed!\n");
	struct node head;
	head.n=1;
	head.next=NULL;
	struct node first={20,NULL};
	struct node second={30,NULL};
	printf("Head data:%d\n",head.n);
	printf("First data:%d\n",first.n);
	printf("Second data:%d\n",second.n);
	head.next=&first;
	printf("%d\n",head.next->n);
	first.next=&second;
	printf("%d\n",first.next->n);
	printf("%d\n",(head.next->next)->n);
	return 0;
}
