#include <iostream>
using namespace std;
class T{

    int x;
    string *str;
    public:
    T(){}
     T(int x):x(x){}
     ~T(){
        cout<<"object is destructed";
        delete str;
     }
     //copy constructor
     

      void  setVal(int x) {
        this->x =x;
      }

      int getVal() const{
       
        return this->x;
      }
};

int main(){


T t1(4);
t1.setVal(10);
cout<<t1.getVal()<<endl;

const T t2(5);
cout<<t2.getVal();


return 0;
    
}