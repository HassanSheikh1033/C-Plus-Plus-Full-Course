#include <iostream>
using namespace std;


class Time {
	private:
		int hour;
		int min;
		int sec;
	public:
		void get(){
			cout<<"Enter Hours: "<<endl;
			cin>>hour;
			cout<<"Enter Minutes: "<<endl;
			cin>>min;
			cout<<"Enter Seconds: "<<endl;
			cin>>sec;
		}	
		void show(){
			cout<<"Hours are: "<<endl;
			cout<<hour<<endl;
			cout<<"Minutes are: "<<endl;
			cout<<min<<endl;
			cout<<"Seconds are: "<<endl;
			cout<<sec<<endl;
		}
};


int main(int argc, char** argv) {
	Time * ptr = new Time;
	ptr->get();
	ptr->show();
	
	return 0;
}



