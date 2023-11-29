#ifndef ENGINE_H
#define ENGINE_H

#include "controller.h"

class engine : public controllerDelegate
{
    public:

        void didChangeGear(Gear gear) override;
        void didStepOnAccelerator(int percent) override;

        engine();
        virtual ~engine();
        engine(const engine& other);
        engine& operator=(const engine& other);

    protected:

    private:
        Gear currentG;
};

#endif // ENGINE_H
