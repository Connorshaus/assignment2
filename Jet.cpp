//
// Created by Connor Hausmann
//


#include "Jet.h"

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

string Jet::getNumberOfEngines() {
    return numberOfEngines;
}

int Jet::setNumberOfEngines(int numberOfEngines) {
    return numberOfEngines;

}

double Car::mileageEstimate(double time, int numberOfEngines) {
    double mileage = 69 * time;
    if (fuelType == "Rocket") {
        mileage += mileage * 0.055;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           getNumberOfEngines();
}i
