//
// Created by Connor Hausmann.
//

#ifndef DRIVINGSIMULATOR_BICYCLE_H
#define DRIVINGSIMULATOR_BICYCLE_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

private:
	// nothing

public:
    explicit Skateboard(string brand, string model);

    virtual ~Skateboard();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


