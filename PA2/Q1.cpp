#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  // Prompt the user for information about the first rectangle
  int xCoordinate1;
  int yCoordinate1;
  int length1;
  int height1;
  cout << "Enter information about the first rectangle" << endl;
  cout << "x-coordinate: ";
  cin >> xCoordinate1;
  cout << "y-coordinate: ";
  cin >> yCoordinate1;
  cout << "length: ";
  cin >> length1;
  cout << "height: ";
  cin >>  height1;

  // Prompt the user for information about the second rectangle

  int xCoordinate2;
  int yCoordinate2;
  int length2;
  int height2;
  cout << "Enter information about the second rectangle" << endl;
  cout << "x-coordinate: ";
  cin >> xCoordinate2;
  cout << "y-coordinate: ";
  cin >> yCoordinate2;
  cout << "length: ";
  cin >> length2;
  cout << "height:";
  cin >> height2;


  // Figure out the ymax, ymin, xmax, and xmin for each rectangle
  // In doing this, I can figure out whether the rectangles intersect

  int leftEdge1 = xCoordinate1;
  int rightEdge1 = xCoordinate1 + length1;
  int bottomEdge1 = yCoordinate1;
  int topEdge1 = yCoordinate1 + height1;

  int leftEdge2 = xCoordinate2;
  int rightEdge2 = xCoordinate2 + length2;
  int bottomEdge2 = yCoordinate2;
  int topEdge2 = yCoordinate2 + height2;

  // If statement figures out whether the rectangles intersect

  if ((leftEdge1 <= rightEdge2) && (rightEdge1 >= leftEdge2) && (bottomEdge1 <= topEdge2) && (topEdge1 >= bottomEdge2))
    {
      cout << "THE RECTANGLES INTERSECT" << endl;

    }
  else
    cout << "THE RECTANGLES DO NOT INTERSECT" << endl;

  return 0;


}
  

