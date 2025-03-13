#include <iostream> 
using namespace std;


class DiscountCalculator{ 
    static int finalPrice;
    static int price, discount;
    public:
    DiscountCalculator(int v1, int v2){
        price = v1;
        discount = v2;
    } 
    
    static void priceCalculator(){
        finalPrice = price - discount ;
        cout<<"Your Final Price is:"<<finalPrice<<endl;
    }
    
};


 int DiscountCalculator :: finalPrice ;
 int DiscountCalculator :: price;
 int DiscountCalculator :: discount ;




int main(){
    DiscountCalculator d(30,5);
    DiscountCalculator :: priceCalculator();

    return 0;
}
 
 
 
 
 
