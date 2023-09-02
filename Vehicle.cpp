#include "Vehicle.h"

Vehicle::Vehicle(int ID) : ID(ID), timeOfEntry(std::time(&timeOfEntry)){};
Vehicle::Vehicle() : Vehicle(0){};
int Vehicle::getID() { return ID; };
int Vehicle::getParkingDuration() {
  std::time_t currentTime;
  std::time(&currentTime);
  return currentTime - timeOfEntry;
};