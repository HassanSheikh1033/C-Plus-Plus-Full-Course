#include<iostream>
using namespace std;

int main() {
	int n = 4;
	for(int i=1; i<=n; i++) {
		
		//spaces
		int spaces = n-i;
		for(int j=1; j<=spaces; j++) {
			cout<<" ";
		}
		
		//stars
		int stars = (i*2) - 1;
		for(int j=1; j<=stars; j++) {
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	//2nd half
	for(int i=4; i>=1; i--) {
		
		//spaces
		int spaces = n-i;
		for(int j=1; j<=spaces; j++) {
			cout<<" ";
		}
		
		//stars
		int stars = (i*2) - 1;
		for(int j=1; j<=stars; j++) {
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	return 0;
}
