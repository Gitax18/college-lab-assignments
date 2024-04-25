#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
  if(a>b) return a;
  else return b;
}

int max(int a, int b, int c){
  return max(max(a, b), c);
}

int main(){
  int a = 1, b = 4, c = 3;
  cout << max(a,b) << endl;
  cout << max(a, b, c) << endl;
  return 0;
}