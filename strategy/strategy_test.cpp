#include "strategy.h"

int main()
{
  ConcreteStrategyA *p_strategyA = new ConcreteStrategyA();
  ConcreteStrategyB *p_strategyB = new ConcreteStrategyB();
  Context *p_context = new Context();
  p_context->doAction(p_strategyA);
  p_context->doAction(p_strategyB);
  return 0;
}



