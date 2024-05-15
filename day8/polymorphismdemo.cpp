#include <iostream>
using namespace std;

class Polygon{
    
    protected:
        int h,w;
    public:
         Polygon(int a,int b):w(a),h(b){}
        virtual int calc_area()=0;
          
        virtual void data(){cout<<"virtual function";}
        virtual int value(){return 1;}
    
    };

    class Rectangle:public Polygon{
    public:
        Rectangle(int a,int b):Polygon(a,b){}
        int calc_area(){
            
            
            return w*h;}

        void data(){
            cout<<w<<" "<<h<<endl;
        }
        int value(){
            return 2;
        }


};

class Triangle:public Polygon{
    public:
        Triangle(int a,int b):Polygon(a,b){}
        int calc_area(){return 0.5*w*h;}
        void data(){
            cout<<"Triangle 's height "<<h<<"base is "<<w<<endl;
        }
        int value(){

            return 3;
        }

};

int main(){
   
    Rectangle r1(3,4);

    Triangle t1(2,3);

    Polygon *p1;

    Polygon *p2;

//all Rectangles are Polygons

   p1 =&r1;

  //all Triangles are Polygon 

   p2=&t1;

   cout<<p1->calc_area()<<endl;

   cout<<p2->calc_area()<<endl;

    
  

    p1 = new Rectangle(4,4);

    p2=new Triangle(1,2);
    cout<<p1->calc_area()<<endl;

   cout<<p2->calc_area()<<endl;

    delete p1;
    delete p2 ;


    return 0;
}