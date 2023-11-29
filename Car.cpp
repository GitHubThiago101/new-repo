#include "Car.h"

Car::Car()
{
    //ctor
}

Car::~Car()
{
    //dtor
}

Car::Car(const Car& other)
{
    //copy ctor
}

Car& Car::operator=(const Car& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
