//what is an array 
//array is a series of elements of the same type in contiguous mem allocation it is refered by same name with diff indexes

//declare an ordinary variable
//int x =100 ; it declares x of type int and assigning val 100 to it

#include <iostream>
using namespace std;

void printArray(int arr[],int length){

    for(int i=0;i<length;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){


int arr[]={3,4,5,6,7};
int secondArr[]={4,5,6,7};
printArray(arr,5);
printArray(secondArr,2);

int n;
/* cout<<"Initializing every element of arr to zero"<<endl;
for(n=0;n<5;n++){

   arr[n]=0;
} */

cout<<"printing array elements "<<endl;
for(n=0;n<5;n++){

   cout<<arr[n]<<endl;
}


}
