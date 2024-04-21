#include<bits/stdc++.h>
using namespace std;

void binarySearch(int arr[], int n, int x){
  int low = 0;
  int high = n-1;
  int searchFlag = -1;


  while(low <= high){
    int mid = (low+high) / 2;
    
    if(arr[mid] == x){
      searchFlag = mid;
      break;
    }
    else if (arr[mid] > x)
      high = mid - 1;
    else 
      low = mid + 1;
  }

  if(searchFlag != -1)
    cout << "The element " << x << " is found at " << searchFlag << " index. "<< endl;
  else 
    cout << "Element Not Found!!!!" << endl;

}

int main(){
  int arr[] = {0, 1, 21, 42, 43, 64, 74, 799, 9098};
  int n = sizeof(arr)/sizeof(arr[0]);
  int ele;

  cout << "Enter the element you want to search: ";
  cin >> ele;

  binarySearch(arr, n, ele);
  return 0;
}