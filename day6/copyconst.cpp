#include <iostream>
using namespace std;
class Student{
    int id;
    string name;
    int marks;

    public:
   Student(){cout<<"student object created with default constructor ";}
   Student(int id,string name,int marks):id(id),name(name),marks(marks){}
   Student(const Student &st){
    this->id = st.id;
    this->name=st.name;
    this->marks = st.marks;
   }

   string getDetails(){
    return   this->name;

   }
};


int main(){


Student hetal(111,"hetal",45);

Student mitali(122,"mitali",66);

Student hetalduplicate(hetal);

cout<<hetal.getDetails()<<endl;
cout<<mitali.getDetails()<<endl;
cout<<hetalduplicate.getDetails()<<endl;

    
}