#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
private:
int maxCapacity;
int currentCount;
Vehicle** vehicles;

public:
ParkingLot(int capacity);
~ParkingLot();

bool parkVehicle(Vehicle* v);
bool unparkVehicle(int id);
int getCount();

int countOverstayingVehicles(int maxParkingDuration);
};
#endif
