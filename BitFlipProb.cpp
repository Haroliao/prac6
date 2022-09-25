#include <iostream>
#include "Mutator.h"
#include "Individual.h"
#include "BitFlipProb.h"
#include <string>
#include <stdlib.h>
BitFlipProb::BitFlipProb(double probability){
    num=probability;
}
Individual BitFlipProb::mutate (Individual A, int K){
      for (int x=0;x<A.getLength();x++){
        if (num==1){A.flipBit(x);continue;}
        if (num==0){A.flipBit(x);continue;}
        double z=float(rand())/float(RAND_MAX);
        if (num>=z){
            A.flipBit(x);
        }
    }
    return A;
}