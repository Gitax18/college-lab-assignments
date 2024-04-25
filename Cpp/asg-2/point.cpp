#include<bits/stdc++.h>
using namespace std;

class Point{
  public:
    int x, y;
    Point(int x, int y){
      this->x = x;
      this->y = y;
    }

    void display(){
      cout << "(x, y): " << x << ", " << y << endl;
    }
};

void swap(Point *p1, Point *p2){
  Point *temp = p1;
  p1 = p2;
  p2 = temp;
  delete temp;
}

Point pointSquare(Point p){
  Point pSq(p.x*p.x, p.y*p.y);
  return pSq;
}

int main(){
  cout << "Point 1 and Point 2 before swapping" << endl;
  Point p1(5, 10);
  Point p2(25, 52);
  p1.display();
  p2.display();
  swap(p1, p2);
  cout << "\nPoint 1 and Point 2 after swapping" << endl;
  p1.display();
  p2.display();
  cout << "\nSquare of Point 1 coords" << endl;
  Point p1sq = pointSquare(p1);
  p1sq.display();
  return 0;
}