#include <iostream>
#include <string>
#include <sstream>

using namespace std;
struct product{

    int id;
    double price;
    string description;
    int weight;
}p1,p2,products[3],*sptr;

struct cart{

    int id;
    product products[3];
};

void printproduct(product p);
int main(){
int i=0;
//definition of a product data structure


//here we are going to create 2 products , apple and banana
product  *apple;
product  watermelon;
apple->id=1;
apple->description="red juicy apples";
apple->price=100;
apple->weight=200;

printproduct(apple);

for(i=0;i<3;i++){


    cout<<"Enter Id"<<endl;
    cin>>products[i].id;
    cout<<"Enter description"<<endl;
    getline(cin,products[i].description);
    cout<<"Enter price"<<endl;
    cin>>products[i].price;
    cout<<"Enter weight"<<endl;
    cin>>products[i].weight;
}

for(i=0;i<3;i++){
printproduct(products[i]);
}
}

void printproduct(product * p){
    cout<<p->id<<endl;
    cout<<p->description<<endl;
    cout<<p->price<<endl;
    cout<<p->weight<<endl;

}