#include <iostream>
#include <map>
using namespace std;

class Pet{

    protected:
        string name;
        string breed;
    public:
       Pet(){cout<<"Pet object instantiated "<<endl;}
       Pet(string n,string b):name(n),breed(b){cout<<"Parent class constructor is called with name and breed"<<endl;}
        void eat(){
            cout<<"Animal eats"<<endl;
        }

        void play(){
            cout<<"Animal plays "<<endl;
        }
        void printDetails(){
            cout<<"Name "<<name<<"Breed"<<breed<<endl;
        }

        friend ostream& operator<<(ostream &s,const Pet &pet){
            return s << pet.name << pet.breed;

        }
        
};


class Cat : public  Pet{
public:
        Cat(){
            cout<<"Cat object created"<<endl;
        }
        Cat(string name,string breed):Pet(name,breed){
            cout<<name<<breed<<endl;
        }
        void eat(){
            cout<<"Cat loves fish"<<endl;
        }

        void play(){
            cout<<"Cats are lazy pets "<<endl;
        }

};

class Dog : public  Pet{
    private:
        bool istrained;
        int height;

public:
        Dog(){cout<<"Dog object created"<<endl;}
        Dog(string name,string breed,bool istrained,int height):Pet(name,breed){
            
            this->istrained=istrained;
            this->height = height;

        }
        void eat(){
            cout<<"Dog loves bones"<<endl;
        }

        void play(){
            cout<<"Dogs  love to play fetch "<<endl;
        }
        void printDetails(){
            if(istrained)
            cout<<"Trained Pet Name "<<name<<"Breed"<<breed<<height<<endl;
        else
         cout<<" Pet Name "<<name<<"Breed"<<breed<<height<<endl;
     
        }

};
int main(){
 Cat cat2;  //default constructor

 Cat cat("Snowy","Persian");  //constructor which takes name and breed

  Dog dog("bolt","goldie",true,3);

  dog.printDetails();
  Cat cat3("angel","Russian");  //constructor which takes name and breed

  Dog dog2("tiger","lab",true,3);
  
  map<int,Pet> petmap;
  petmap.insert(make_pair(1,dog));

  petmap.insert(make_pair(2,cat));

  petmap[3]=cat3;

  petmap[4] = dog2;

  map<int,Pet>::iterator iter1;

  for(iter1= petmap.begin();iter1 != petmap.end();++iter1){
    cout<<iter1->first ;
    cout<<iter1->second<<endl;

  }
  return 0;

  }
