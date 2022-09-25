#ifndef MUTATOR_H
#define MUTATOR_H
#include <string>
#include "Individual.h"

class Mutator{
    public:
    virtual Individual mutate (Individual A, int K)=0;
};

#endif