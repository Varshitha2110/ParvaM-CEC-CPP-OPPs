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
        string skills[10]; //normal arry

        public:
        void setSkills(int count){
            cout << "Enter the " << count << "technology you're familiar with: " <<endl;
            for (int i=0; i<count;i++){ // array initilatization
                cout << "Skill " << i+1 << ":";
                cin >> skills[i];
            }
        }

        void showSkills(){
            cout << "Skills known: " << endl;

            for(int i=0;i<skillCount;i++){ //display the content of skill array
                cout << i+1 <<"" <<skills[i] <<endl;
            }
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

emp1->addDetails(emp_id,emp_name,emp_exp,emp_salary);
emp1->showDetails();

cout << "Enter the number of technology you know: " <<endl;
cin >> skills_count;

emp1->setSkills(skills_count);
emp1->showDetails();
emp1->showSkills();
}


 