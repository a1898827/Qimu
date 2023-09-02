#include "Motorbike.h"
Motorbike::Motorbike(int ID):Vehicle(ID){}
Motorbike::Motorbike():Vehicle(){}
int Motorbike::getParkingDuration() {
  std::time_t currentTime;
  std::time(&currentTime);
  return (currentTime - timeOfEntry) * 0.75;
};