#include <iostream>
using namespace std;
class Student{
    public:
int age;
private:
int roll;
public:
void rolls(int a){
    roll=a;
}
void display(){
    cout<<"roll number "<<roll<<endl;
    cout<<"age "<<age;
}
Student(){
    cout<<"constructor is called"<<endl;
}
Student(int a,int r){
    age = a;
    roll=r;
}
};
int main ()
{
  Student s1;
  Student *s=new Student;
  Student s3 (44,101);
  s3.display();
 /* s->rolls(44);
  s->display();
s1.rolls(23);
s1.display();
return 0;*/
}