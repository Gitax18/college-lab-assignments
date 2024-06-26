#include<iostream>
using namespace std;

int *stack;
int cap = 10;
int top = -1;

void push(int data){
  if(top == cap-1)
  {
    cout << "Stack Overflow" << endl;
    return;
  }
  top++;
  stack[top] = data;
}

void pop(){
  if(top == -1){
    cout << "Stack Underflow" << endl;
    return;
  }
  top--;
}

// void peek(){
//   if(top == -1){
//     cout << "Stack Underflow" << endl;
//     return;
//   }
//   cout << "Peek : " << stack[top] << endl;
// }

bool isEmpty(){
  if(top == -1)
    return true;
  return false;
}

// void display(){
//   for(int i = 0; i <= top; i++){
//     cout << "| " << stack[i] << " ";
//   }
// }

int main(){
  cout << "Enter Stack capacity: ";
  cin >> cap;
  stack = new int[cap];
  bool done = false;
  while(!done){
    int choice;
    cout << "\n\n***** Operation on Stack *****\n"
         << "Press 1 to push Element\n"
         << "Press 2 to pop Element\n"
         << "Press 3 to isEmpty\n" 
         << "Press 4 to exit\n\n" 
         << "Enter Your Choice: ";
    cin >> choice;
    switch(choice){
      case 1:
          int ele;
          cout << "Enter element to push: ";
          cin >> ele;
          push(ele);
          break;
      case 2:
          pop();
          break;
      case 3:
          if(isEmpty())
            cout << "Stack is Empty!!" << endl;
          else 
            cout << "Stack is not Empty." << endl;
          break;
      case 4:
          done = true;
          break;
      default:
          cout << "\n You enter wrong choice, try again !!\n";
          break; 
    }

  } 
  return 0;
}