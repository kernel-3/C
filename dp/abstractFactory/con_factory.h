#pragma once
#include "factory.h"
#include "con_product.h"

// Benz factory
class BenzFactory : public Factory
{
public:
    ICar* CreateCar()
    {
        return new BenzCar();
    }
    IBike* CreateBike()
    {
        return new BenzBike();
    }
};

// BMW factory
class BmwFactory : public Factory
{
public:
    ICar* CreateCar() {
        return new BmwCar();
    }

    IBike* CreateBike() {
        return new BmwBike();
    }
};

// Audi factory
class AudiFactory : public Factory
{
public:
    ICar* CreateCar() {
        return new AudiCar();
    }

    IBike* CreateBike() {
        return new AudiBike();
    }
};
