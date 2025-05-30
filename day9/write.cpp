#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //we have defined the write oject from the ofstrem class

    ofstream write("a.txt"); // opening the file & writing in the file using write oject 

    write << "good morning students,"<< endl;
    write << " we shall work on file handling! " << endl;
    write.close(); // closing the file after writing

    ofstream fout("b.txt");
    fout << " written in the file using another user-defined oject: fout";
    fout.close();

    // we can use any word to make an oject,ex: write,out,fout,fwrite
}