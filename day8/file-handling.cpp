#include<iostream>
#include<fstream> //header file for handling files(read/write)
using namespace std;

int main(){
  //fstream headerfile provides 3 classes
  //fstreambase
  // ifstream (it is derived by fstream)-read from the file
  // ofstream (it is derived by fstream)-write to the file
    //writing in the file
    ofstream out("sample.txt");
    string name;
    int age;

    cout << "Enter your name and age: ";
    cin >> name >> age;
    out << "Hello" << name <<"!" <<endl;
    cout << "You're " <<age << "years oid." <<endl;
    out.close();

    ifstream read("sample.txt");
    string line;
  while (getline(read,line)){
    cout <<line <<endl;
  }
    read.close();
}
