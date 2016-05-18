#ifndef __COMPOSITE_H__
#define __COMPOSITE_H__

#include "component.h"
#include <vector>

using namespace std;

class Composite : public Component
{
  public:
    Composite();
    ~Composite();
    void Operation();
    void Add(Component *com);
    void Remove(Component *com);
    Component *GetChild(int index);
  private:
    vector<Component *> comVec;
};


#endif

