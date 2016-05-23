#include "context.h"

#include <iostream>
using namespace std;

Context::Context()
{
  cout << "Context Constructing" << endl;
}

Context::Context(State *state)
{
  cout << "Context Constructing" << endl;
  this->m_state = state;
}

Context::~Context()
{
  cout << "Context Constructing" << endl;
}

void Context::OperationInterface()
{
  m_state->OperationInterface(this);
}

bool Context::ChangeState(State *state)
{
  this->m_state = state;
  return true;
}

void Context::OperationChangeState()
{
  m_state->OperationChangeState(this);
}


