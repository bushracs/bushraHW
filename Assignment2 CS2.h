//
//  Header.h
//  Assignment2 CS2
//
//  Created by Bushra Al-Qahtani 
//

#ifndef Header_h
#define Header_h

#include <iostream>
#include <cmath>
using namespace std;

class Point{
    
    
public:
    
    Point(){
         X=0;
         Y=0;
    }
    //default constructor
    
    Point(int a, int b){
        X=a;
        Y=b;
    }
    //constructoe with parameters
    
    void setX(int number){
         X = number;
    }
    //setter for x
    
    void setY(int number){
         Y = number;
    }
    //setter for y
    
    double getX(){
        return  X;
    }
    //getter for x
    
    double getY(){
        return  Y;
    }
    //getter for y
    
    void display(){
        cout<<"("<<X<<","<<Y<<")";
    }
    //function to display
    
    double distance( Point &p){
                double d = sqrt( pow(x-p.x,2) +  pow(y-p.y,2) );
        return d;
    }
    //function to calculate the distance
    //overloading
private:
    
    double X,Y;
    float x,y;
    //declaring variables
};

#endif /* Header_h */
