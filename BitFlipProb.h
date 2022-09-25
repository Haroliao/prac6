#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include "Mutator.h"
#include "Individual.h"

class BitFlipProb:public Mutator{
    public:
    //variables:
    double num=0;
    //functions
    BitFlipProb(double probability);
    virtual Individual mutate (Individual A, int K);
};

#endif