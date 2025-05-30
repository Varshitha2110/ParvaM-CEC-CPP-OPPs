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
            cout << "The employee with name" << employeeName <<"bearing" <<employeeID << "have"
            <<experience << "years of experience and recevies a salary of Rs." << salary << "/-";
        }
};

int main(){
    string empName,empID;
    int empExp;
    float empSalary;

    cout << "Enter your Name, Employee-ID, years of Experience & Salary:";
    cin >> empName >>empID >>empExp >> empSalary;

    Employee emp1; //objrct created
    Employee *empPtr = &emp1; //pointer is pointing/referring to the object emp1

    //using pointer we can assign the value to the object
   (*empPtr).addDetails(empID,empName,empExp,empSalary);
    (* empPtr).showDetails();

// USING THE POINTER WE CAN ASSIGNING THE VALUE TO THE OBJECT USING POINTER DEREFERNCING & ARROW OPERATOR
     empPtr->addDetails(empID,empName,empExp,empSalary);
     empPtr->showDetails();

      // dynamiclly allocatinh the memory for the pointer object(no object referred)
      //syntax:className *pointer_name=new className
     Employee *ptrEmp = new Employee;
     ptrEmp->addDetails("PM123","Ashu",3,50000.00);
     ptrEmp->showDetails();
     // emp1.addDetails  <==> (*empPtr).addDetails <==> empPtr-> addDetails
}