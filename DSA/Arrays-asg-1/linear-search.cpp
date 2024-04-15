#include<bits/stdc++.h>
using namespace std;

int main(){
  // create dynamic array
  int n;
  cout << "Enter no of elements in array : ";
  cin >> n;

  int *arr = new int[n];

  // getting array elements
  for(int i = 0; i < n; i++)
  {
    cout << "Enter " << i << " element: ";
    cin >> arr[i];
  }

  // performing element to be search
  int key;
  cout << "Enter element to be search: ";
  cin >> key;

  // creating temp variable to store searched element index
  int foundAt = -1; // -1 bcz index couldn't be less than 0, easy to check in future

  for(int i = 0; i < n; i++){
    if(arr[i] == key)
    {
      foundAt = i;
      break;
    }
  }
  
  if(foundAt == -1)
    cout << "Element Not Found" << endl;
  else 
    cout << "Element founded at " << foundAt << " index" << endl;

  return 0;
}