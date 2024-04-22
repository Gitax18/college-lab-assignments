#include<iostream>
using namespace std;

int *queue;
int cap;
int rear = -1;
int front = 0;

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

  for(int i = front; i <=rear; i++){
    queue[i] = queue[i+1];
  }

  rear--;
}


bool isEmpty(){
  if(rear == -1)
    return true;
  return false;
}

// void display(){
//   cout << endl;
//   for(int i = front; i <= rear; i++)
//     cout << "| " << queue[i] << " ";
//   cout << endl;
// }

int main(){
  cout << "Enter Queue capacity: ";
  cin >> cap;
  queue = new int[cap];
  bool done = false;
  while(!done){
    int choice;
    cout << "\n\n***** Operation on Queues *****\n"
         << "Press 1 to enqueue Element\n"
         << "Press 2 to dequeue Element\n"
         << "Press 3 to check isEmpty\n" 
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
          if(isEmpty())
            cout << "Queue is Empty" << endl;
          else 
            cout << "Queue is not Empty." << endl;
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