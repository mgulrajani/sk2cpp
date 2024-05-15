#include <iostream>
using namespace std;
class Base{
    virtual  void data(){}
};
class Derived :public Base{
    int a;
};
class Data{

    double i,j;
};

class Addition{
    int a,b;
    public:
        Addition(int a ,int b){a=a;b=b;}
        int result() {return a+b;}
};

void print(char  *str){
    cout<<str<<endl;
}
int main(){

const char *c = "sample data";
print(const_cast<char *>(c));

try{


Base *base1  = new Derived;

Base *base2 = new Base;

Derived *derived1 ;

derived1= dynamic_cast<Derived*>(base1);

if (derived1==0)
cout<<"null pointer on first type cast\n";

derived1 =dynamic_cast<Derived*>(base2);
if (derived1==0)
cout<<"null pointer on second type cast\n";

}
catch(exception& e){cout<<"Exception"<<e.what(); }



Data d1;

Addition *add1;

add1 =(Addition* )&d1;

cout<<add1->result();




return 0;

}


/* 
dynamic_cast  ---  pointers ad references to classes or void* 
purposeof this dynamiccast --to ensure that the result of the type
conversion points to a valid complete object of the destination type

upcast or downcast

reference of parent  pointing of child class
childclass -- parent


reinterpret_cast
static_cast
const_cast


*/