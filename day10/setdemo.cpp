#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
int numtobesearched = 5;
set<int, greater<int>> myset = {4,4,2,2,3,6,7,5};
for(int i : myset){
    cout<<i<<endl;
}
if(myset.count(numtobesearched) ==1){
cout<<numtobesearched<<" exists in the set";

}
else {

cout<<numtobesearched<<" does not exists in the set";


}
//empty
//size
//erase
//clear

return 0;

}
