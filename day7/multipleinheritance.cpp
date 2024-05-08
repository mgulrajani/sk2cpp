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


};

class Triangle:public Polygon,public Print{
    public:
        Triangle(int a,int b):Polygon(a,b){}
        int calc_area(){return 0.5*width*height;}


};

int main(){

Rectangle r1(4,5);
Triangle t1(4,5);
r1.print(r1.calc_area());
Triangle::print(t1.calc_area());

return 0;
}
