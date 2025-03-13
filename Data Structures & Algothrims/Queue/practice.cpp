#include<iostream>
using namespace std;

class QueueArray{
    public:
      int size = 100;
      int arr[size];
      int front = -1;
      int rear = -1;

      bool isEmpty(){
        return rear == -1 && front == -1;
      }

      bool full(){
        return (rear + 1)%size == front;
      }

      void add(int data){
        if(full()){
          cout<<"overflow";
        }
        if(front == -1){
          front = 0;
        }
        rear = (rear + 1)%size;
        arr[rear] = data;
      }

      void remove(){
        if(isEmpty()){
          return -1;
        } 
        int data = arr[front];
        if(front == rear){
          front = rear = -1;
        }else{
          front = (front + 1) % size;
        }
        return data;
      }

};


