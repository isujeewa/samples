#include "part.h"
#include <iostream>

using namespace std;

int main()
{
CatalogueEntry screw("screw",12345,0.05);

Part *p1 = new Part(screw);
Part *p2 = new Part(screw);

cout << p1->getName() <<"\n" << p2->getName() << endl;
}
