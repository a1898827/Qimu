#include <iostream>
#include "Vehicle.h"
#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"

int main (){
    int num; 
    std::string vehicle_type;
    std::cout << "Select a vehicle" << std::endl;
    std::cout << "Bus" << std::endl;
    std::cout << "Car" << std::endl;
    std::cout << "Motorbike" << std::endl;

    std::cin >> vehicle_type;
    
    std::cout << "Enter your number" << std::endl;
    std::cin >> num;
    Vehicle* list = new Vehicle [num];
    for(int i = 0; i < num; i++){
        if (vehicle_type == "Bus"){
            list[i] = Bus();
        }
        else if (vehicle_type == "Car"){
            list[i] = Car();
        }
        else if (vehicle_type == "Motorbike"){
            list[i] = Motorbike();
        }
        else{
            std::cout << "invalid type" << std::endl;
            return 0;
        }
    }

    for(int i = 0; i < num; i++){
        std::cout << list[i].getParkingDuration() << " ";
        std::cout << std::endl; 
    }
    return 0;
}