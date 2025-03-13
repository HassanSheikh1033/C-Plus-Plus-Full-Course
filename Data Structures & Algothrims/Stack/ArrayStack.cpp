#include<iostream>
using namespace std;


class stack{
	private:
		int arr[4];
		int top = -1;
	public:
		void push();
		void pop();
		void print();
		void peek();
};



void stack::push(){
	if(top == 3){
		cout<<"Stack Overflow";
	} else {
		top++; // 0,1,2,3
		cout<<"Enter Value"<<endl; 
		cin>>arr[top];	// 1
	}
}



void stack::pop(){
	if(top == -1){
		cout<<"underflow";
	}
	else{
		cout<<arr[top]<<" is deleted"<<endl;
		top--;
	}
}



void stack::print(){
	cout<<"Elements in Arrays: "<<endl;
	for(int i = 0; i<arr[top]; i++){
		cout<<arr[i]<<endl;
	}	
} 


void stack::peek() {
    if (top == -1) {
        cout << "Stack is empty, no element to peek" << endl;
    } else {
        cout << "Top element is: " << arr[top] << endl;
    }
}


int main(){
	stack stack;
	stack.push();	// 1 ,0
    stack.push();	// 2,1
    stack.push();	// 3,2
    stack.push();	// 4,3
	stack.print();
	stack.pop();
	stack.pop();
	stack.print();
	return 0;
}





