#include<iostream>
#include<cmath>
using namespace std;

double add(double a,double b){
    return a+b;
}

double subtract(double a, double b){
    return a-b;
}

double multiply(double a,double b){
    return a*b;
}

double divide(double a,double b){
    if(b != 0){
       return a/b;
    }else{
        cout<<"Error! Division by zero."<<endl;
        return 0;
    }
}

double sine(double angle){
    return sin(angle);
}

double cosine(double angle){
    return cos(angle);
}

double tangent(double angle){
    return tan(angle);
}

double Log(double base,double number){
	if(base > 0 && base!= 1 && number >0){
	 	double result = log(number) / log(base);
	 	return result;
	}
}

double square(double num){
	return num * num;
}

double squareRoot(double num){
	return sqrt(num);
}

double factorial(double num){
	int fact=1;
	for(int i =1; i<=num; i++){
		fact *= i;
	}
	return fact;
}

 
int main(){
	do{
    int numFunctions = 12;
    char operations[numFunctions] = {'A', 'B', 'C', 'D', 'E', 'F', 'G','H','I','J','K'};

    double result, numbers[2];
    cout<<"Enter an operation(\n Press A to add Numbers.\n Press B to subtarct Numbers.\n Press C to Multiply Numbers.\n Press D to Divide Numbers.\n Press E to Calculate angle of Sine.\n Press F to calculate angle of Cosine.\n Press G to calculate angle of Tangent.\n Press H to calculate log of Number.\n Press I to calculate Square of Number.\n Press J to calculate the square Root of Number.\n Press K to calculate Factorial on Number.): "<<endl;
    char operation;
    cin>>operation;

    bool validOperation = false;

    for(int i = 0; i<numFunctions; i++){
        if(operation == operations[i]){
            validOperation = true;
            break;
        }
    }
    

    if(!validOperation){
        cout<<"Invalid operation."<<endl;
        return 1;
    }

    cout<<"Enter Numbers: "<<endl;
    for(int i = 0; i<2; i++){
        cin>>numbers[i];
    }
    

    for(int i=0; i<numFunctions; i++){
        if(operation == operations[i]){
            switch(i){
                case 0:
                    result = add(numbers[0],numbers[1]);
                    break;
                case 1:
                    result = subtract(numbers[0],numbers[1]);
                    break;
                case 2:
                    result = multiply(numbers[0],numbers[1]);
                    break;
                case 3:
                    result = divide(numbers[0],numbers[1]);
                    break;
                case 4:
                    result = sine(numbers[0]);
                    break;
                case 5:
                    result = cosine(numbers[0]);
                    break;
                case 6:
                    result = tangent(numbers[0]);
                    break;
                case 7:
                    result = Log(numbers[0],numbers[1]);
                    break;
                case 8:
                    result = square(numbers[0]);
                    break;
                case 9:
                    result = squareRoot(numbers[0]);
                    break;
                case 10:
                    result = factorial(numbers[0]);
                    break;
            }
            cout<<"Result: "<<result<<endl;
            break;
        }
    }
		
		cout<<"\n\n\nPress 1 to exit the Program...";
		int btn;
      	cin>>btn;
      	if(btn == 1){
		exit(1);
	}
	}while(1);
	
    return 0;
}
