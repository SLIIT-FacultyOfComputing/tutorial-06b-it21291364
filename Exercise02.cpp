#include <iostream>
using namespace std;
#include "Box.h"

int main() {
Box box1;
   // 1. Create a Box type object called box1
  
  
   // ======= DO NOT CHANGE THE INPUT ===========
   int height, length, width;
   cout << "Enter the Height of the Box : ";
   cin >> height;
   cout << "Enter the Length of the Box : ";
   cin >> length;
   cout << "Enter the width of the Box : ";
   cin >> width;
   // ===========================================
  
   // 2. Use setters assign height, length, width throw
   box1.setlength(length);
   box1.setwidth(width);
  box1.setheight(height);
  
   // === DO NOT CHANGE THE OUTPUT =============
   cout << "Box Height " << box1.getheight() << endl;
   cout << "Box Length " << box1.getlength() << endl;
   cout << "Box Width " << box1.getwidth() << endl;
   cout << "Volume of Box is " << box1.calcVolume() << endl;
   // ==========================================
      return 0;
}

