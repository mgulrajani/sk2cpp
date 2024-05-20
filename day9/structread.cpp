#include <stdio.h>
#include <iostream>
using namespace std;

struct Person{

    int id;
    char fname[20];
    char lname[20];


};


int main(){

FILE *fptr =  fopen("persondata.bin","rb");

if (fptr == NULL){

    cout<<"Error in files";
    return 1;

}

struct Person p1;

fread(&p1,sizeof(p1),1,fptr);

cout<<p1.fname<<endl;
cout<<p1.lname<<endl;
fclose(fptr);

return 0;
}
