#include <iostream>
using namespace std;

class Pen{

    int id;
    string brand;
    double price;

    public:
        Pen(){}
        Pen(int i,string b,double p):id(i), brand(b),price(p){}
        void getDetails(){
            cout<<"Id is"<<this->id<<"Brand is"<<this->brand<<"Price is"<<this->price<<endl;

        }

        friend Pen getCopyPen(const Pen&);
};
Pen getCopyPen(const Pen& p1){
    Pen p2;
    p2.id = p1.id;
    p2.brand = p1.brand;
    p2.price = p1.price;
    return p2;

}

int main(){

Pen p4;
Pen p5(1,"apple ipad pen",13400);
p4 =getCopyPen(p5);

p4.getDetails();
return 0;

    
}