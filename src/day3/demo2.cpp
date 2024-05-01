#include <iostream>

using namespace std;


template <class T>
//return type  , function name  (dt para1 ,dt parameter)
 T operation(T a,T b){

    return a+b;

}
template <class T,class S>
//return type  , function name  (dt para1 ,dt parameter)
 S operation1(T a,S b){

    return a+b;

}
template <class T,int N>
//return type  , function name  (dt para1 ,dt parameter)
 int multiply(T a){

    return int(a*N);

}

int main(){
 int x=5,y=2;

 double m=5.0, n =2.0;

int result =  operation<int>(x,y);
cout<<result<<endl;
double reslt = operation<double>(m,n);
cout<<reslt<<endl;

double reslt2 = operation1(x,m);
cout<<reslt2<<endl;

double reslt3 =  multiply<int,3>(10);

cout<<reslt3<<endl;

}

//if i have overloaded functions which have same definition , I can gp
//for function templates
//c++ generic types
