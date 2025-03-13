#include <iostream>
using namespace std;

class time {
    private:
        int hr;
        int min;
        int sec;

    public:
        time() {
            hr = 0;
            min = 0;
            sec = 0;
        }

        void get() {
            cout << "Enter hours:" << endl;
            cin >> hr;
            cout << "Enter minutes:" << endl;
            cin >> min;
            cout << "Enter second:" << endl;
            cin >> sec;
        }

        void show() {
            cout << hr << ":" << min << ":" << sec << endl;
        }
        

        // Declaration of the add function as a member of the time class
        time add(time t1, time t2, time t3); // parameters as a objects...
};


// Definition of the add function outside the class definition
// syntax: function return type classname :: funcName(parameters);
time time::add(time t1, time t2, time t3) {
    time sum;
    sum.hr = t1.hr + t2.hr + t3.hr;
    sum.min = t1.min + t2.min + t3.min;
    sum.sec = t1.sec + t2.sec + t3.sec;


    // Normalize the minutes if they exceed 60
    if (sum.min >= 60) {
        sum.hr += sum.min / 60;
        sum.min %= 60;
    }
    

    // Normalize the hours if they exceed 24
    if (sum.hr >= 24) {
        sum.hr %= 24;
    }

    return sum;
}



int main() {
    time t1, t2, t3, t4;
    t1.get();
    t2.get();
    t3.get();
    t4 = t1.add(t1, t2, t3); // Use the returned time object
    t4.show(); // Display the sum of t1 and t2

    return 0;
}





