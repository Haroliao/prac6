#include <iostream>
#include "Mutator.h"
#include "Individual.h"
#include "Rearrange.h"
#include <string>
#include <stdlib.h>
using namespace std;

Individual Rearrange::mutate(Individual A, int K){
    string temporary="";
    if (A.getLength()==1){
        return A;
    }
    if(K==1){
    return A;}

    if(A.getLength()==2 && K==2){
        temporary=A.binaryString.substr(1,1);
        temporary+=A.binaryString.substr(0,1);
        A.binaryString=temporary;
        return A;
    }
    K=K%A.getLength();
    K-=1;
    
    if(K==0){return A;}
    if (K==-1){
        temporary=A.binaryString.substr(A.getLength()-1,A.getLength()-1);
        int size=A.getLength();
        temporary=A.binaryString[A.getLength()-1];
        for (int x=0;x<size-1;x++){
            temporary+=A.binaryString[x];
        }
        A.binaryString=temporary;
        return A;
        }

    temporary=A.binaryString.substr(K,A.getLength()-1);
    temporary+=A.binaryString.substr(0,K);
    A.binaryString=temporary;
    return A;
}
