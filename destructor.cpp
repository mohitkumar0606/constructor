#include<iostream>
using namespace std;
class Student{
    int rollno;

    public:
    Student(){
        cout<<"constructor is called "<<endl;
    }

    ~Student(){
        cout<<"destructor is called "<<endl;
    }

    

};

int main(){

    // static
    Student s1;
    // s1.rollno =4;

    // dynamic
    Student *s2 = new Student;
    Student *s3 = new Student();

    // by default destructor of static is called but destructor of dynamic is called only by this
    delete s2;
    delete s3;


    return 0;
}