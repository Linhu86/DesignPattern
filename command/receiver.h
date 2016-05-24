#ifndef __RECEIVER_H__
#define __RECEIVER_H__

#include "command.h"

class Command;

class Receiver
{
  public:
    Receiver();
    virtual ~Receiver();
    virtual void Action() = 0;
};

class ConcreteReceiver1 : public Receiver
{
  public:
    ConcreteReceiver1();
    ~ConcreteReceiver1();
    void Action();
};

class ConcreteReceiver2 : public Receiver
{
  public:
    ConcreteReceiver2();
    ~ConcreteReceiver2();
    void Action();
};

class Invoker
{
  public:
    Invoker();
    virtual ~Invoker();
    virtual void Invoke() = 0;
};

class ConcreteInvoker1 : public Invoker
{
  public:
    ConcreteInvoker1(Command *cmd);
    ~ConcreteInvoker1();
    void Invoke();
  private:
    Command *m_cmd;
};

class ConcreteInvoker2 : public Invoker
{
  public:
    ConcreteInvoker2(Command *cmd);
    ~ConcreteInvoker2();
    void Invoke();
  private:
    Command *m_cmd;
};



#endif



