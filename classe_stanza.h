#ifndef ROOM_H
#define ROOM_H

class Room{
    double length;
    double height;
    double large;
    int pers;

    Room(double length, double height, double large);
    
    ~Room();

    float calculate_area();

    float calculate_volume();

    void add_p();
    void add_pp(int n);
    void rm_p();  //<0 no
    void rm_pp(int n);  //<0 no
    void empty();
    int how_many();
    bool is_empty();
    bool is_full();  //11m^3 per persona

};

#endif