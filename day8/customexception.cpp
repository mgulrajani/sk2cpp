#include <iostream>
#include <exception>
#include <new>

using namespace std;
class customexception : public exception{

virtual const char* what() const throw(){
    return "Custom Exception happened";
}

}customexception1;


int main(){
try{

int *myarray  =new int[10000];

}
catch(bad_alloc &b){
   cerr<<"Bad Allocation "<<b.what()<<endl;
   
}
    
/* 
try{

int result = 100;
if (result <=100)
//some instructions
throw customexception1;}
catch(exception& e){
    cout<<e.what()<<endl;
} */
return 0;

}


