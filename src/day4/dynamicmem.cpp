#include <iostream>
using namespace std;

int main(){

int i,j;
int *ptr;
cout<<"How many numbers for input"<<endl;
cin>>i;
ptr=new (nothrow) int[i];
if(ptr== nullptr){
    cout<<"Error :memory could not be allocated";
}

else{

   for(j=0;j<i;j++){
    cout<<"Enter a value"<<endl;
    cin>>ptr[j];

   }
   cout<<"You have entered ";
   

   for(j=0;j<i;j++){
    cout<<ptr[j]<<endl;
    
  
   }
 delete []ptr;
}

return 0;
}