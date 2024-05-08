#include <iostream>
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

    
}