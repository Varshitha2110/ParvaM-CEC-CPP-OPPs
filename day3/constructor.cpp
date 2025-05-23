#include<iostream>
using namespace std;
//constructor name will be same as class name
// there is no return type,no return value
// 3times of constructur default,parameter,copy constructure
class calculate{
      public:
      // member data
         int num1,num2;
         float res;

      
      

   
         // declare function
         calculate(){
          num1 =5;
          num2 = 10;
         }
         // member fuction
         void showOutput(){
            cout << "Addition: "<< num1 + num2 << endl;
            cout<< "subtraction: "<< num1-num2 << endl;
            cout<< "multiplication:"<< num1*num2<< endl;
            cout<< " Quotient:"<< num1/num2 << endl;
            cout<<" reminder:"<< num1%num2<< endl;

         }
            
         
};
int main(){
    //initializing the default value using constructor
    calculate c1; //oject
    // assigning the value to the data members
    calculate c2;
    c2.num1 = 25;
    c2.num2 = 30;
    c1.showOutput(); 
    c2.showOutput();
}
