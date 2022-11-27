#include "catalogueentry.h"
using namespace std;

class Part{

private :
 CatalogueEntry& entry;
public :
string getName() {return entry.getName();}
long getNumnber() {return entry.getNumnber();}
float getCost() {return entry.getCost();}
Part(CatalogueEntry& catent) : entry(catent){};


};

