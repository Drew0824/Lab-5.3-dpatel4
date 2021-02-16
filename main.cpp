#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  

  double y2;
  double y1;
  double x2;
  double x1;
  double slope;
  double line;
  double y;
  double x;
  double c;

  cout << setprecision (2) << fixed;

    cout << "Enter x1:\n";
    cin  >> x1;

    cout << "Enter y1:\n";
    cin  >> y1;
    
    cout << "Enter x2\n";
    cin  >> x2;

    cout << "Enter y2\n";
    cin  >> y2;

    slope = (y2 - y1) / (x2 - x1);
    cout << "The slope of the line is:\n" << slope << endl;

    c = y2 + slope * x2;
    
    line = slope * x + c;
    cout << "equation of the line is: y = " << slope << "x + " << c << line << endl;






}  