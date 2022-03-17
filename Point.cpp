
#include "Punto.h"

Point::Point(){
    setX(0.0);
    setY(0.0);
}
Point::Point(double aX, double aY){
    this->x = aX;
    this->y = aY;
}
Point::~Point(){
    
}
void Point::setX(double aX){
    this->x = aX;
}
void Point::setY(double aY){
    this->y = aY;
}
double Point::getX() const{
    return x;
}
double Point::getY() const{
    return y;
}
void Point::display() const{
    cout<<"The coordinate is: ("<< getX() << ","<< getY()<<")."; 
}


