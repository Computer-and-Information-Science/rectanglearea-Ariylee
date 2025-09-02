#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;
  const double area = length * width;
  const double perimeter = 2 * (length + width);
  cout << "Program to compute and output the perimeter and area of a rectangle" << endl;
  cout << "Length = " << length << endl;
  cout << "Width = " <<width << endl;
  cout << "Area = " <<area << endl;
  cout << "Perimeter = " << perimeter << endl;
  
  return 0; 


}