#include<bits/stdc++.h>
using namespace std;

void displayArray(int arr[], const int &n){
  for(int i = 0; i < n; i++)
    cout << "Array[" << i << "] : " << arr[i] << endl; 
}


int main(){
  int arr[] = {23, 43, 6, 2, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  displayArray(arr, size);
  cout << endl;
 
  return 0;
}