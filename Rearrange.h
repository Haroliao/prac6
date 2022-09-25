#ifndef REARRANGE_H
#define REARRANGE_H
#include "Mutator.h"
#include "Individual.h"

class Rearrange:public Mutator{
    public:
    virtual Individual mutate (Individual A, int K);
};

#endif