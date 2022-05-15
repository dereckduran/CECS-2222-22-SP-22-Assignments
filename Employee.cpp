#include "Employee.h"


istream &operator>>(istream &in, Employee &tempEmployee){
    cout<<"Name:";
    in>>tempEmployee.name;
    cout<<"ID#:";
    in>>tempEmployee.idNumber;
    cout<<"Hiring Date:"<<endl;
    cin>>tempEmployee.hireDate;

    return in;
}
ostream &operator<<(ostream &out, const Employee &tempEmployee){
    out<<"Name: "<<tempEmployee.name<<endl;
    out<<"ID#: "<<tempEmployee.idNumber<<endl;
    out<<"Hire Date: "<< tempEmployee.hireDate;
    return out;
}

Employee::Employee(){
    setName(" ");
    setIdNumber(0);
    setDate(0);
}
Employee::Employee(string aName, int anIdNumber, Date aDate){
    setName(aName);
    setIdNumber(anIdNumber);
    setDate(aDate);
     
}
void Employee::setEmployee(string aName, int anIdNumber, Date aDate){
    setName(aName);
    setIdNumber(anIdNumber);
    setDate(aDate);
}
void Employee::setName(string aName){
    this->name = aName;
}
void Employee::setIdNumber(int anIdNumber){
    this->idNumber = anIdNumber;
}
void Employee::setDate(Date aDate){
    this->hireDate = aDate;
}
 
string Employee::getName() const{
    return name;
}
int Employee::getIdNumber() const{
    return idNumber;
}

