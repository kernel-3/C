#pragma once
#include "product.h"

// Abstract factory pattern
class Factory {
public:
    enum FACTORY_TYPE {
        BENZ_FACTORY,   // Benz factory
        BMW_FACTORY,    // BMW factory
        AUDI_FACTORY    // Audi factory
    };

    virtual ICar* CreateCar() = 0;      // Production car
    virtual IBike* CreateBike() = 0;    // Production bicycle
    static Factory * CreateFactory(FACTORY_TYPE f); // Create factory
};
