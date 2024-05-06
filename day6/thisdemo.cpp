#include <iostream>
using namespace std;

class Circle{

    private:
       double radius;

    public:
        static int n;
        Circle(){n++;}
        Circle(double radius){
            n++;
            this->radius = radius;
        }
        
        double calc_area(){
            return this->radius *this->radius *3.14;
        }   

        static int getN(){
            cout<<Circle::n<<endl;

        }

};

int Circle::n=0;

class Cylinder{

    private:
        Circle circle;
        double height;
    public:
        /* Cylinder(Circle circle,double height){
            this->circle = circle;
            this->height = height;

        }
        Cylinder(Circle *cptr,double h){
            this->circle = *cptr;
            this->height = h;

        }*/

        
        Cylinder(Circle *cptr,double h):circle(*cptr),height(h){}
        Cylinder(Circle circle,double height):circle(circle),height(height){}

        double calc_volume(){
            return circle.calc_area() * this->height;
            
        }


};
int main(){
    Circle c1 (4);
   cout<<c1.calc_area()<<endl;

   Circle *c2 =   new Circle(5);
   cout<<c2->calc_area()<<endl;

Circle c3 (4);
   cout<<c3.calc_area()<<endl;

   Circle *c4 =   new Circle(5);
   cout<<c4->calc_area()<<endl;

   Cylinder cyl(c1,10);

   cout<<"volume is"<<cyl.calc_volume()<<endl;

    Cylinder cyl2(c2,10);

   cout<<"volume is"<<cyl2.calc_volume()<<endl;

    cout<<"Circle objects"<<Circle::n<<endl;

}