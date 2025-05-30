#include<iostream>
using namespace std;

class Employee{
    private:
        string employeeID,employeeName;
        int experience;
        float salary;
        

    public:
        void addDetails(string id,string name, int exp,float salary){
            employeeID=id;
            employeeName=name;
            experience=exp;
            this -> salary=salary;
        }

        void showDetails(){
            cout << "The employee with name" << employeeName <<"bearing" <<employeeID << "haveing"
            <<experience << "years of experience and recevies a salary of Rs." << salary << "/-" <<endl;
        }
};

class Skill : public Employee{ //derived class(single inheritance)
     private:
        int  skillCount;
        string *skills; //normal arry

        public:
        //default constructor
        Skill(){}

        Skill(int count){
            skillCount = count;
            skills=new string[skillCount];
            cout << "dynamically created the pointer array-skills " << endl;
            cout << "Enter the " << count << "technology you're familiar with: " <<endl;
            for (int i=0; i<count;i++){ // array initilatization
                cout << "Skill " << i+1 << ":";
                cin >> skills[i];
            }
        }

        void showSkills(){
            cout << "Skills known: " << endl;

            for(int i=0;i<skillCount;i++){ //display the content of skill array
                cout << i+1 <<"." <<skills[i] <<endl;
            }
        }

        ~Skill(){
            delete[] skills;
            cout << "Memory has been cleared by the Destructor";
        }
};

    int main(){
         string emp_name,emp_id;
         int emp_exp,skills_count;
         float emp_salary;

         cout << "Enter the following details of the Employee: " <<endl;
         cout << "Employee ID,Name,years of Experience,Salary" <<endl;
         cin >> emp_id >>emp_name >>emp_exp >> emp_salary;

//pointer referring to the object s1 of skill class which can also inhert the properties of employee class
Skill s1;
Skill *emp1=&s1;

cout << "Enter the number of technology you know: " <<endl;
cin >> skills_count;

//pointer referring to the s1 of the skill class which which can also inhert the properties of employee class
Skill s1(skills_count);
Skill *emp1 = &s1; //pointer object-*emp1

s1.addDetails(emp_id,emp_name,emp_exp,emp_salary);

emp1->showDetails();
emp1->showSkills();

}


 