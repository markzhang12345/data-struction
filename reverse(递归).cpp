#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
struct Node* head;

void insert(int data){
	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
	Node* temp2 = head;
	if(temp2 == NULL){
		head = temp1;
		return ;
	}
	while(temp2->next != NULL){
		temp2 = temp2->next;
	}
	temp2->next = temp1;
}

void print(){
	Node* temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void reverse(Node *p){

	if(p->next == NULL){
		head = p;
		return ;
	}
	reverse(p->next);
	Node* q = p->next;//以下三行形成反转的基本结构 
	q->next = p;
	p->next = NULL;
}

int main(){
	head = NULL;
	insert(2);
	insert(4);
	insert(6);
	insert(5);
	print();
	printf("\n");
	reverse(head);
	print();
	return 0;
}
