#include "Vehicle.h"

class Bus: public Vehicle{
    public:
    Bus(int ID);
    Bus();
    int getParkingDuration();
};