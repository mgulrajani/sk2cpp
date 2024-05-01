#include <iostream>
using namespace std;

class Fan{
    int id;
    string color;
    double price;
    string brand;

public:
    //a constructor is  a special function which is called to allocate memory when an object is created
    Fan(int id,string b,string c,double p){
        id=id;
        brand = b;
        color=c;
        price=p;
    }

    //overloaded constructor

     Fan(){


     }

     Fan(int id, string brand){
            id =id;
            brand=brand;

     }

    void setId(int);
    void setColor(string);
    void setBrand(string);
    void setPrice(double);

    int getId();
    string getBrand();
    string getColor();
    double getPrice(){
        return price;
    };
};

void Fan::setId(int id){
    id=id;
}

void Fan::setBrand(string b){
    brand=b;
}

void Fan::setPrice(double p){
    price=p;
}

void Fan::setColor(string col){
    color =col;
}

int Fan::getId(){
    return id;
}

string Fan::getBrand(){

    return brand;
}

string Fan::getColor(){
    return color;
}

int main(){

    Fan kitchenFan;
    Fan room1Fan(2,"Usha2","Brown",3000);
    Fan room2Fan(3,"Usha3","Golden Brown",3500);
    kitchenFan.setId(1);
    kitchenFan.setBrand("Usha");
    kitchenFan.setColor("white");
    kitchenFan.setPrice(1500);

    cout<<"Room 1 Fan Price is"<<endl;
    cout<<room1Fan.getPrice() ;

    Fan fan4(101,"acer");
    fan4.setPrice(2300);
    fan4.setColor("black");


    Fan fan5,*fan6;

    fan6=&fan5;
    fan6->setBrand("brand1");
    fan6->setPrice(2000);
    fan6->setId(232);
    fan6->setColor("red");






    
}

//create  a class Rectangle , it has length and breadth as data members which are private
//public functions 
//calculating the area --calc_area() 
//constructor with 2 args 

/*create Rectangle object and call calc_area() , call it through a regular variable and also through pointer variable
*/