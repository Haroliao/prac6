#include <iostream>
#include "Mutator.h"
#include "Individual.h"
#include "BitFlip.h"
#include <string>
#include <stdlib.h>
Individual BitFlip::mutate(Individual A, int K){
    K=K%A.getLength();
    K-=1;
    A.flipBit(K);
    return A;
}
