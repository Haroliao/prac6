#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <string>

class Individual{
    public:
    //variables:
    std::string binaryString="";
    //functions
    Individual(int length);
    Individual (std::string DNA);
    std::string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
};

#endif