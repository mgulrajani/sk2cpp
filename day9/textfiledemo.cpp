#include <iostream>
#include <fstream>
using namespace std;
int main(){

    ofstream file1("data.txt",ios::app);
    if (file1.is_open()){
        file1<<"This is a file\n";
        file1<<"writing on to the file \n";
        file1.close();

    }

   else{
    cout<<"File not opened";

   }


    return 0;
}