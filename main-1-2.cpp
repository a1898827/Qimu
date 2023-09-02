#include "ParkingLot.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include <iostream>

int main(){
    ParkingLot p1(10);

    std::string vehicle_type;
    std::cout << "Select a vehicle" << std::endl;
    std::cout << "Bus" << std::endl;
    std::cout << "Car" << std::endl;
    std::cout << "Motorbike" << std::endl;

    std::cin >> vehicle_type;

    Vehicle* vehicle;

    for (int i = 1; i < 11; i++){

         if (vehicle_type == "Bus"){
            vehicle = new Bus(i);
        }
        else if (vehicle_type == "Car"){
            vehicle = new Car(i);
        }
        else if (vehicle_type == "Motorbike"){
            vehicle = new Motorbike(i);
        }
        else{
            std::cout << "invalid type" << std::endl;
            return 0;
        }
        p1.parkVehicle(vehicle);
    }

    int ID; 
    std::cout << "Select an ID from 1 - 10" << std::endl;
    std::cin >> ID;

    p1.unparkVehicle(ID);
    
}