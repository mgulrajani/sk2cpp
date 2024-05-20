#include <iostream>
#include <fstream>
using namespace std;
int main(){
streampos size1;
char *memdata ;

ifstream file1("sun.jpg",ios::in|ios::binary|ios::ate);
ofstream file2("copyofsun2.jpg",ios::binary);

if(file1.is_open()){
   size1 =  file1.tellg();
   memdata  = new char[size1];
   file1.seekg(0,ios::beg);
   file1.read(memdata,size1);
   file1.close();

   cout<<"data read is in the mem";
   delete[] memdata;


}
else{
    cout<<"Unable to open file";
    
}

if (file2.is_open()){

    file2.write(memdata,size1);
    file2.flush();
    cout<<"file copied";
    file2.close();
}
else{
    cout<<"Unable to open file2";
}
return 0;
}