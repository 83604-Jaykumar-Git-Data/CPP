#include "Cylinder.h"

Cylinder::Cylinder():Cylinder(1,1)
{
}

Cylinder::Cylinder(double radius, double height){
  this->radius = radius;
  this->height = height;
}

void Cylinder::setRadius(double radius){
  this->radius = radius;
}
void Cylinder::setHeight(double height){
  this->height = height;
}

double Cylinder::getRadius(){
  return this->radius;
}

double Cylinder::getHeight(){
  return this->height;
}
double Cylinder::getVolume(){
  return 3.14 * radius * radius *height;
}

void Cylinder::printVolume(){
  cout<<"Volume of cylinder ::--"<<this->getVolume()<<endl;
}

const double Cylinder::PI =3.14;