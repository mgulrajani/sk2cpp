#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
   vector<int> nums {2,4,1,3,6,5};
   
   for (int n:nums){

    cout<<n<<endl;
   }

   cout<<"using iterators to iterate to nums"<<endl;

   vector<int>::iterator itr1 = nums.begin();
   cout<<"First element in vector nums "<<*itr1<<endl;
   vector<int>::iterator itr2 = nums.end();
   itr2 = nums.end() - 1;
   cout<<"Last element in vector nums "<<*itr2<<endl;
  
  sort(nums.begin(),nums.end());
  for(int a:nums){
    cout<<a<<endl;
  }
    return 0;
}