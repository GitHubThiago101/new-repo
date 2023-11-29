#include <iostream>
#include "engine.h"
#include "controller.h"
using namespace std;


int main(){
    controller *control = new controller();
    engine eng;

    control->setDelegate(eng);

    control->ChangeGear('N');

    return 0;
}
