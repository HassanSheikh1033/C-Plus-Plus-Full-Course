#include<iostream>
using namespace std;

class ArrayOp{
	public:

    void insertion(int arr[5]){
	
	int val,loc; 
	
	cout<<"Enter a value"<<endl;
	cin>>val;
	cout<<"Enter a location"<<endl;
	cin>>loc;
	
	for(int i=4; i>=loc; i--){	
		arr[i+1]=arr[i];
	}
	
	arr[loc]=val;
	
	for(int i=0; i<5; i++)
	{
		cout<<arr[i];
	}
}



void deletion(int arr[5]){

	int N=4;
	int n;
	
	cout<<"Enter a value to delete"<<endl;
	cin>>n;
	for( int i=n; i<N; i++){	
		arr[i]=arr[i+1];
	}  
	
    N=N-1;	
      
	for(int i=0; i<N; i++)
	{
		cout<<arr[i];
	}
}



void updation(int arr[5]){
	int n;
	int n1;

	cout<<"Enter a new value"<<endl;
	cin>>n1;
	cout<<"Enter a index"<<endl;
	cin>>n;
	for( int i=0; i<5; i++){	
		if(i==n){
			arr[i]=n1;
		}
	}	

	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
}


void search(int arr[5]){
	int n1;

	cout<<"Enter a new value"<<endl;
	cin>>n1;
	for( int i=0; i<5; i++){	
		if(arr[i] == n1){
			cout<<"Value get at "<<i;
		}
	}	
}

};



int main()
{
	int arr[5]={2,4,5,6};
	ArrayOp op1;
    cout<<"1.Insertion -- 2. Deletion -- 3. Updation -- 4.Search. "<<endl;
	
	int op;
	cout<<"Enter the Operation "<<endl;
	cin>>op;

	
	  switch (op) {
        case 1:
            op1.insertion(arr);
            break;
        case 2:
            op1.deletion(arr);
            break;
        case 3:
            op1.updation(arr);
            break;
        case 4:
            op1.search(arr);
            break;
        default:
            cout << "Invalid Operation." << endl;
    }
     
	return 0;
}







