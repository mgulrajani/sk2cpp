#include <iostream>
using namespace std;

int num1;  //outside any function -global variable

namespace sp1{

    const double pi=3.1416;
    double value(){return 2*pi;}
}
int f1(){

    int x;
    x=0;

}


int f2(){
   num1=45;
   int x=10;
   int num1=90;
   cout<<num1;

}

int main(){
using sp1::value;
using sp1::pi;

    f1();
    f2();
cout<<num1;

cout<<endl;
cout<<value()<<'\n';
cout<<pi<<endl;

}