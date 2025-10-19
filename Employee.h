#pragma once

#include <iostream>
#include <iomanip>
#include "Date.h"
using namespace std;

class Employee{
private:
    string name;
    int idNumber;
    Date hireDate;
public:
    Employee();
    Employee(string aName, int anIdNumber, Date aDate);
    void setEmployee(string aName, int anIdNumber, Date aDate);
    void setName(string aName);
    void setIdNumber(int idNumber);
    void setDate(Date aDate);
    string getName() const;
    int getIdNumber() const;

    friend istream &operator>>(istream &in, Employee &tempEmployee);
    friend ostream &operator<<(ostream &out, const Employee &tempEmployee);

};