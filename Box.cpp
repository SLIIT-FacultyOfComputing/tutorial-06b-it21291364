#include "Box.h"

// Implement setters and getters

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return height*length*width;
}
 int Box::getlength(){
   return length;
 }
int Box::getwidth(){
  return width;
}
int Box::getheight(){
  return height;
}
void Box::setlength(int l){
  length=l;
}
void Box::setwidth(int w){
  width=w;
}
void Box::setheight(int h){
  height=h;
}