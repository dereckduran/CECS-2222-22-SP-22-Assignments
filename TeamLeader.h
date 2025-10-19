#pragma once

#include "ProductionWorker.h"
class TeamLeader: public ProductionWorker{
    protected:
        double bonusAmount;
        int neededHours;
        int hoursAttended;
        
    public:
        TeamLeader(): ProductionWorker(){
            bonusAmount = 0.0;
            neededHours = 0;
            hoursAttended = 0;
        }
        TeamLeader(Employee teamLeader,int aShift, double aRate, double aBonus, int someHours, int hoursBeen): ProductionWorker(teamLeader,aShift, aRate){
            setBonus(aBonus);
            setNeededHours(someHours);
            setHoursAttended(hoursBeen);
        }
        
        void setBonus(double aBonus){
            this->bonusAmount = aBonus;
        }
        void setNeededHours(int someHours){
            this-> neededHours = someHours;
        }
        void setHoursAttended(int hoursBeen){
            this->hoursAttended = hoursBeen;
        }
        
        double getBonusAmount()const{
            return this->bonusAmount;
        }
        int getNeededHours() const{
            return this->neededHours;
        }
        int getHoursAttended() const{
            return this->hoursAttended;
        }
        
        friend ostream &operator<<(ostream &out, const TeamLeader &tempLeader){
            cout<<tempLeader.worker<<endl;
            out<<"Monthly Bonus: $"<< tempLeader.bonusAmount<<endl;
            out<<"Required Number of Training Hours: "<< tempLeader.neededHours<<endl;
            out<<"Hours Completed: "<<tempLeader.hoursAttended<<endl;
            return out;
        }
        friend istream &operator>>(istream &in, TeamLeader &tempLeader){
            cin>>tempLeader.worker;
            cout<<"Enter the monthly bonus:";
            in>> tempLeader.bonusAmount;
            cout<<"Enter the required number of training hours: ";
            in>>tempLeader.neededHours;
            cout<<"Enter the amount of hours attended: ";
            in>>tempLeader.hoursAttended;
            return in;
        }
};
