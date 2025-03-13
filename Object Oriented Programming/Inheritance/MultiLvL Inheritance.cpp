#include <iostream>
using namespace std;


// ------------ Student_Class--------- :
class Student
{
protected:
    int roll_number;

public:
    void set_roll_Number(int);
    void get_roll_Number(void);
};

void Student ::set_roll_Number(int r)
{
    roll_number = r;
}
void Student ::get_roll_Number(void)
{
    cout << " The Roll Number is " << roll_number << endl;
}

// ------------ Exams_Class--------- :
class Exams : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exams ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exams ::get_marks()
{
    cout << " The Marks obtained in Maths are " << maths << endl;
    cout << " The Marks obtained in Physics are " << physics << endl;
}


// ------------ Result_Class--------- :
class Result : public Exams
{
    float percentage;
    public:
    void display_result(){
        get_roll_Number();
        get_marks();
        cout<<"Your Percentage is "<<(maths+physics)/2<<"%"<<endl;
    }

};
// ------------ Main_Section --------- :
int main()
{

    
    /*
    Note:
  |  If we are inheriting B from A and C from B: [ A ---> B ---> C ]
     1:A is the base class for B and B is the base class for C.
     2.A-->B-->C is called Inheritance path.
    */



    Result Hassan;
    Hassan.set_roll_Number(54);
    Hassan.set_marks(188.0, 186.0);
    Hassan.display_result();

    return 0;
}



