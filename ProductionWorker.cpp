#include "ProductionWorker.h"

ProductionWorker::ProductionWorker(){
    setShift(1);
    setRate(0.0);
}
ProductionWorker::ProductionWorker(Employee aWorker, int aShift, double aRate): Employee(aWorker){
    shift = aShift;
    rate = aRate;
}

void ProductionWorker::setShift(int aShift){
    this->shift = aShift;
}
void ProductionWorker::setRate(double aRate){
    this->rate = aRate;
}

int ProductionWorker::getShift()const{
    return this->shift;
}
double ProductionWorker::getRate()const{
    return this->rate;
}
ostream &operator<<(ostream &out,const ProductionWorker &tempworker){
    cout<<tempworker.worker<<endl;
    out<<"Rate: " << tempworker.rate<<endl;
    out<<"Shift: " << tempworker.shift<<endl;
    
    return out;
}

istream &operator>>(istream &in, ProductionWorker &tempworker){
    cout<< "Enter the details for the employee"<<endl;
    cin>>tempworker.worker;
    cout<<"Rate: ";
    in>>tempworker.rate;
    cout<<"Shift:";
    in>>tempworker.shift;
    
    return in;
}