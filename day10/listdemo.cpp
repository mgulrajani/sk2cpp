#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(){
list <int> list = {2,3,4,5,7,8,8,2,3,4,5};
list.push_back(10);
list.push_front(20);

for(int n:list){
    cout<<n*2<<endl;
}
cout<<list.front()<<endl;
cout<<list.back()<<endl;


list.pop_back();
list.pop_front();
cout<<"after reversing"<<endl;
list.reverse();
for(int a:list){
    cout<<a<<endl;
}
list.unique();
cout<<"Size of the List"<<endl;
cout<<list.size()<<endl;

return 0 ;

}