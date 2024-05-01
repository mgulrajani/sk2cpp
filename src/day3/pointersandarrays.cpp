#include <iostream>
using namespace std;
int main(){
int myarr[5];

//arrays are like pointers , because array name itself points to the first element ,first inde3x

int *p;
p=myarr;
*p=10;
p++;
*p=20;
p++;
*p=30;
p++;
*p=40;
p++;

*p=50;
p++;

for(int i=0;i<5;i++){
    cout<<myarr[i]<<endl;
}

int num1=100;
p=&num1;


char *charptr;
short *shortptr;
long *longptr;

cout<<charptr<<" "<<++charptr<<endl;
cout<<shortptr<<" "<<++shortptr<<endl;
cout<<longptr<<" "<<++longptr<<endl;


const char * arr = "hello";

cout<<*(arr+4)<<endl;

 
}