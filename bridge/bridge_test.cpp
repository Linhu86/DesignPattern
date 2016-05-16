#include <iostream>
#include "bridge.h"
#include "bridge_imp.h"

class RefinedAbstraction;

int main()
{
  AbstractionImp *p_impa = new ConcreteAbstractImpA();

  RefinedAbstraction *p_abs = new RefinedAbstraction(p_impa);

  p_abs->operation();
   
  return 0;
}



