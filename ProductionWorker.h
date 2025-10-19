#pragma once
#include <iostream>
#include "Employee.h"
using namespace std;

class ProductionWorker: public Employee{
    protected:
        Employee worker;
        int shift;
        double rate;

    public:
    ProductionWorker();
    ProductionWorker(Employee aWorker, int shift, double rate);
    void setShift(int aShift);
    void setRate(double aRate);
    int getShift()const;
    double getRate() const;

    friend ostream &operator<<(ostream &, const ProductionWorker &);
    friend istream &operator>>(istream &, ProductionWorker &);

};