#include<stdlib.h>
#include<iostream>
using namespace std;

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head; 
struct Node* GetNewNode(int x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void Head(int x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head; 
	head = newNode;
}



void Print() {
	struct Node* temp = head;
	cout<<"display : ";
	while(temp != NULL) {
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<"\n";
}


int main() {
	head = NULL; 
	cout<<"how many numbers"<<endl;
	int n,i,x,y;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter nubmer at head "<<endl;
		cin>>x;
	    Head(x); Print(); 
	
}
}

