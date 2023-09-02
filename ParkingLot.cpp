#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {
    vehicles = new Vehicle*[capacity];
    for (int i = 0; i < capacity; i++) {
        vehicles[i] = nullptr;
    }
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < maxCapacity; i++) {
        if (vehicles[i] != nullptr) {
            delete vehicles[i];
        }
    }
    delete[] vehicles;
}

bool ParkingLot::parkVehicle(Vehicle* v) {
    if (currentCount >= maxCapacity) {
        std::cout << "The lot is full" << std::endl;
        return false;
    }
    vehicles[currentCount++] = v;
    return true;
}

bool ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < currentCount; i++) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            vehicles[i] = vehicles[currentCount-1];
            currentCount--;
            vehicles[currentCount] = nullptr;
            return true;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
    return false;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
    int n = 0;
    for (int i = 0; i < currentCount; i++){
        if (vehicles[i]->getParkingDuration() > maxParkingDuration){
            n++;
        }
    }
    return n;
}

int ParkingLot::getCount() {
    return currentCount;
}
