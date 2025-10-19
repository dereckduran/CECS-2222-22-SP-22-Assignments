#pragma once
#include <iostream>
using namespace std;

#include "PlainBox.h"
enum BoxType {Jewelry, Watches};
template<typename ItemType>
class JewelryBox: public PlainBox<ItemType>{

    private:
        BoxType boxType;

    public:
        JewelryBox();
        JewelryBox(const BoxType &aBoxType);
        JewelryBox(const ItemType &anObject, const BoxType &aBoxType);
        ~JewelryBox(){}
        void setBox(BoxType aBoxType);
        BoxType getBox() const;
};

template<typename ItemType>
JewelryBox<ItemType>::JewelryBox(): PlainBox<ItemType>(){
    boxType = Watches; }

template<typename ItemType>
JewelryBox<ItemType>::JewelryBox(const BoxType &aBoxType): PlainBox<ItemType>(){
    boxType = aBoxType; }

template<typename ItemType>
JewelryBox<ItemType>::JewelryBox(const ItemType &anObject, const BoxType &aBoxType): PlainBox<ItemType>(anObject){
    boxType = aBoxType; }

template<typename ItemType>
void JewelryBox<ItemType>::setBox(BoxType aBoxType){ boxType = aBoxType; }

template<typename ItemType>
BoxType JewelryBox<ItemType>::getBox() const{return this->boxType; }