#include <iostream>
using namespace std;
int main(){


int num=10;
float fnum=10.9;
float *memadd =  &fnum;

char *charptr;



cout<<memadd<<endl;
//using a * as a dereference operator
//means value pointed at by  memadd is 
cout<<*memadd<<endl;
cout<<&fnum<<endl;
//declared 2 var

int firstvalue = 5;
int secondvalue = 15;
//declared 2 pointers
int *p1,*p2;

//we have assigned addresses of 2 var respectively to the pointers 
p1=&firstvalue;
p2=&secondvalue;

//we are printing the value pointed at by the pointers

cout<<*p1<<endl;
cout<<*p2<<endl;


//i am changing value pointed at by p2 ,setting it equal to value pointed at by p1

*p2=*p1;

//here i am printing value pointed at by p2
cout<<*p2<<endl;
//printing second value

cout<<secondvalue;



}