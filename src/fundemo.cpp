#include <iostream>
#include <string>

using namespace std;


int divide(int a , int b=2){

    return a/b;

}

long factorial (long a){

   if (a>1)
      return (a * factorial(a-1));
   else
   return 1;


}
int main(){ 


   long num = 5;

   long fact =  factorial(num);

   cout<<fact<<endl;
   
   int result = divide(4);
   cout<<result<<endl;

   result= divide(90,4);
   cout<<result<<endl;



    return 0;

}



