#include<iostream>
#include<fstream>
using namespace std;

class Car{
    private: 
        string brand,model,varient,features[10];
        int year, price, featureCount;

    public:
        void addCarDetails(string carBrand,string carModel, string carVariant, int year,int price){
            brand = carBrand;
            model = carModel;
            varient = carVariant;
            this->year = year;
            this->price = price;
        }
        void addCarFeatures(int count){
            featureCount = count;
            cout << "Enter the" << count << " features of the car:";
            for(int i=0; i < count; i++){
                cin.ignore();
                getline(cin, features[i]);
            } 
        }
        void storeCarDetails(){
            ofstream store("car_details.txt");
            store << " the Car Details are as follows: " << endl;
            store << " Car Brand:" << brand << endl;
            store << " Car Model:"<<  model << endl;
            store << " Car varient: " << varient << endl;
            store<< " launch year:" << year << endl;
            store << "offer price:Rs." << price << endl;
            store << "Car has these features:" << endl;
            for(int i=0; i < featureCount; i++ ){
                store << "\t" << i+1 << "." << features[i] << endl; 
            }
            store << "----------------";
        }
};
int main(){
    string car_brand, car_model,car_varient,car_features;
    int features_count,launch_year,launch_price;

    cout<< "Enter the Car Details:" << endl;
    cout<< "Brand,Model,Varient,Launch price:" << endl;
    cout<< "Ex: Tata,Curvv,(petrol/Diesel/EV),2025,150000"<<endl;
    cin>> car_brand >> car_model >> car_varient >> launch_year >> launch_price;

    cout << "Enter the number of features:" << endl;
    cin >> features_count;

    Car car1;
    car1.addCarDetails(car_brand,car_model,car_varient,launch_year,launch_price);
    car1.addCarFeatures(features_count);
    car1.storeCarDetails();

    Car car2;
    car2.addCarDetails("audi","Q6","petrol",2019,12345);
    car2.addCarFeatures(4);
    car2.storeCarDetails();


}