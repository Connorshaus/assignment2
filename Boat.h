//
// Created by Connor Hausmann
//

#ifndef DRIVINGSIMULATOR_BOAT_H
#define DRIVINGSIMULATOR_BOAT_H

#include "PoweredVehicle.h"

class Boat : public PoweredVehicle {

private:
    string myEngineType;

public:
    Boat();

    explicit Car(string brand, string model, string fuelType,
                 string engineType);

    virtual ~Boat();
    string getEngineType();
    void setEngineType(string engineType);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_BOAT_H
