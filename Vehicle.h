#pragma once

class Vehicle{
    private:
    int id;
    double position;
    double speed;
    int lane;

    public:
    //constructor
    Vehicle(int id, int lane, double initial_position);
    
    //behavior
    void accelerate(double amount);
    void brake(double amount);
    void move(double dt);

    int getId() const;
    int getLane() const;
    double getSpeed() const;
    double getPosition() const;
};

