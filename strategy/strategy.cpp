#include "strategy.h"

Strategy::Strategy()
{
  cout << "Constructing Strategy." << endl;
}

Strategy::~Strategy()
{
  cout << "Deconstructing Strategy." << endl;
}

ConcreteStrategyA::ConcreteStrategyA()
{
  cout << "Constructing ConcreteStrategyA." << endl;
}

ConcreteStrategyA::~ConcreteStrategyA()
{
  cout << "Deconstructing ConcreteStrategyA." << endl;
}

void ConcreteStrategyA::AlgorithmInterface()
{
  cout << "Implementing algorithm A" << endl;
}

ConcreteStrategyB::ConcreteStrategyB()
{
  cout << "Constructing ConcreteStrategyB." << endl;
}

ConcreteStrategyB::~ConcreteStrategyB()
{
  cout << "Deconstructing ConcreteStrategyB." << endl;
}

void ConcreteStrategyB::AlgorithmInterface()
{
  cout << "Implementing algorithm B" << endl;
}

Context::Context()
{
  cout << "Constructing Context" << endl;
}

Context::~Context()
{
  cout << "Deconstructing Context" << endl;
}

void Context::doAction(Strategy *strategy)
{
  strategy->AlgorithmInterface();
}




