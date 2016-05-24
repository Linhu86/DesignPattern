#ifndef __COMMAND_H__
#define __COMMAND_H__

#include "receiver.h"

class Receiver;

class Command
{
  public:
    virtual ~Command();
    virtual void Execute() = 0;

  protected:
    Command();
};

class ConcreteCommand1 : public Command
{
  public:
    ConcreteCommand1(Receiver *rev);
    ~ConcreteCommand1();
    void Execute();

  private:
    Receiver *m_recv;
};

class ConcreteCommand2 : public Command
{
  public:
    ConcreteCommand2(Receiver *rev);
    ~ConcreteCommand2();
    void Execute();

  private:
    Receiver *m_recv;
};


#endif




