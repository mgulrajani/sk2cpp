#include <iostream>
#include <fstream>
using namespace std;
int main(){

ifstream file1("data.txt");

ofstream file2("datacopy.txt");

if (!file1 || !file2){
    cout<<"Error in file opening";
}

file1.seekg(10,ios::beg);

string data;

file1>>data;

file2<<data;

cout<<"written on to the file";

file1.close();
file2.close();





return 0 ;
}
