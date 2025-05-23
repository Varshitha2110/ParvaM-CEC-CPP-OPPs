#include<iostream>
using namespace std;
class customer{
    public:
    string firstName, lastName;
    int age, rating;

    // intialize the constructor
    customer(){
        firstName = "varsha";
        lastName = "sm";
        age = 10;
        rating = 5; 
    }
    void showDetails(){
        cout << "customer Name:" << firstName << " "<< lastName<< endl;
        cout<<"customer Age:"<< age << endl;
    }
    void giveRating(int rate); // declaring the member function

    void showRating(){
        cout<< "you've given "<< rating<<"start rating.thankyou!"<<endl;
    }
    
};
//scope resolution operator
void customer :: giveRating(int rate){
    rating = rate;
}
int main(){
    customer cust1;

    cust1.showDetails();
    cust1.showRating();

    customer cust2;

    cust2.firstName = "abir";
    cust2.lastName = "k";
    cust2.age = 23;

    int starRating;

    cout<< "give your rating(0 to 5):";
    cin>> starRating;
    cust2.giveRating(starRating);
    cust2.showRating();
}