#include<iostream>
using namespace std;

class Bike{
    public:
       string brand, model, engine_type;
       int year, price;

       void injectFuel(){
        cout<< "Ingnited the fuel - petrol!";
       }
       void igniteFuel(){
            cout << "Ignite the fuel!" << endl;
       }

       void start(string bikeModel){
        injectFuel();
        igniteFuel();
        cout << model << " started , Happy journey!" << endl;


       }
       void stopAcceleration(){
        cout << "Acceleration stopped!"<< endl;
       }
       void stopFuelFlow(){ // internal data- hidden
        cout << " stopping the fuel"<< endl;
       }
       void stop(){
        stopAcceleration(); // abstraction
        stopFuelFlow();  // abstraction
        cout<< model << "stopped,lock the vechicle!";
       }
};
int main(){
    Bike bike1;
    bike1.brand = "Bajaj";
    bike1.model = "pulsar NS125";
    bike1.engine_type = "BS6 ";
    bike1.year = 2025;
    bike1.price = 150000;
    bike1.start(bike1.model);
    bike1.stop();


}

