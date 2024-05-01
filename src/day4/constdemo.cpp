#include <iostream>
using namespace std;
void increment(int *start,int *stop){

    int *current =start;
    while (current != stop){
        ++(*current); //here you are incrementing the value pointed by current pointer
        ++current; //here you are incrementing the pointer 

    }
}


void noincrementonlyprint(const int *start,const int *stop){

    const int *current =start;
    while (current != stop){
        cout<<*current<<endl;
            ++current; //here you are incrementing the pointer 

    }
}
int main(){

    int nums[]={10,20,30};

    increment(nums,nums+3);
    noincrementonlyprint(nums,nums+3);
    
    int x;
    int y =10;
    const int *ptr =  &y;
    x=*ptr;  //i can read the value pointed by ptr

}