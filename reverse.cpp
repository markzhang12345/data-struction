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

void reverse(){
	Node *current,*prev,*next;
	current = head;
	prev = NULL;
	while(current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

//高效版(c++实现)
//ListNode* res = new ListNode(-1);
//        res->next = head;
//        //前序节点
//        ListNode* pre = res;
//        //当前节点
//        ListNode* cur = head;
//        //找到m
//        for(int i = 1; i < m; i++){
//            pre = cur;
//            cur = cur->next;
//        }
//        //从m反转到n
//        for(int i = m; i < n; i++){
//            ListNode* temp = cur->next;
//            cur->next = temp->next;
//            temp->next = pre->next;
//            pre->next = temp;
//        }
//        //返回去掉表头
//        return res->next; 

//递归方式 

int main(){
	head = NULL;
	insert(2);
	insert(4);
	insert(6);
	insert(5);
	print();
	printf("\n");
	reverse();
	print();
	return 0;
}
