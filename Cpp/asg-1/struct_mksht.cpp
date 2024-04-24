#include<iostream>
using namespace std;

struct Marksheet{
  int roll;
  string name;
  string std;
  int marks[5];

  void setMarks(int mark, int sub_ind){
    if(sub_ind >= 5) return;
    marks[sub_ind] = mark;
  }

  void display(){
    cout << "\t\tName: " << name << endl 
         << "\t\tRoll No: " << roll << endl
         << "\t\tStandard: " << std << endl
         << "\n\t\t\t** Marks **" << endl;

    for(int i = 0; i < 5; i++){
      cout << "\t\tSubject Code " << i+1 << " marks: \t" << marks[i] << endl;
    } 
  }

};

int main(){
  struct Marksheet student_1;
  cout << "Enter Student Roll no: ";
  cin >> student_1.roll;
  cout << "Enter Student Name: ";
  cin >> student_1.name;
  cout << "Enter Student Standard: ";
  cin >> student_1.std;
  cout << "Enter Student Marks:\n";
  for(int i = 0; i < 5; i++){
    int marks;
    cout << "Enter sub " << i+1 << " marks : ";
    cin >> marks;
    student_1.setMarks(marks, i);
  }
  cout << "\n\t\t*****Student Marksheet*****\n";
  student_1.display();
  return 0;
}