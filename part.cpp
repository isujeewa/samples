#include "part.h"

Part::Part(string nm, long num ,float cst){
    name=nm;
    number=num;
    cost=cst;
}

Part::Part(const Part& p){
    name=p.name;
    number=p.number;
    cost=p.cost;
}

Part::Part( ){
    name="";
    number=-1;
    cost=0.0;
}