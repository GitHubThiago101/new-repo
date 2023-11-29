#ifndef CONTROLLER_H
#define CONTROLLER_H

enum Gear {
    N,
    D,
    P,
    L1,
    L2
};


class controllerDelegate{
    virtual void didStepOnAccelerator(int percent) = 0;
    virtual void didChangeGear(Gear g) = 0;

};

class controller
{
    public:

        void ChangeGear(Gear gear);
        void StepOnAccelerator(int percent);

        controller();
        virtual ~controller();
        controller(const controller& other);
        controller& operator=(const controller& other);

        void setDelegate(controllerDelegate &delegate);

    protected:

    private:
        controllerDelegate *delegate;
};

#endif // CONTROLLER_H
