#include<bits/stdc++.h>
using namespace std;

void inputArr(int *arr, int n){
  for(int i = 0; i < n; i++){
    cout << "enter " << i << " element: ";
    cin >> arr[i];
  } 
}


void deleteArr(int *arr, int &n, int ele){
  int searchFlag = -1;
  
  for(int i = 0; i < n; i++){
    if(arr[i] == ele){
      searchFlag = i;
      break;
    }
  }

  if(searchFlag != -1){
    for(int i = searchFlag; i < n-1; i++){
      arr[i] = arr[i+1];
    }
    n--;
  }


}

int main(){
  while(1){
    int choice;
    cout << "\n\n****** Operations on Arrays ******" << endl 
         << "Enter 1 to input array elements" << endl 
         << "Enter 2 to add new element" << endl 
         << "Enter 3 to delete element" << endl 
         << "Enter 4 to press element at given position" << endl 
         << "Enter 5 to exit the program" << endl << endl;

    cin >> choice;
    int *arr = nullptr;
    switch(choice){
      case 1:
          int n;
          cout << "Enter size of array: " << endl;
          cin >> n;
          arr = new int[n];
          inputArr(arr, n);   
          break;
      
      case 2:
          int ele;
          cout << "Enter the new element :";
          cin >> ele;
          arr[n-1] ele;
          break;
      
      case 3:
          cout << "Enter the element to delete: ";
          cin >> ele;
          deleteArr(arr, ele);
          break;
      
      case 4:
          int pos;
          cout << "Enter the position : ";
          cin >> pos;
          cout << "Enter the element : ";
          cin >> ele;
          
    }

    delete arr;

  }
  return 0;
}