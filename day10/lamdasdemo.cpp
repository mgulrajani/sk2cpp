#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
void greet(){
   cout<<"Greetings";
    //logic
}
//[] lambda introducer -- start of lambda
//( ) --provide your parameters as in other functions

auto greet1 = [](){

   cout<<"Hello world!";

};

auto add=[](int a,int b){
   int total =  a+b;
 return total;
};


int main(){
 int magic_number = 100;
 
 greet();

 greet1();

int retVal = add(4,4);
cout<<retVal<<endl;


auto new_add =[=](int retVal){
    return magic_number +  retVal;
};


int final_data = new_add(retVal);
cout<<final_data<<endl;


vector<int> nums = {3,4,56,7,2,6,7,8};

int count =  count_if(nums.begin(),nums.end(),[](int i){
    return i%2==0;
});
cout<<"Even count"<<count<<endl;

    return 0;

}