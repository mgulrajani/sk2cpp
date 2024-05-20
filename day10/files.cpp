#include <iostream>
#include <fstream>
using namespace std;
class Student
{
      public:
      struct  stu
      {
        char name[20];
        int roll;
      }s;
   
void put_data(){

    cout<<"Enter name";
    cin>>s.name;
    cout<<"Enter roll number";
    cin>>s.roll;
    fstream file1("student.txt",ios::out|ios::app);
    file1.write((char*)this,sizeof(Student));
    cout<<"wrote data to the file"<<endl;
    file1.close();
    this->get_data();
}

void get_data(){


    int temp;
    cout<<"Enter roll number";
    cin>>temp;
    fstream file("student.txt",ios::in);
    file.seekg(0,ios::beg);
    while(file.read((char*)this,sizeof(Student))){
        if(temp ==s.roll){
            cout<<"Student name"<<s.name<<endl;
            cout<<"Student roll number"<<s.roll<<endl;

        }
    }
}};
int main(){


    Student st;
    st.put_data();
    return 0;
}
