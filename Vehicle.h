#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <chrono>


class Vehicle {
    protected:
    std::time_t timeOfEntry;
    int ID;
    public:
    Vehicle(int ID);
    Vehicle();
    int getID();
    virtual int getParkingDuration();
};

#endif