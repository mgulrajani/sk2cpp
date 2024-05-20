#include <iostream>
#include <fstream>
using namespace std;
int main(){

ifstream file1("sun.jpg",ios::binary);
ofstream file2("copyofsun2.jpg",ios::binary);

if (file1 && file2){
    file2<<file1.rdbuf();
    cout<<"Image copied";

}else {
   cout<<"Files having problems ";


}
file1.close();
file2.close();

return 0;
}
