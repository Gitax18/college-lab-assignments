#include<iostream>
using namespace std;

int *queue;
int cap;
int rear = -1;

void enqueue(int data){
  if(rear == cap-1){
    cout << "Queue overflow\n";
    return;
  }
  rear++;
  queue[rear] = data;
}

void dequeue(){
  if(rear == -1){
    cout << "No Elements" << endl;
  }

  for(int i = 0; i <=rear; i++){
    queue[i] = queue[i+1];
  }

  rear--;
}

void display(){
  cout << endl;
  for(int i = 0; i <= rear; i++)
    cout << "| " << queue[i] << " ";
  cout << endl;
}

int main(){
  cout << "Enter Queue capacity: ";
  cin >> cap;
  queue = new int[cap];
  bool done = false;
  while(!done){
    int choice;
    cout << "\n\n***** Operation on Stack *****\n"
         << "Press 1 to enqueue Element\n"
         << "Press 2 to dequeue Element\n"
         << "Press 3 to display Stack\n" 
         << "Press 4 to exit\n\n" 
         << "Enter Your Choice: ";
    cin >> choice;
    switch(choice){
      case 1:
          int ele;
          cout << "Enter element to enqueue: ";
          cin >> ele;
          enqueue(ele);
          break;
      case 2:
          dequeue();
          break;
      case 3:
          display();
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