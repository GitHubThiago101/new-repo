#include "engine.h"
#include "controller.h"

engine::engine()
{
    //ctor
}

engine::~engine()
{
    //dtor
}

engine::engine(const engine& other)
{
    //copy ctor
}

engine& engine::operator=(const engine& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

engine::didChangeGear(Gear gear){
    currentG = gear;
}

engine::didStepOnAccelerator(int percent){
    if (currentG == ::N){
        cout << "Stop" << endl;
    }
    if (currentG == ::D){
        cout << "Go forward" << percent << " m" << endl;
    }
    if (currentG == ::R){
        cout << "Go back" << percent << " m" << endl;
    }
    if (currentG == ::L1){
        cout << "Go L1 mode" << percent << " m" << endl;
    }
    if (currentG == ::L2){
        cout << "Go L2 mode" << percent << " m" << endl;
    }
}
