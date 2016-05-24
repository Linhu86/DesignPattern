#include "command.h"  
#include "receiver.h" 
#include <iostream> 
using namespace std;

int main()
{
  ConcreteReceiver1 *recv1 = new ConcreteReceiver1();

  ConcreteReceiver2 *recv2 = new ConcreteReceiver2();

  ConcreteCommand1 *cmd1 = new ConcreteCommand1(recv1);

  ConcreteCommand1 *cmd2 = new ConcreteCommand1(recv2);

  ConcreteInvoker1 *inv1 = new ConcreteInvoker1(cmd1);

  inv1->Invoke();

  ConcreteInvoker1 *inv12 = new ConcreteInvoker1(cmd2);

  inv12->Invoke();

  return 0;
}




