#include<iostream>
using namespace std;

class  Animal{  // base class -level 0
    string name;
    public:
        void setName(string animalName){
            name=animalName
        }
        void showAnimal(){
             cout << " Name of the Animal:" << name << endl;
        }
};

// Animal -> carnivorus (symbolic representation)
class Carnivore : public Animal{ // derived class /base class -level1
    string vegetation;
    public :
        void setFood( string Food){
            vegetation = Food;

        }

        void showFood(){
             cout << " Type of Animal:" << vegetation <<
        }

};
 
// mammal -> carnivours (symbolic  representation)
class Mammal :  public Carnivore{ // derived class -level 2
    showAnimal();
    showFood()

};

    