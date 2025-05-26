#include <iostream>
using namespace std;

class Teacher
{
private: // by default all the data member of the class comes under private access specifiers
    string branch;

public:
    string name, qualification;
    int experience;

    Teacher()
    { // default constructure
        branch = "AIML";
        name = "abir";
        qualification = " ME";
        experience = 5;
    }
    void setData(string tname, string tbranch, string teacherqual, int teacherexp){
        name = tname;
    branch = tbranch;
    qualification = teacherqual;
    experience = teacherexp;
} 
Teacher(string teachername, string teacherbranch, string teacherqual, int teacherexp)
{
    setData(teachername, teacherbranch, teacherqual, teacherexp);
    cout << "Welcome," << name << " to " << branch << " branch." << endl;
    cout << "you've graduated with ," << qualification << " degree. And you've " << experience << " year's of  experience." << endl;
} 
   Teacher(Teacher & t){  // syntax for copy constructure: constructure( refernce )
    name = t.name;
    branch = t.branch;
    qualification = t.qualification;
    experience = t.experience;

   }

   void getData(){
    cout<< "welcome," << name << "to" << branch << "."<< endl;
    cout<< "you've graduated with," << qualification << " degree. and you've "<< experience << " years of experience " << endl;
   }
   ~Teacher(){  // destructor
    cout << " object's work is done, clearing  the memory! ";
   }

   


   

   

   
   
};

int main()
{
    string n, q, b;
    int e;
    Teacher teacher1;

    cout << "Enter your name,qualification,branch & experience:";
    cin >> n >> q >> b >> e;
    Teacher teacher2(n, b, q, e);
    
    Teacher teacher3 = teacher2;
    teacher3.getData();

}
