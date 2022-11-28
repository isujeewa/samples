#ifndef PART_H
#define PART_H
#include "catalogueentry.h"
#include "component.h"
using namespace std;

class Part : public Component{

private :
 CatalogueEntry& entry;
public :
string name() {return entry.getName();}
long number() {return entry.getNumnber();}
float cost() {return entry.getCost();}
Part(CatalogueEntry& catent) : entry(catent){};


};

#endif