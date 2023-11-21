#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head;

//实现在链表的尾部插入数据 
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

void print_(){
	Node* temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void print(Node* head){
	Node* temp = head;
	if(temp->next != NULL){	
		print(temp->next);
	}
	printf("%d ",temp->data);
}

int main(){
	head = NULL;
	insert(2);
	insert(4);
	insert(6);
	insert(5);
	print_();
	printf("\n");
	print(head);
	return 0;
}
