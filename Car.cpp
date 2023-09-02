#include "Car.h"
Car::Car(int ID): Vehicle(ID){};
Car::Car():Vehicle(){};
int Car::getParkingDuration() {
  std::time_t currentTime;
  std::time(&currentTime);
  return (currentTime - timeOfEntry) * 0.75;
};