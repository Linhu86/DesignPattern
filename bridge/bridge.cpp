#include <iostream>
#include "bridge.h"

using namespace std;

Abstraction::Abstraction()
{
  cout << "Constructing Abstraction" << endl;
}

Abstraction::~Abstraction()
{
  cout << "Deconstructing Abstraction" << endl;
}

RefinedAbstraction::RefinedAbstraction(AbstractionImp * imp)
{
  m_imp = imp;
  cout << "Constructing RefinedAbstraction" << endl;
}

RefinedAbstraction::~RefinedAbstraction()
{
  cout << "Deconstructing RefinedAbstraction" << endl;
}

void RefinedAbstraction::operation()
{
  m_imp->operation();
}


