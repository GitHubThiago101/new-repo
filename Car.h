#ifndef CAR_H
#define CAR_H


class Car
{
    public:
        Car();
        virtual ~Car();
        Car(const Car& other);
        Car& operator=(const Car& other);

    protected:

    private:
};

#endif // CAR_H
