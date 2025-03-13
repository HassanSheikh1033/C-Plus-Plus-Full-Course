#include <iostream>
using namespace std;

int main() {
  int arr[5] = {8,2,5,9,6};
  int temp;
  for(int i = 0; i<5; i++){
  	cout<<arr[i]<<" ";
  }
  cout<<endl<<endl;
  
  for(int i = 0; i<5; i++){
  	for(int j = 0; j<4; j++){
  		if(arr[j]>arr[j+1]){
  			temp = arr[j];
  			arr[j] = arr[j+1];
  			arr[j+1] = temp;
		  }
	  }
  }
  
  cout<<"Elements after Sorting: "<<endl;
  for(int i = 0; i<5; i++){
  	cout<<arr[i]<<endl;
  }	
  
  return 0;
}


