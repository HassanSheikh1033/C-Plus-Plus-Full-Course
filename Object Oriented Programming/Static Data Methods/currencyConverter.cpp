#include <iostream>
using namespace std;



class Converter{
    private:
        static int value;

     public:
        Converter(int usd){
            value = usd;
        }   

        static void Convertion(){
            value *= 0.7;
            cout<<"USD into Euro is:"<<value;
        }
};


int Converter:: value;



int main(){
    Converter c1(100);

    Converter::Convertion();

}
