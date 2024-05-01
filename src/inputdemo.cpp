#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){

string priceStr =  "3432432";
int price;
stringstream(priceStr)>>price;

cout<<price+100<<endl;
string name;
int age;
cout<<"What's your name ?"<<endl;
getline(cin,name);
cout<<"Your age"<<endl;
cin>>age;
cout<<"Welcome "<<name;
return 0;

}
