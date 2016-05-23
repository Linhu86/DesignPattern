#ifndef __STATE_H__
#define __STATE_H__

#include "context.h"

class Context;

class State
{
  public:
    State();
    virtual ~State();
    virtual void OperationInterface(Context *context) = 0;
    virtual void OperationChangeState(Context *context) = 0;
  protected:
    bool ChangeState(Context *context, State *state);
};

class ConcreteStateA : public State
{
  public:
    ConcreteStateA();
    virtual ~ConcreteStateA();
    virtual void OperationInterface(Context *context);
    virtual void OperationChangeState(Context *context);

};

class ConcreteStateB : public State
{
  public:
    ConcreteStateB();
    virtual ~ConcreteStateB();
    virtual void OperationInterface(Context *context);
    virtual void OperationChangeState(Context *context);

};


#endif



