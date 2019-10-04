//
// Created by Connor Hausmann
//

#include "Boat.h"

Boat::Boat() {
    myEngineType = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Boat::Boat(string brand, string model, string fuelType, string engineType) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineType(engineType);
}

Boat::~Boat() = default;

string Type::getEngineType() {
    return myEngineType;
}

void Boat::setEngineType(string engineType) {
    if (engineType == "unknown" || engineType == "Inboard" ||
        engineType == "Outboard") {
        myEngineType = engineType;
    } else {
        myEngineType = "unknown";
    }

}

double Boat::mileageEstimate(double time) {
    double mileage = 30 * time;
    if (fuelType == "gas") {
        mileage += mileage * 500;
    }
    return mileage;
}

string Boat::toString() {
    return "-> Boat\n" + PoweredVehicle::toString() + "\n\tEngine Type: " +
           getEngineType();
}
