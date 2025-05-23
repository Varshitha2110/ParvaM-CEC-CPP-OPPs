#include<iostream>
using namespace std;

class  Bank {
    private:
        int balance=0;
    public:
    // Member data of the class
       string custName,custEmail;
       int acNumber;

    void createAccount(string cName,string cEmail){
        custName = cName;
        custEmail = cEmail;

       }
    void displayInfo(){
        cout<<"Customer Name:" << custName << endl;
        cout<<"Customer Email:" << custEmail << endl;
    }
        // setter
    void addBalance(int account, int amount){
        balance += amount;
        cout<<" the amount has been deposited successfullly";
    }
        // setter
    void withdrawAmount(int account, int amount){
        balance -= amount;
        cout<<"the amount has been withdrawn successfuly";
    }

    // getter
    void checkBalance(){
       cout<<"Bank Balance: "<< balance << endl;
    }
};

int main(){
    Bank cust1; // object Decleared
    string name,email;
    int acNum,amount;
    // we can assign the value to the public member
    cust1.custName="varsha";
    cust1.custEmail= "sm";
    cust1.acNumber = 123456;
    // cust1.balance=amount;// we can't assign the value to th private member
      
    cout<< "Enter your name:";
    cin>> name;
    cout<<" Enter your email:";
    cin>> email;
    cout<< " Enter your account number:";
    cin>> acNum;
    cout<<"Enter the amount to be  deposited:";
    cin>>amount;
     
    cust1.createAccount(name,email);
    cust1.displayInfo();
    cust1.addBalance(acNum,amount);
    cust1.checkBalance();

    cout<< "Enter the amount to be withdrawn:"<<endl;
    cin>>amount;
    cust1.withdrawAmount(acNum, amount);
    cust1.checkBalance();
}