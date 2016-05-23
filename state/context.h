#ifndef __CONTEXT_H__
#define __CONTEXT_H__

#include "state.h"

class State;

class Context
{
  public:
    Context();
    Context(State *state);
    ~Context();

    void OperationInterface();
    void OperationChangeState();

   private:
    friend class State;
    bool ChangeState(State *state);
    State *m_state;
};




#endif

