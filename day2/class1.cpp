#include<iostream>
using namespace std;

class Car{
    //Data 
    public:
    string brand,model,variant,fuel_type;
    int year;
    float price;

    // member function
    void start(){
        cout<< model<<"started!" << endl;

    }
     
     void park(){
        cout<<model<<"parked!"<<endl;

     }
     void stop(){
        cout<<model<<"stopped!"<<endl;

     }
     void display(){
        cout<< "Brand:"<< brand << endl;
        cout<<"Model:"<<model<< endl;
        cout<<"varient:"<<varient<< endl;
        cout<<"fuel type:"<<fuel_type<<endl;
        cout<<"launch year:"<<year<<endl;
        cout<<"price:"<<price<<endl1;
     }
};
int main(){
    Car c1; // oject created for the class Car
    c1.brand ="toyato";
    c1.model ="Innova";
    c1.varient ="6 Seater";
    c1.fuel_type = "diesel";
    c1.year = 2024;
    c1.price = 15,000,00;
    c1.start();
    c1.park();
    c1.stop();
    c1.display();
}
