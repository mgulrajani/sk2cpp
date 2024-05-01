#include <iostream>
using namespace std;
void operation(void *data,int ptrsize){

     if(ptrsize == sizeof(char)){
        char *cptr;
        cptr=(char*)data;
        ++(*cptr);

     }
     else if(ptrsize == sizeof(int)){
        int *iptr;
        iptr=(int*)data;
        ++(*iptr);


     }
}
int main(){

 char a = 'x';
 int b=902;
 operation(&a,sizeof(a));
 operation(&b,sizeof(b));
 cout<<a<<" "<<b<<endl;
return 0;
} // namespace std

