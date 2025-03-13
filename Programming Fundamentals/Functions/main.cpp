#include <iostream>
using namespace std;

// Function to calculate speed given distance and time
double calculateSpeed(double distance, double time) {
    if (time != 0) {
        return distance / time;
    } else {
        std::cout << "Error! Division by zero." << std::endl;
        exit(1); // Exit with an error code
    }
}

// Function to calculate time given speed and distance
double calculateTime(double distance, double speed) {
    if (speed != 0) {
        return distance / speed;
    } else {
        cout << "Error! Division by zero." << endl;
        exit(1); // Exit with an error code
    }
}

int main() {
    double distance, speed, time,btn;
    
    cout<<"To calculate Speed: Press 1 \nTo calculate Time: Press 2 "<<endl;
    cin >> btn;

    
    // Call calculateSpeed and calculateTime functions
    if(btn == 1){
    	 cout << "Enter the distance (in units): ";
         cin >> distance;
         cout << "Enter the time: ";
         cin >> time;
         double calculatedSpeed = calculateSpeed(distance, time);
         cout << "Calculated Speed: " << calculatedSpeed << " units per time" << endl;
	}
	else if(btn == 2){
		 cout << "Enter the distance (in units): ";
         cin >> distance;
         cout << "Enter the speed: ";
         cin >> speed;
         double calculatedTime = calculateTime(distance,speed);
         cout << "Calculated Time: " << calculatedTime << " units" << endl;
	}
	
    
    

    // Display the calculated speed and time
    
    

    return 0;
}

