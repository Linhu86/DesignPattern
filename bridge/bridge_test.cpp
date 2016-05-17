#include <iostream>
#include "bridge.h"
#include "bridge_imp.h"

class RefinedAbstraction;

int main()
{
  AbstractionImp *p_impa = new ConcreteAbstractionImpA();

  AbstractionImp *p_impb = new ConcreteAbstractionImpB();

  RefinedAbstraction *p_abs = new RefinedAbstraction(p_impb);

  p_abs->operation();

  delete p_abs;
   
  return 0;
}



