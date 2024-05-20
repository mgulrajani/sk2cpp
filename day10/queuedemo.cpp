#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main(){

    queue<string> names;

    names.push("tiger");
    names.push("bolt");
    cout<<"Queue data"<<endl;
    while(!names.empty()){

        cout<<names.front();
        names.pop();

    }
   cout<<"size of the names queue"<<names.size()<<endl;
    return 0;

    

}