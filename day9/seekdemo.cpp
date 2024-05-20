#include <iostream>
#include <fstream>
using namespace std;
int main(){

streampos begin ,end;
ifstream file1("sun.jpg",ios::binary);
begin =  file1.tellg();
file1.seekg(0,ios::end);
end=file1.tellg();
file1.close();
cout<<"size is"<<(end-begin)<<" bytes \n";

return 0;

}
