#include<bits/stdc++.h>
using namespace std;

void inputElements(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << "Enter " << i+1 << " element: ";
    cin >> arr[i];
  }
}

void insertToArray(int arr[], int &n, int ele){
  arr[n-1] = ele;
}

void deleteElement(int arr[], int &n, int ele){
  int isThere = -1;

  for(int i = 0; i < n; i++){
    if(arr[i] == ele){
      isThere = i;
      break;
    }
  }

  if(isThere == -1)
    return;
  
  for(int i = isThere; i < n-1; i++){
    arr[i] = arr[i+1];
  }

  n--;
}

void insertAtPosition(int arr[], int n, int pos, int ele){

  if(pos>=n)
    return;

  for(int i = n-1; i>= pos; i--)
    arr[i] = arr[i-1];

  arr[pos] = ele;
}

void displayArray(int arr[], int n){
  cout << endl;
  cout << "The Array is: " << endl;
  for(int i = 0; i < n; i++)
    cout << arr[i] << " ";

  cout << endl;
}

int main(){
  int size;
  cout << "Enter the size of array: ";
  cin >> size;
  int *arr = new int[size];
  bool done = false;
  while(!done){
    int choice;

    cout << "\n ***** Operations on array ***** \n"
         << "Press 1 to enter array elements: " << endl
         << "Press 2 to add new element: " << endl
         << "Press 3 to delete array element: " << endl
         << "Press 4 to add new element at position: " << endl
         << "Press 5 to exit: " << endl
         << endl << "Enter Your Choice: ";
    
    cin >> choice;
    switch(choice){
      case 1:
          for(int i = 0; i < size; i++){
            cout << "Enter " << i+1 << " element: ";
            cin >> arr[i]; 
          }
          displayArray(arr, size);
          break;
      case 2:
          int ele;
          cout << "Enter new element: ";
          cin >> ele;
          insertToArray(arr, size, ele);
          displayArray(arr, size);
          break;
      case 3:
          cout << "Enter element to delete: ";
          cin >> ele;
          deleteElement(arr, size, ele);
          displayArray(arr, size);
          break;
      case 4:
          int pos;
          cout << "Enter position: ";
          cin >> pos;
          cout << "Enter element: ";
          cin >> ele;
          insertAtPosition(arr, size, pos, ele);
          displayArray(arr, size);
          break;
      case 5:
        done = true;
        break;
    }
          
  }
  return 0;
}