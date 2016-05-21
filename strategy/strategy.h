#ifndef __STRATEGY_H__
#define __STRATEGY_H__

#include <iostream>
using namespace std;


class Strategy
{
  public:
    Strategy();
    ~Strategy();
    virtual void AlgorithmInterface() = 0;

};

class ConcreteStrategyA: public Strategy
{
  public:
    ConcreteStrategyA();
    ~ConcreteStrategyA();
    void AlgorithmInterface();
};

class ConcreteStrategyB: public Strategy
{
  public:
    ConcreteStrategyB();
    ~ConcreteStrategyB();
    void AlgorithmInterface();
};

class Context
{
  public:
    Context();
    ~Context();
    void doAction(Strategy *strategy);
};


#endif


