#pragma once
#include <iostream>
using namespace std;

enum JewelGender { MaleJewel , FemaleJewel, KidsJewel};//listing genders for the jewelry
enum Type {ring, collar, chain, bracellete, earring};//listing types of jewelry
class Jewel
{
    private:
        JewelGender jewelGender;
        Type jewelType;
        int goldMetalWeight;
        double jewelPrice;
        string jewelMetal;

    public:
        Jewel();
        Jewel(const JewelGender &aGender,const Type &aJewelType, 
        const int &aWeight,const double &aPrice, const string &aMetal);
        ~Jewel(){};
        void setJewelGender(JewelGender aGender);
        void setJewelType(Type aJewelType);
        void setGoldMetalWeight(int aWeight);
        void setPrice(double aPrice);
        void setMetal(string aMetal);
        JewelGender getJewelGender() const;
        Type getJewelType() const;
        int getGoldMetalWeight() const;
        double getPrice() const;
        string getMetal() const;
};

//Constructors
Jewel::Jewel(){
    jewelGender = KidsJewel;
    //jewelType = ring;
    goldMetalWeight = 24;
    jewelPrice = 0.0;
    jewelMetal = "FakeGold";
}


Jewel::Jewel(const JewelGender &aGender,const Type &aJewelType, 
    const int &aWeight, const double &aPrice, const string &aMetal){
            
    jewelGender = aGender; jewelType = aJewelType; goldMetalWeight = aWeight;
    jewelPrice = aPrice; jewelMetal = aMetal;
}

//Mutators

void Jewel::setJewelGender(JewelGender aGender){
    jewelGender = aGender; }

void Jewel::setJewelType(Type aJewelType){
    jewelType = aJewelType; }

void Jewel::setGoldMetalWeight(int aWeight){
    goldMetalWeight = aWeight; }

void Jewel::setPrice(double aPrice){
    jewelPrice = aPrice; }

void Jewel::setMetal(string aMetal){
    jewelMetal = aMetal; }

//Accessors

JewelGender Jewel::getJewelGender() const{
    return this->jewelGender; }


Type Jewel::getJewelType() const{
    return this->jewelType; }


int Jewel::getGoldMetalWeight() const{
    return this->goldMetalWeight; }


double Jewel::getPrice() const {
    return this->jewelPrice; }


string Jewel::getMetal() const{
    return this->jewelMetal; }