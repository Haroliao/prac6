#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k){
    Individual* final=new Individual(mPtr->mutate(*indPtr,k));
    //final();
    return final;
}


int main(){

    string input1;
    string input2;
    int k1;
    int k2;
    cin>>input1;
    cin>>k1;
    cin>>input2;
    cin>>k2;
    Individual b1(input1);
    Individual b2(input2);
    BitFlip xx;
    Rearrange xy;


    Individual* in=execute(&b1, &xx, k1);Individual* in2=execute(&b2, &xy, k2);

    cout<<in->binaryString<<" ";
    cout<<in2->binaryString<<" ";
    cout<<in2->getMaxOnes();

    return 0;
}
