#include <iostream>
using namespace std;
template<typename T1, typename T2>


class Pair {
private:
    T1 first;
    T2 second;

public:
    // Constructor to initialize the pair
    Pair(T1 f, T2 s) {
       first = f; 
       second= s;
    } 

    // Method to get the first value
    T1 getFirst(){
        return first;
    }

    // Method to get the second value
    T2 getSecond(){
        return second;
    }
};



int main() {
    // Example usage
    Pair<int, string> p1(10, "Hello");
    cout << "First: " << p1.getFirst() << ", Second: " << p1.getSecond() << endl;

    Pair<double, char> p2(3.14, 'A');
    cout << "First: " << p2.getFirst() << ", Second: " << p2.getSecond() << endl;


    return 0;
}







