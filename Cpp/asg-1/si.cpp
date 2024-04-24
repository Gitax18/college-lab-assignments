#include<bits/stdc++.h>
using namespace std;

float simpleInterest(int principal, float rate, int time){
  float interest = (principal * rate * time) / 100;
  return interest;
}

int main(){
  int p, t;
  float r;
  cout << "Enter principal amount: ";
  cin >> p;
  cout << "Enter annual rate: ";
  cin >> r;
  cout << "Enter time tenure: ";
  cin >> t;
  int interest = simpleInterest(p, r, t);
  cout << "\n Your Interest will be " << interest << " rupess.";
  cout << endl;
  return 0;
}