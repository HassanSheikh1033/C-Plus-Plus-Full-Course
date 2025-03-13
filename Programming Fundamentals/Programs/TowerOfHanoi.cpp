#include<iostream>
using namespace std;

void TowerOfHanoi(int n, string src, string helper, string destination) {
	if(n == 1) {
		cout<<"Move disk "<<n<<" from "<<src<<" to "<<destination<<endl;
		return;
	}
	
	TowerOfHanoi(n-1, src, destination, helper);
	cout<<"Move disk "<<n<<" from "<<src<<" to "<<destination<<endl;
	TowerOfHanoi(n-1, helper, src, destination);
	
}

int main() {
	
	TowerOfHanoi(4, "Source", "Helper", "Destination");
	
	return 0;
}
