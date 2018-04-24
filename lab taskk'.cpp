#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
	int data;
	struct Node*next;
	
};
struct Node*head=NULL;
void insert(int x){
	struct Node*temp=(Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}

void print()
{
	struct Node*temp=head;
	cout<<"list is ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
		
	}
	cout<<endl;
}
int main(){
	head=NULL;
	cout<<"how many numbers"<<endl;
	int n,i,x,y;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter the number"<<endl;
		cin>>x;
		insert(x);
		print();
	
	}
	
}
