#include "assembly.h"

float Assembly::cost()
{
    float sum=0.0;
    for(int i=0;i<components.size();i++){
        sum += components[i]->cost();
    }
   
    return sum;
}