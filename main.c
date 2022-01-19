#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct node {
	int value;
	struct node *next;	
};
typedef struct node node_t;

void printlist(node_t *head){
	node_t *temp = head;
	while (temp != NULL){
		printf("%d\n", temp->value);
		temp = temp->next;
	}
}
int main(int argc, char *argv[]) {
	
	node_t n1, n2, n3;
	node_t *head;
	node_t *tail;
	n1.value = 1;
	n2.value = 2;
	n3.value = 3;
	
	head = &n1;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	tail = &n3;
	
	
	node_t n4, n5;
	n2.next = &n4;
	n4.next = &n5;
	n5.next = &n3;
	
	n4.value = 4;
	n5.value = 5;
	
	printlist(head);
	return 0;
}