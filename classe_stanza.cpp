#include <iostream>
#include "classe_stanza.h"

usin namespace std;

//    double length;
  //  double height;
  //  double large;
  //  int pers;

Room::  Room(double length, double height, double large){
    this->length=length;
    this->height=height;
    this->large=large;
    this->pers=0;
}
    
Room::  ~Room(){
    cout<<"Controller destructor"<<endl;
}

float Room::calculate_area(){
    float area=legth*large;
    return area;
}

float Room::calculate_volume(){
    return length*large*height;
    }

void Room::add_p(){
    pers++;
}

void Room::add_p(int n){
    pers+=n;
}

void Room::rm_p(){   //<0 no
    if(pers==0)
        cout<<"stanza gia' vuota"<<endl;
    pers--;
}  

void Room::rm_p(int n){  //<0 no
    if(pers<n)
        pers=0;
    pers-=n;
}

void Room::empty(){
    if (pers==0)
        cout<<"la stanza e' gia' vuota "<<endl;
    pers=0;
    cout<<"la stanza e' stata svuotata";
}

int Room::how_many(){
    cout<"ci sono "<<pers<<" persone"<<endl;
}

bool Room::is_empty(){   
    if(pers==0)
        return true;
        return false;
}

bool Room::is_full(){  //11m^3 per persona
    if(pers*calculate_volume()>11)
        cout<<"spazio insufficiente ";
    

}