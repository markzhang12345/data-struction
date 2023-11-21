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

//��Ч��(c++ʵ��)
//ListNode* res = new ListNode(-1);
//        res->next = head;
//        //ǰ��ڵ�
//        ListNode* pre = res;
//        //��ǰ�ڵ�
//        ListNode* cur = head;
//        //�ҵ�m
//        for(int i = 1; i < m; i++){
//            pre = cur;
//            cur = cur->next;
//        }
//        //��m��ת��n
//        for(int i = m; i < n; i++){
//            ListNode* temp = cur->next;
//            cur->next = temp->next;
//            temp->next = pre->next;
//            pre->next = temp;
//        }
//        //����ȥ����ͷ
//        return res->next; 

//�ݹ鷽ʽ 

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
