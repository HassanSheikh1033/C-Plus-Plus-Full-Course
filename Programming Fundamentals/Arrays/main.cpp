#include <iostream>
using namespace std;

int main() {
  int arr[5] = {7,5,4,8,2};
  int temp;
  for(int i = 0; i<5; i++){
  	cout<<arr[i]<<" ";
  }
  cout<<endl<<endl;
 
  
  for(int i = 0; i<5; i++){
  	for(int j = i+1; j<5; j++){
  		if(arr[i]>arr[j]){
  			temp = arr[i];
  			arr[i] = arr[j];
  			arr[j] = temp;
		  }
	  }
  }
  
  cout<<"Elements after Sorting: "<<endl;
  for(int i = 0; i<5; i++){
  	cout<<arr[i]<<endl;
  }	
  
  return 0;
}

