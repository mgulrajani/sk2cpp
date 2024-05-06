#include <iostream>
using namespace std;

class Rectangle{

 int length;
 int breadth;

 public:
  //1st constructor takes 2 parameters l and b it assigns to data members
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    //2nd constructor 
    Rectangle(){}

    //getter method
    int getLength(){

        return length;

    }
    //getter 
    int getBreadth(){
        return  breadth;

    }

    //calculate area 
    int calc_area(){
        return length * breadth;
    }

   //operator+ is overloaded , it returns Rectangle object and it takes Rectangle object
    Rectangle operator+(Rectangle r5){

            //your logic of adding 2 rectangles
            Rectangle newRectangle;
            newRectangle.length = length + r5.length;
            newRectangle.breadth = breadth +r5.breadth;
            return newRectangle;

    }
};
int main(){
//functional form where you want to construct Rectangle object by passing 2 args to the constructor

    Rectangle r1(4,5);   //functional form
    Rectangle r3(1,2);
    Rectangle r6 = {2,3};  //POD like init
    Rectangle r7 {4,5};     //uniform init



    Rectangle *r2;

    r2=&r1;

    cout<<r2->calc_area();
    Rectangle r4= r1+r3;
    cout<<"Length of new Rectangle is"<<r4.getLength()<<endl;

    cout<<"Breadth of new Rectangle is"<<r4.getBreadth()<<endl;
    
    cout<<"Area is "<<r6.calc_area()<<endl;

    cout<<"Area is "<<r7.calc_area()<<endl;
    
}

