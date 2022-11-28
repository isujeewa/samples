#include <vector>
#include "part.h"
#include "component.h"

using namespace  std;

class Assembly :public Component{
    public:
    Assembly(){}
    void add(Component* p)
    {components.push_back(p);}
    float cost();
    private:
    typedef vector<Component*> ComponentList;
    ComponentList components;

};

