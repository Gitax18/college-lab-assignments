#include<bits/stdc++.h>
using namespace std;

int main(){
  // creating dynamic array
  int n;
  cout << "Enter Number of Elements: " << endl;
  cin >> n;
  int* arr = new int[n];

  // adding elements to the array
  for(int i = 0; i < n; i++)
  {
    cout << "Enter " << i << " element : ";
    cin >> arr[i];
  }  
    

  // assuming that first element is max and min 
  int min = arr[0], max = arr[0];

  // Iterating over the array and comparing every element weight with current min and max
  for(int i = 0; i < n; i++)
  {
    if(min > arr[i])
      min = arr[i];
    if(max < arr[i])
      max = arr[i];
  }

  cout << "The maximum Element in the array is :" << max << endl <<
          "The minimum Element in the array is :" << min << endl; 

  return 0;
}