#include "state.h"

#include <iostream>
using namespace std;

State::State()
{
  cout << "Constructing State" << endl;
}

State::~State()
{
  cout << "Deconstructing State" << endl;
}

bool State::ChangeState(Context *context, State *state)
{
  context->ChangeState(state);
  return true;
}

ConcreteStateA::ConcreteStateA()
{
  cout << "ConcreteStateA constructing" << endl;
}

ConcreteStateA::~ConcreteStateA()
{
  cout << "ConcreteStateA deconstructing" << endl;
}

void ConcreteStateA::OperationInterface(Context *context)
{
  cout << "ConcreteStateA::Operation Interface... change state to B" << endl;
}

void ConcreteStateA::OperationChangeState(Context *context)
{
  OperationInterface(context);
  this->ChangeState(context, new ConcreteStateB());
}

ConcreteStateB::ConcreteStateB()
{
  cout << "ConcreteStateB constructing" << endl;
}

ConcreteStateB::~ConcreteStateB()
{
  cout << "ConcreteStateB deconstructing" << endl;
}

void ConcreteStateB::OperationInterface(Context *context)
{
  cout << "ConcreteStateB::Operation Interface...change state to A" << endl;
}

void ConcreteStateB::OperationChangeState(Context *context)
{
  OperationInterface(context);
  this->ChangeState(context, new ConcreteStateA());
}




