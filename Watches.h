#pragma once
#include <iostream>
using namespace std;
enum WatchGender {MaleWatch , FemaleWatch, KidsWatch};//listing genders for the jewelry
class Watch{

    private:
        WatchGender watchGender;
        string watchBrand;
        double watchPrice;
    public:
        //construtor
        Watch(){
            watchGender= KidsWatch;
            watchBrand = "FakeWatch";
            watchPrice = 0.0;
        }
        //copy constructor
        Watch(const WatchGender &aWatchGender, const string &aWatchBrand, const double &aWatchPrice){
            watchGender = aWatchGender; watchBrand = aWatchBrand; watchPrice = aWatchPrice;
        }
        //destructor 
        ~Watch(){}
        
        //mutators
        void setWatchGender(WatchGender aGender) {watchGender = aGender;}
        void setWatchBrand(string aWatchBrand) {watchBrand = aWatchBrand;}
        void setWatchPrice(double aWatchPrice) {watchPrice = aWatchPrice;}

        //accessors
        WatchGender getWatchGender() const{ return this->watchGender;}

        string getWatchBrand() const{ return this-> watchBrand;}

        double getWatchPrice() const { return this-> watchPrice;}

};