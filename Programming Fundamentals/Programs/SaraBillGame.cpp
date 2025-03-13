#include<iostream>
using namespace std;

int Sara(int n) {
	int opt;
	cout<<"Sara's turn:\n1: +1\t2: -1\n";
	cin>>opt;
	
	switch(opt) {
		case 1:
			n = n + 1;
			break;
		case 2:
			n = n - 1;
			break;
		default:
			cout<<"Please choose a correct option";
			break;
	}
	
	cout<<"\nCurrent Ans: "<<n<<endl;
	return n;
}

int Bill (int n) {
	int opt;
	cout<<"Bill's' turn:\n1: +1\t2: -1\n";
	cin>>opt;
	
	switch(opt) {
		case 1:
			n = n + 1;
			break;
		case 2:
			n = n - 1;
			break;
		default:
			cout<<"Please choose a correct option";
			break;
	}
	
	cout<<"\nCurrent Ans: "<<n<<endl;
	return n;
}

int main() {
	
	int n;
	cout<<"Enter the number you want to start the game with: ";
	cin>>n;
	cout<<endl;
	
	for(int i=1; i<11; i++) {
		
		n = Sara(n);
		
		if(n % 3 == 0) {
			cout<<"Sara wins :)";
			break;
		}
		
		if(i == 10) {
			cout<<"Bill wins :)";
			break;
		}
		
		n = Bill(n);
		
	}
	
	
	return 0;
}
