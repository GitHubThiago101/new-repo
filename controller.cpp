#include "controller.h"

controller::controller()
{
    //ctor
}

controller::~controller()
{
    //dtor
}

controller::controller(const controller& other)
{
    //copy ctor
}

controller& controller::operator=(const controller& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

controller::CsetDelegate(controllerDelegate &delegate){
    delegate = *g;
}

controller::ChangeGear(Gear gear){
    delegate->didStepOnAccelerator(gear);
}

controller::StepOnAccelerate(int percent){
    delegate->didChangegear(gear);
}
