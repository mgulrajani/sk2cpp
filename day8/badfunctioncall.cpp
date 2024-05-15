#include <iostream>
#include <functional>
using namespace std;

int main(){
function<int(int,int)> f1 = plus<int>();
function<int(int,int)> f2 = minus<int>();

try{


    cout<<f1(10,20) <<endl;
    cout<<f2(30,40)<<endl;


}catch(bad_function_call &e){
    cout<<"Bad function call "<<endl;
}

    return 0;
}