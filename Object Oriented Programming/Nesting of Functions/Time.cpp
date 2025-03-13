#include<iostream>
using namespace std;

class time{
    private:
     int hr;
     int min;

    public:
    time(){
        hr = 0;
        min = 0;
    } 
    void get(){
        cout<<"Enter hours:"<<endl;
        cin>>hr;
        cout<<"Enter minutes:"<<endl;
        cin>>min;
    }
    
    void show(){
        cout<<hr<<endl;
        cout<<min<<endl;
    }

    void add(time t1, time t2);
};

void time :: add(time t1, time t2){
    cout<< t1.hr + t2.hr<<endl;
    cout<< t1.min + t2.min;
}




int main(){
    time t1, t2, t3;
    t1.get();
    t2.get();
    t3.add(t1,t2);


    return 0;
}



