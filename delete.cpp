#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
struct Node* head;

//void insert(int data){
//	Node* temp1 = new Node();
//	temp1->data = data;
//	temp1->next = head;
//	head = temp1;
//}
//在链表头部增加节点 

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
//head是全局变量，在main函数内赋值为NULL
 
void Delete(int n){
	Node* temp1 = head;
	if(n==1){
		head = temp1->next;
		delete temp1;
		return ;
	}
	for(int i = 0;i<n-2;i++){
		temp1 = temp1->next;
	}
	Node* temp2 = temp1->next;
	temp1->next = temp2->next;
	delete temp2;
}

void print(){
	Node* temp = head;
	while(temp != NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	head = NULL;
	insert(2);
	insert(4);
	insert(6);
	insert(5);
	print();
	printf("\n");
	int n;
	scanf("%d",&n);
	Delete(n);
	print();
	return 0;
}
