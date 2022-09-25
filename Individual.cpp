#include <iostream>
#include <stdlib.h>
#include "Individual.h"
#include <cstring>
using namespace std;

Individual::Individual(int length){
   for (int i=0; i<length; i++){
    binaryString+='0';
   }
}
int Individual::getBit(int pos){
     int size=binaryString.length();
    if(pos>size){
        return -1;
    }
    if (binaryString[pos]=='1') {
        return 1;
        }
    if (binaryString[pos]=='0'){
        return 0;
    }
}

string Individual::getString(){
    return binaryString;
    }

Individual::Individual(string DNA){
   binaryString=DNA;
}

void Individual::flipBit(int pos){
    int size=binaryString.length();
        if (pos>size || pos<-1){
            return;
            }
    if (binaryString[pos]=='1') {
        binaryString[pos]='0';
        }
    else{
        binaryString[pos]='1';
        }
        return;
    }
 int Individual::getMaxOnes(){
    int maxOnes=0;
    int count=0;
   int size=binaryString.length();
   for(int i=0; i<size; i++){
    if(binaryString[i]=='1'){
       count++;
    }
    else{
          count=0;
    }
    if(count>maxOnes){
        maxOnes=count;
    }
    }
    return maxOnes;
 }

 int Individual::getLength(){
    int size=binaryString.length();
    return size;

 }