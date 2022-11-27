#include <string>
using namespace std;

class CatalogueEntry{
private :
    string name;
    long number;
    float cost;
public :
CatalogueEntry (string nm, long num ,float cst){
    name=nm;
    number=num;
    cost=cst;
}

string getName() {return name;}
long getNumnber() {return number;}
float getCost() {return cost;}

}