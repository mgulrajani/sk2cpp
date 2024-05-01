#include <iostream>
#include <string>
#include <sstream>

using namespace std ;

struct movies{

    string title;
    int year;


};

int main(){

  string yearstr;
  movies m1;
  movies *mptr;
  mptr  = &m1;
  
  cout<<"Enter title"<<endl;
  getline(cin, mptr->title);
  cout<<"Enter year";
  getline(cin,yearstr);
  (stringstream)yearstr>>mptr->year;

  cout<<"You have entered"<<endl;
  cout<<mptr->title;
  cout<<"\n"<<mptr->year<<endl;



    return 0;
}