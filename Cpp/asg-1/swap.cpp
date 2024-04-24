#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << "\nBefore Swapping \n";
    cout << "Values of a: " << a << endl;
    cout << "Values of b: " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "\nAfter Swapping \n";
    cout << "Values of a: " << a << endl;
    cout << "Values of b: " << b << endl;
    return 0;
}