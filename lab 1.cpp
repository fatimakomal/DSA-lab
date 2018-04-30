#include<iostream>
using namespace std;

int main(){
	int a=-1,y;
	int array[100];
	char op;
	cout<<"In stack"<<"\nTo push enter p";
	cout<<"\nTo delete enter d";
	cout<<"\nTo display enter s";
	cout<<"\nTo exit enter e\n";
	line:
	cin>>op;
	switch (op){
	
	case 'p':
		cout<<"enter no to push\n";
		a++;
		cin>>array[a];
		cout<<"pushed at "<<a<<"\n";
		break;
	case 'd':
		cout<<"dlting current\n";
		a--;
		break;
	case 's':
		for(int b=0;b<=a;b++){
			cout<<array[b]<<endl;
		}
		break;
		case 'e':
			exit;
}
goto line;
}

