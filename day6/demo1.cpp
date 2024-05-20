
#include <iostream>
#include <fstream>

using namespace std;
class Student{
    
    public:
    int id;
    string name;
    int marks;

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

Student newHetal;

ifstream file2("studentdata_obj.txt");

if (!file2){
    cout<<"Error";
}

else{

file2.read((char *)&newHetal,sizeof(newHetal));


cout<<"reading data from the file  ";
cout<<newHetal.id;
cout<<newHetal.name;
cout<<newHetal.marks;




}
return 0;
}