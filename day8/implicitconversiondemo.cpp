 #include <iostream>
using namespace std;
class A{};

class B{
    public:
         B (const A& a){}  //conversion from A (constructor)
         B& operator= (const A& a){return *this;}  //conversion from A (assignment)
         operator A(){return A();}  //conversion to A (type-cast operator)
};


int main(){

A a1;
B b1 = a1; //calls constructor;
b1 =a1;//assignment

a1 = b1 ; //type-cast 


short a = 10;
int b = a;

float  f =10.6f;
double d = f;

int i =f;
cout<<i<<endl;



}