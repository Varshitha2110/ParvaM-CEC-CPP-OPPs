#include<iostream>
using namespace std;

class Company{
    private:
    string cin;
    int totalworth=0;

    public:
       string gstNum, location;
       int numOfEmp;

       // setter mathod
      void setDetails(string cinNum,int worth){
          cin = cinNum;
          totalworth = worth;
      }

// getter method
     void getDetails(string gstNumber){

     cout<< "Corporate Identity Number:" << cin<< endl;
     cout<< "Total worth of the company:"<< totalworth <<endl;
    
    }
    void getBasicDetails();// declare the member function
};
// func defination outside class
// syntax: return_type class_name::member_function
void Company :: getBasicDetails(){ // scope resolution
    cout<<"GST Number:"<<gstNum<< endl;
    cout<<"Location:"<<location<< endl;
    cout<<"Number of employees:"<< numOfEmp<<endl;
}

int main(){
    Company comp1;
    comp1.gstNum = "123456";
    comp1.location = " bangalore";
    comp1.numOfEmp = 50;
    comp1.getBasicDetails();

    string cinNumber;
    int companyWorth;

    cinNumber = "123456";
    companyWorth = 100000;

    comp1.setDetails(cinNumber,companyWorth);
    comp1.getDetails(comp1.gstNum); 


    
}

    
