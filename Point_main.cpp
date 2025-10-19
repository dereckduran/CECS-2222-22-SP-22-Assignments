#include <iostream>
#include "Punto.h"
using namespace std;

int main(){
    const int MAX_CAPACITY = 10;
    Point myArrayofPoints[MAX_CAPACITY];
    int n;
    double aX, aY;
    int index;
    
    cout<<"Entre la cantidad de puntos para analizar su cuadrante (< 10): ";
    cin>>n;
    for (int index = 0; index<n; index++){
        cout<< "#"<<index+ 1<<":";
        cin>>aX>>aY;
        myArrayofPoints[index].setX(aX);
        myArrayofPoints[index].setY(aY);
    }
        
    cout<<"Calculating the Quadrant..."<<endl;
    for(int index = 0; index< n; index++){
        if((myArrayofPoints[index].getX() == 0) && (myArrayofPoints[index].getY()==0)){
            myArrayofPoints[index].display();
            cout<<" The coordinate is at the origen."<<endl;
        }
        else if ((myArrayofPoints[index].getX()>0) && (myArrayofPoints[index].getY()>0)){
            myArrayofPoints[index].display();
            cout<<" The given cooordinate is in Quadrant I."<<endl;
        }
        else if((myArrayofPoints[index].getX()<0) && (myArrayofPoints[index].getY()>0)){
            myArrayofPoints[index].display();
            cout<<" The given coordinate is in Quadrant II."<<endl;
        }
        else if((myArrayofPoints[index].getX()<0)&&(myArrayofPoints[index].getY()<0)){
            myArrayofPoints[index].display();
            cout<<"nThe given coordinate is in Quadrant III."<<endl;
        }
        else{
            myArrayofPoints[index].display();
            cout<<" The given coordinate is in Quadrant IV."<<endl;
        }
    }//end for 
   return 0;
}