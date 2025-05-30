#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream read("a.text");
    string file_content;
    // syntax for using the getline();
    // getline(oject,string)
    getline(read,file_content); 
    cout << "the first line contains: " << endl;
    cout << file_content;
    read.close();

    // to print all the lines,we need to make use of some loop
    ifstream show("a.txt");
    string all_content;
    cout<< " the file contains:" << endl;
    while(getline(show,all_content)){
        cout << file_content;
    }
    read.close();

    // to print the first charcter of the file 
    ifstream fin("a.txt");
    char letter;
    fin.get(letter);
    cout << "the first letter of the file is:" << letter;
    fin.close();

    // we can use any word to make an oject,ex: write,out,fout,fwrite

    ofstream out("a.txt");
    out.put('g');
    out << "ood morning!";
    out.close();
}
