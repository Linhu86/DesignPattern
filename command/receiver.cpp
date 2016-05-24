#include "receiver.h"
#include "command.h"
#include <iostream>
using namespace std;

Receiver :: Receiver()
{
  cout << "Constructing Receiver" << endl;
}

Receiver :: ~Receiver()
{
  cout << "Deconstructing Receiver" << endl;
}

ConcreteReceiver1::ConcreteReceiver1()
{
  cout << "Constructing ConcreteReceiver1" << endl;
}

ConcreteReceiver1::~ConcreteReceiver1()
{
  cout << "Deconstructing ConcreteReceiver1" << endl;
}

void ConcreteReceiver1::Action()
{
  cout << "ConcreteReceiver1 processing." << endl;
}

ConcreteReceiver2::ConcreteReceiver2()
{
  cout << "Constructing ConcreteReceiver2" << endl;
}

ConcreteReceiver2::~ConcreteReceiver2()
{
  cout << "Deconstructing ConcreteReceiver2" << endl;
}

void ConcreteReceiver2::Action()
{
  cout << "ConcreteReceiver2 processing." << endl;
}

Invoker::Invoker()
{
  cout << "Constructing Invoker" << endl;
}

Invoker::~Invoker()
{
  cout << "Deconstructing Invoker" << endl;
}

ConcreteInvoker1::ConcreteInvoker1(Command *cmd)
{
  m_cmd = cmd;
  cout << "Constructing ConcreteInvoker1" << endl;
}

ConcreteInvoker1::~ConcreteInvoker1()
{
  cout << "Deconstructing ConcreteInvoker1" << endl;
}

void ConcreteInvoker1::Invoke()
{
  m_cmd->Execute();
  cout << "ConcreteInvoker1 invoking command" << endl;
}

ConcreteInvoker2::ConcreteInvoker2(Command *cmd)
{
  m_cmd = cmd;
  cout << "Constructing ConcreteInvoker2" << endl;
}

ConcreteInvoker2::~ConcreteInvoker2()
{
  cout << "Deconstructing ConcreteInvoker2" << endl;
}

void ConcreteInvoker2::Invoke()
{
  m_cmd->Execute();
  cout << "ConcreteInvoker2 invoking command" << endl;
}


