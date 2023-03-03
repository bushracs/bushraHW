//
//  main.cpp
//  Assignment2 CS2
//
//  Created by Bushra Al-Qahtani ID: 900221024
//

#include <iostream>
#include <ctime>
#include "Point.h"

using namespace std;


Point center(Point a[], int n){
    
    
    double sum_x=0;
    double sum_y=0;
    
    for(int i=0; i<n; i++){
        sum_x = sum_x+a[i].getX();
        sum_y = sum_y+a[i].getY();
    }
    
    Point r(sum_x/n, sum_y/n);
    
    return r;
    //getting the average
    }

void closest(Point A[], Point B[], int n, Point p){
    
    Point r1 = center(A,n);
    Point r2 = center(B,n);
    
    if(p.distance(r1)<p.distance(r2)){
        cout<<"P is closest to cluster A"<<endl;
    }
    
    else{
        cout<<"P is closest to cluster B"<<endl;
    }
    //comparng the distances
    }


int main() {
    
    srand (time(0));
    //to make sure the random function gets different random numbers every time
    
    Point* A=new Point[200];
    
    
    for(int i=0; i<200; i++){
        A[i].setX(rand() % 19 +71);
        A[i].setY(rand() % 19 +71);
    }
    
    //between 70 and 90
    Point* B=new Point[200];
    
    
    for(int i=0; i<200; i++){
        B[i].setX(rand() % 19 +21);
        B[i].setY(rand() % 19 +21);
    }
    //between 20 and 40
    for(int i=0; i<20; i++){
        
        Point p;
        
        p.setX( rand() % 94 +6);
        p.setY( rand() % 94 +6);
        //between 5 and 100
        
        closest(A,B,200, p);
        //calling the function closest
    }
    
    
    
    return 0;
    }
