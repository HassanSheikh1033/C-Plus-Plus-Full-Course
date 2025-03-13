#include <iostream>
using namespace std;

class Temperature
{
  private:
    float temp;


public:
	Temperature(int value){
		temp = value;
	}
	
    void printValue()
    {
        cout<<"Value of Temperature"<<temp<<endl;
    }

    void operator--(int){
        temp--;
    }

};



int main()
{
    Temperature t1(5);
    t1--;
    t1.printValue();    

    return 0;
}




