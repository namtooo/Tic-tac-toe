#include "Vehicle.h"

Vehicle::Vehicle(int id, int lane, double initial_position){
    this->id = id;
    if(lane < 1){
        this->lane = 1;
    }
    else{
        this->lane = lane;
    }
    this->position = initial_position;
    this->speed = 0.0;
}

void Vehicle::accelerate(double amount){
    if(amount > 0){
        this->speed += amount; 
    }
}

void Vehicle::brake(double amount){
    if(amount >= 0){
        if(amount > this->speed){
            this->speed = 0.0;
        }
        else{
            this->speed -= amount;
        }
    }
}

void Vehicle::move(double dt){
    if(dt > 0){
        this->position += this->speed * dt;
    }
}

int Vehicle::getId() const {
    return this->id;
}

int Vehicle::getLane() const {
    return this->lane;
}

double Vehicle::getSpeed() const {
    return this->speed;
}

double Vehicle::getPosition() const {
    return this->position;
}

