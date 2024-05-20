#include <stdio.h>
#include <iostream>
using namespace std;

struct Person{

    int id;
    char fname[20];
    char lname[20];


};


int main(){

FILE *fptr =  fopen("persondata.bin","wb");

if (fptr == NULL){

    cout<<"Error in files";
    return 1;

}

struct Person p1 =  {1,"alex","jason"};

int flag =fwrite(&p1,sizeof(struct Person),1,fptr);

if (flag){
    cout<<"successfully written the data";
}

else{
    cout<<"error";
}
fclose(fptr);

return 0;
}