#include <iostream>
#include "bridge_imp.h"

using namespace std;

AbstractionImp::AbstractionImp()
{
  cout << "Constructing AbstractionImp" << endl;
} 

AbstractionImp::~AbstractionImp()
{
  cout << "Deconstructing AbstractionImp" << endl;
} 

ConcreteAbstractImpA::ConcreteAbstractImpA()
{
  cout << "Constructing ConcreteAbstractImpA" << endl;
}

ConcreteAbstractImpA::~ConcreteAbstractImpA()
{
  cout << "Deonstructing ConcreteAbstractImpA" << endl;
}

void ConcreteAbstractImpA::operation()
{
  cout << "ConcreteAbstractImpA operation" << endl;
}


ConcreteAbstractImpB::ConcreteAbstractImpB()
{
  cout << "Constructing ConcreteAbstractImpB" << endl;
}

ConcreteAbstractImpB::~ConcreteAbstractImpB()
{
  cout << "Deonstructing ConcreteAbstractImpB" << endl;
}

void ConcreteAbstractImpB::operation()
{
  cout << "ConcreteAbstractImpB operation" << endl;
}


