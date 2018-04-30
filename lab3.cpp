#include<iostream>
using namespace std;

int main(){
	int a=-1,y=0;
	int array[100];
	char op;
	cout<<"In queue"<<"\nTo push press p";
	cout<<"\nTo delete press d";
	cout<<"\nTo display press s";
	cout<<"\nTo exit press e\n";
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
		cout<<"dlting \n";
		y++;
		break;
	case 's':
		for(int b=y;b<=a;b++){
			cout<<array[b]<<endl;
		}
		break;
		case 'e':
			exit;
}
goto line;
}

