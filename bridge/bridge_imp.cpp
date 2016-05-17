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

ConcreteAbstractionImpA::ConcreteAbstractionImpA()
{
  cout << "Constructing ConcreteAbstractionImpA" << endl;
}

ConcreteAbstractionImpA::~ConcreteAbstractionImpA()
{
  cout << "Deonstructing ConcreteAbstractionImpA" << endl;
}

void ConcreteAbstractionImpA::operation()
{
  cout << "ConcreteAbstractionImpA operation" << endl;
}


ConcreteAbstractionImpB::ConcreteAbstractionImpB()
{
  cout << "Constructing ConcreteAbstractionImpB" << endl;
}

ConcreteAbstractionImpB::~ConcreteAbstractionImpB()
{
  cout << "Deonstructing ConcreteAbstractionImpB" << endl;
}

void ConcreteAbstractionImpB::operation()
{
  cout << "ConcreteAbstractionImpB operation" << endl;
}


