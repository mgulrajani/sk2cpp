#include <iostream>
using namespace std;

int main(){

//here we are giving explicitly the end of the string \0
char arr[]={'H','e','l','l','o','\0'};

//string literal can be assigned , here implicitly it will be added

char arr2[]="Hello";

char question1[] = "Which is your fav programming language?";

string question2="What is your expert level in that language?";

char answer1[100];

string answer2;

cout<<question1<<endl;

cin>>answer1;
cout<<question2;
cin>>answer2;
cout<<question1<<answer1<<endl;
cout<<question2<<answer2<<endl;




}
