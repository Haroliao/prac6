#ifndef BITFLIP_H
#define BITFLIP_H
#include "Mutator.h"
#include "Individual.h"

class BitFlip:public Mutator{
    public:
    //variables:

    //functions
    virtual Individual mutate (Individual A, int K);
};

#endif