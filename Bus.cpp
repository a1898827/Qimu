#include "Bus.h"
Bus::Bus(int ID):Vehicle(ID){}
Bus::Bus():Vehicle(){}
int Bus::getParkingDuration() {
  std::time_t currentTime;
  std::time(&currentTime);
  return (currentTime - timeOfEntry) * 0.75;
};