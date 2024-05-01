#include <iostream>

using namespace std;

int i {7};


//declaring
int retVal =10;
float divid(int,float);
//variables declared inside sum1 are local to sum1
//method definition
int sum1(int a,int b){
    //calling/execution /invoking  the average function 
    //not storing the return value of divid 
    divid(a,5.4);
    int total = a+b;
    std::cout<<"Total without return value from divid"<<total<<endl;
// call it once again
//this time I want to store the return value of divid
    float retVal = divid(6,3.2);
    total =  total+retVal;

    std::cout<<"includes the output from divid function";

    return total;
}



//main(){ }  -- function which is defined , function definition

int main(){ //starting of the main

    std::cout<<"hello world"<<endl;
    std::cout<<"hello world1"<<endl;
    std::cout<<"hello world4"<<endl;
    std::cout<<"hello world5"<<endl;
    
    //method call or execution
    int result =  sum1(5,6);
    std::cout<<result<<endl;
    std::cout<<"global variable retVal"<<retVal;
    return 0;
}  //ending of the main

//defining average function
float divid(int a ,float d){

return a/d;


}