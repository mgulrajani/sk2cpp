#include <iostream>
using namespace std;

int subtract(int,int);
void swap(int,int);
void swap2(int& , int&);

string concatenate(const string& s,const string& t){
    return s+t;

}
int main(){

int x=5,y=3,z;
//main is the calling env and subtract is called

z=subtract(x,y);

cout<<z<<endl;
swap(x,y);
cout<<"in main function after swap (call by value)"<<x<<y;


swap2(x,y);
cout<<"in main function after swap2 (call by reference)"<<x<<y;
cout<<endl;
string st="";
string s="hello";
string t="there";
st = concatenate(s,t);
cout<<st;

}

int subtract(int a,int b){
    return a-b;

}

void swap(int a, int b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;

    cout<<"in swap function after swap"<<a<<b;
}


void swap2(int& a, int& b){
  int temp = a;
  a=b;
  b=temp;
   cout<<"in swap function after swap"<<a<<b;

}