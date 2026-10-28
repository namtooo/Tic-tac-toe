#include "TrafficSimulator.h"

TrafficSimulator::TrafficSimulator() {};

void TrafficSimulator::addVehicle(const Vehicle &vehicle)
{
    vehicles.push_back(vehicle);
}

std::size_t TrafficSimulator::size() const
{
    return std::size_t(vehicles.size());
}

double TrafficSimulator::averageSpeed() const
{
    if(vehicles.empty()){
        return 0.0;
    }
    double sum_speed = 0;
    for(std::size_t i = 0; i < vehicles.size(); ++i){
        sum_speed += vehicles[i].getSpeed();
    }

    return sum_speed / vehicles.size(); 
}

void TrafficSimulator::runStep(double dt)
{
    if(dt > 0){
        for(std::size_t i = 0; i < vehicles.size(); ++i){
            vehicles[i].move(dt);
        }
    }
}

const Vehicle &TrafficSimulator::getVehicle(std::size_t index) const
{
    return vehicles[index];
}
