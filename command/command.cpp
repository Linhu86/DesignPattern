#include "command.h"

#include <iostream>
using namespace std;

Command:: Command()
{
  cout << "Command Constructing." << endl;
}

Command:: ~Command()
{
  cout << "Command Deconstructing" << endl;
}

ConcreteCommand1::ConcreteCommand1(Receiver * rev)
{
  m_recv = rev;
  cout << "ConcreteCommand1 Constructing." << endl;  
}

ConcreteCommand1::~ConcreteCommand1()
{
  cout << "ConcreteCommand1 Deconstructing" << endl;
}

void ConcreteCommand1::Execute()
{
  m_recv->Action();
  cout << "Execute ConcreteCommand1" << endl;
}

ConcreteCommand2::ConcreteCommand2(Receiver * rev)
{
  m_recv = rev;
  cout << "Command Constructing." << endl;
}

ConcreteCommand2::~ConcreteCommand2()
{
  cout << "ConcreteCommand2 Deconstructing" << endl;
}

void ConcreteCommand2::Execute()
{
  m_recv->Action();
  cout << "Execute ConcreteCommand2" << endl;
}


