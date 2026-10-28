#pragma once
#include "Vehicle.h"
#include <vector>
#include <cstddef>


class TrafficSimulator{
    private:
    std::vector<Vehicle> vehicles;
    
    public:
    //constructor
    TrafficSimulator();

    void addVehicle(const Vehicle& vehicle);
    std::size_t size() const;
    double averageSpeed() const;
    void runStep(double dt);
    const Vehicle& getVehicle(std::size_t index) const;
};