#include <iostream>
using namespace std;

class Square ;

class Rectangle{
int width,height;

public:
int calc_area(){return width*height;}

void convert(Square s);


};

class Square{

friend class Rectangle;
private :
    int side ;
public:
    Square(int a):side(a){}

    };

void Rectangle::convert(Square s){
    this->width=s.side;
    this->height =s.side;

}
int main(){
    Rectangle r1;
    Square s1(4);
    r1.convert(s1);
    cout<<r1.calc_area()<<endl;
    return 0;



    
}