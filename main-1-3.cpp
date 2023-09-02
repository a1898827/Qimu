#include <iostream>
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
  ParkingLot p2(10);

  std::string vehicle_type;
   Vehicle* vehicle;

  for (int i = 1; i < 11; i++) {
    std::cout << "Select a vehicle" << std::endl;
    std::cout << "Bus" << std::endl;
    std::cout << "Car" << std::endl;
    std::cout << "Motorbike" << std::endl;

    std::cin >> vehicle_type;


    if (vehicle_type == "Bus") {
      vehicle = new Bus(i);
    } else if (vehicle_type == "Car") {
      vehicle = new Car(i);
    } else if (vehicle_type == "Motorbike") {
      vehicle = new Motorbike(i);
    } else {
      std::cout << "invalid type" << std::endl;
      return 0;
    }
    p2.parkVehicle(vehicle);
  }

  std::cout << p2.countOverstayingVehicles(15) << std::endl;
}
