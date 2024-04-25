#include<bits/stdc++.h>
using namespace std;

class Square{
  private:
    int side;
      
  public:
    Square(int s){
      side = s;
    }

    int perimeter(){
      int per = 4*side;
      return per;
    }

    int area(){
      int ar = side*side;
      return ar;
    }
};

int main(){
  Square sq(5);
  cout << "perimeter: " << sq.perimeter() << endl;
  cout << "area: " << sq.area() << endl;
  return 0;
}