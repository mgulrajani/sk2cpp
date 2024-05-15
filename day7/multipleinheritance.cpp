#include <iostream>
using namespace std;

class Polygon{
    protected:
        int width,height;
    public:
        Polygon(int a,int b):width(a),height(b){}
        int calc_area(){
            cout<<"calculating area"<<endl;
        }
        virtual void data(){cout<<"virtual function";}
        virtual int value(){return 1;}
};
class Print{
    public:
    static void print(int data){
        cout<<data<<endl;
    }

};

class Rectangle:public Polygon,public Print{
    public:
        Rectangle(int a,int b):Polygon(a,b){}
        int calc_area(){
            Polygon::calc_area();
            
            return width*height;}

        void data(){
            cout<<width<<" "<<height<<endl;
        }
        int value(){
            return 2;
        }


};

class Triangle:public Polygon,public Print{
    public:
        Triangle(int a,int b):Polygon(a,b){}
        int calc_area(){return 0.5*width*height;}
        void data(){
            cout<<"Triangle 's height "<<height<<"base is "<<width<<endl;
        }
        int value(){

            return 3;
        }

};

int main(){

Rectangle r1(4,5);
Triangle t1(4,5);
r1.print(r1.calc_area());
Triangle::print(t1.calc_area());

Polygon *p1 = &r1;
Polygon *p2 =&t1;

cout<<p1->calc_area()<<endl;
p1->data();

cout<<p1->value()<<endl;

cout<<p2->calc_area()<<endl;
p2->data();

cout<<p2->value()<<endl;

return 0;
}
