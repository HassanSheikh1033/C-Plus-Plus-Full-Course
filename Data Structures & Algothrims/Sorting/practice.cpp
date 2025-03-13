#include<iostream>
using namespace std;


void inserion(int arr[4]){
    int size = 4;
    for(i = 0; i<size;i++){
    	int key = arr[i];
    	int j = i - 1;
    	while(j >= 0; arr[j] > key){
    		arr[j+1] = arr[j];
    		j--;
		}
		
		arr[j+1] = key;
	}
}


