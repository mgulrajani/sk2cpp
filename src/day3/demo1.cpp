//overloaded functions
//functions with same name  , but with different signature , may be their data type of parameters are different , sequence is different  , count is different

#include <iostream>

using namespace std;

int operation(int a,int b){
    return (a*b);
}

double operation(int a,double b){
    return (a/b);
}

double operation(double a,int b){

    return (a/b);
}

int main(){

    int x=5,y=2;

    double m=5.0, n =2.0;

    cout<<operation(x,y)<<'\n';

    cout<<operation(x,n)<<'\n';

    cout<<operation(m,x)<<'\n';
    





}