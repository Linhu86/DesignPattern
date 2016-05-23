#include "context.h"
#include "state.h"

#include <iostream>

using namespace std;

int main()
{
  State *state = new ConcreteStateA();
  Context *context = new Context(state);
  context->OperationInterface();
  context->OperationChangeState();
  context->OperationChangeState();
}


