#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
  for(int i = 0; i < n; i++){
    int min = i;
    for(int j = i; j<n; j++){
      if(arr[j] < arr[min])
        min = j;
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }

}

int main(){
  int arr[] = {12, 32, 2, 45, 21, 98, 0, 1};
  int n = sizeof(arr)/sizeof(arr[0]);
  selectionSort(arr, n);

  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}