#include <iostream>
using namespace std;
template <typename T>


class Converter{
private:
    T value;

public:    
    void celsiusToFahrenheit(T celsius) {
     value = celsius * 9.0 / 5.0 + 32;
     cout<<value<<endl;
    }


    void kilogramsToPounds(T kilograms) {
     value = kilograms * 2.20462;
     cout<<value<<endl;
    }


    void metersToFeet(T meters) {
     value = meters * 3.28084;
     cout<<value<<endl;
    }

};



int main() {
    Converter <int> c1;
    c1.celsiusToFahrenheit(273);
    c1.kilogramsToPounds(1000);
    c1.metersToFeet(10);


    return 0;
}







