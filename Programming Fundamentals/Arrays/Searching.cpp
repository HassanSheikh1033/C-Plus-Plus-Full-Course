#include<iostream>
using namespace std;


int main(){
	int arr[5];
	
	cout<<"Enter the Elements: "<<endl;
	for(int i = 0; i<5; i++){
		cin>>arr[i];
	}    
	
	int num;
	int p,l;
	cout<<"Enter the element to search in array: "<<endl;
	cin>>num;
	for(int k = 0; k<5; k++){
		if(arr[k] == num){
		    p = k+1;
			l++;
		}
	}
	
	if(l==1){
		cout<<"Element got find at this location: "<<p<<endl;
	}

    return 0;
}
