#include <iostream>
#include <string>

using namespace std;

int main(){
string message;
int n = 10;

while (n >0){

    cout<<n<<" . ";
    n--;
}

do{
cout<<"Enter your message";
getline(cin,message);
cout<<"You entered "<<message<<"\n";


}while(message != "goodbye!");

int i=0;
//decl , test condition , increment /dec 3 parts sep by ;
for(i=0;i<10;i++){
  cout<<i;

  if(i==3)
  break;
   //logic

}
string str="hello";
for(char c:str  ){

    cout<<"["<<c<<"]";

}
return  0;


}