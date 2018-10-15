#pragma once

#include "Vector.h"

class BaseEntity final {
public:
    int* getFlags();
    int getHealth();
    Vector getVelocity();
    int getMoveType();
};