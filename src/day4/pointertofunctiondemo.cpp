#include <iostream>
using namespace std;
int add(int a,int b){return a+b;}

int subtract(int a,int b){return a-b;}

int calc(int x,int y,int (*fptr)(int,int)){

    int result;
    result = (*fptr)(x,y);
    return (result);
}

int main(){
     
    int (*minus)(int,int) = subtract;

    int m,n;
    m=calc(4,4,add);
    cout<<m<<endl;
    n=calc(6,7,subtract);
    cout<<n<<endl;
    n=calc(4,4,minus);
    cout<<n<<endl;

    return 0 ;
}