#include<iostream>
using namespace std;



class LibraryMember;

class library{
	private:
		char book[5] = {'a','b','c','d','e'};
	public:
		friend void displayBooks(library l, LibraryMember m);	
		

		void show(){
			for(int i=0; i<5; ++i){
				cout<<book[i]<<endl;
			}
		}
};



class LibraryMember{
	private:
		int id;
	public:
		LibraryMember(int id){
			this->id = id;
		}
		
		friend void displayBooks(library l, LibraryMember m);	
};



void displayBooks(library l, LibraryMember m){
	cout<<m.id;
	l.show();
}






int main(){
	library l;
	LibraryMember m(1);
	
	displayBooks(l, m);
	
	
	return 0;
}





