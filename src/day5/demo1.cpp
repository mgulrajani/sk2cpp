#include <iostream>
using namespace std;
union un1{
    int i;
    short s;
    char c;
    struct{
        short s1;
        short s2;
       
    }s3;

}mix_1;

int main(){
 cout<<"Enter an integer value"<<endl;
 cin>>mix_1.i;
  cout<<&mix_1.i;
 cout<<"Enter a short value"<<endl;
 cin>>mix_1.s;

 cout<<"Enter a char value"<<endl;
 cin>>mix_1.c;
cout<<&mix_1.c;
 cout<<"Enter a short val for struct"<<endl;
 cin>>mix_1.s3.s1;
cout<<&mix_1.s3;

cout<<"Enter a short val for struct"<<endl;
 cin>>mix_1.s3.s2;

cout<<"Size of union is"<<sizeof(mix_1);


 






    
}