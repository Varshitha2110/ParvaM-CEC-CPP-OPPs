#include<iostream>
using namespace std;

class Pizza{
    private:
        string secretIngredient;

    public:
       string Pizzatype, size;
       int price;
       bool  ispaymentDone;

        void orderPizza(){
         cout<<"Order the pizza by selecting your favorite pizza:"<< endl;
       }
    
        void bookPizza(){
           cout<< "order the pizza by selecting your favorite pizza:"<<endl;
       }
       
        void bakePizza(string type, string pizzaSize){
           Pizzatype = type;
           size = pizzaSize;
           cout << " Pizza Type:" << Pizzatype  << ",size" << size <<  endl;
       }

        
        void addIngredient(string secret){
           secretIngredient = secret;
       }

        void confirmOrder(){
            cout << "Order confirmed!" << endl;
       }

        bool checkPayment( int money,bool payment){
            price = money;
            ispaymentDone = payment;
            if(ispaymentDone == true){
                cout << " Amount Paid: Rs." << price << ",Payment Successful!"<< endl;
                confirmOrder();
                bookPizza();
                return true; 
            }
            else {
                cout<<" Amount paid: Rs." << price << ", Payment Successful!"<< endl;
                return false;
            }
       }

       void servePizza(int amount,bool paid,string typeOfPizza,string sizeOfpizza, string secretItem){
        if(!checkPayment(amount,paid)){
            cout << "order cancelled due to the pending payment!"<< endl;
            return;
        }
        bakePizza(typeOfPizza,sizeOfpizza);
        addIngredient(secretItem);
        cout<<"Pizza served! Enjoy your Pizza";

       }
};
    

int main(){
    string pizzaType,size, secreting;
    int pizzaAmount;
    bool amountPaid;

    Pizza customer1;
    customer1.orderPizza();

    cout << "Enter the pizza Type (veg/nonveg), size (Regular/medium,Large):";
    cin >> pizzaType >> size;

    pizzaAmount = 399;
    cout<<" did the pay the amount(Type 'true' if paid/Type 'false' if not paid):";
    cin >> amountPaid;

    customer1.servePizza(pizzaAmount,amountPaid,pizzaType, size, secreting);

}