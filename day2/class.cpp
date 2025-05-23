#include<iostream>
using namespace std;

// syntax
// class class_name // Class Declaration
class Student{
    public:
       string name,college,branch; //data
       int sem;
    void show(){ // member function
        cout<<"Name:"<< name <<endl;
        cout<<"college:"<< college <<endl;
        cout<<"Branch:"<< branch <<endl;
        cout<<"semster:"<< sem <<endl;
       }
};
int main(){
    Student student1; // oject creation
    student1.name ="varsha"; //assinging the value to the class using object
    student1.college = "CEC";
    student1.branch = "AIML";
    student1.sem = 2;

    student1.show();

    Student student2; // oject creation
    student2.name ="abir"; //assinging the value to the class using object
    student2.college = "CEC";
    student2.branch = "AIML";
    student2.sem = 2;

    student2.show();
}
