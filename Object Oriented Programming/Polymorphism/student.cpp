#include <iostream>
using namespace std;


class Student {
public:
    virtual void calculateCGPA() = 0; 


    int grade; 
    
    virtual void setGrade(int g) {
        grade = g;
    }
};



class Freshman : public Student {
public:
    void calculateCGPA() override {
        cout << "Calculating CGPA for freshman with grade: " << grade << endl;
   
        double normalizedGrade = grade / 100.0 + 0.00001;
   
        double cGPA = normalizedGrade * 4;
        cout << "CGPA: " << cGPA << endl;
    }

    void setGrade(int g) override {
        grade = g;
    }
};



class Sophomore : public Student {
public:
    void calculateCGPA() override {
        cout << "Calculating CGPA for sophomore with grade: " << grade << endl;
        
        double normalizedGrade = grade / 100.0 + 0.00001;
        
        double cGPA = normalizedGrade * 4;
        cout << "CGPA: " << cGPA << endl;
    }

    void setGrade(int g) override {
        grade = g;
    }
};

class Senior : public Student {
public:
    void calculateCGPA() override {
        cout << "Calculating CGPA for senior with grade: " << grade << endl;

        double normalizedGrade = grade / 100.0 + 0.00001;

        double cGPA = normalizedGrade * 4;
        cout << "CGPA: " << cGPA << endl;
    }

    void setGrade(int g) override {
        grade = g;
    }
};




int main() {
    Student* students[3] = {new Freshman(), new Sophomore(), new Senior()};

    
    students[0]->setGrade(85); // Freshman
    students[1]->setGrade(90); // Sophomore
    students[2]->setGrade(95); // Senior

    
    for (int i = 0; i < 3; ++i) {
        students[i]->calculateCGPA();
    }


     return 0;
}






