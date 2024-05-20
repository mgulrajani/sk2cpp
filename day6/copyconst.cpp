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

ofstream file1("studentdata_obj.txt");
ifstream file2("studentdata_obj.txt");


if(!file1 || !file2){
    cout<<"Error in the files";
}
Student hetal(111,"hetal",45);

Student mitali(122,"mitali",66);

Student hetalduplicate(hetal);
Student newHetal;

cout<<hetal.getDetails()<<endl;
cout<<mitali.getDetails()<<endl;
cout<<hetalduplicate.getDetails()<<endl;

file1.write((char *)&hetal,sizeof(hetal));

cout<<"successfully written the data to the file"<<endl;

file2.read((char *)&newHetal,sizeof(newHetal));


cout<<"reading data from the file  "<<newHetal.id;




file1.close();
file2.close();
return 0;

}