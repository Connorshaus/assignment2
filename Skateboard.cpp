//
// Created by Connor Hausmann.
//

#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;


double Skateboard::mileageEstimate(double time) {
    double mileage = 0.1 * time;

    if(time > 25 && time < 250) {
	    mileage = (mileage + (time/4));
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
