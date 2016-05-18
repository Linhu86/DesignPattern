#include <iostream>
#include <string>
#include "decorator.h"
using namespace std;

Component::Component()
{
  cout << "Constructing Component" << endl;
}

Component::~Component()
{
  cout << "Deconstructing Component" << endl;
}

ConcreteComponent::ConcreteComponent()
{
   cout << "Constructing ConcreteComponent" << endl;
}

ConcreteComponent::~ConcreteComponent()
{
   cout << "Deconstructing ConcreteComponent" << endl;
}

void ConcreteComponent::Operation()
{
  cout << "ConcreteComponent operation." << endl;
}

Decorator::Decorator()
{
  cout << "Constructing Decorator" << endl;
}

Decorator::~Decorator()
{
  cout << "Deconstructing Decorator" << endl;
}

ConcreteDecorator::ConcreteDecorator(Component * com)
{
  cout << "Constructing ConcreteDecorator" << endl;
  m_com = com;
}

ConcreteDecorator::~ConcreteDecorator()
{
  cout << "Deconstructing ConcreteDecorator" << endl;
}

void ConcreteDecorator::AddedOperation()
{
  cout << "ConcreteDecorator AddedOperation" << endl;
}

void ConcreteDecorator::Operation()
{
  m_com->Operation();
  this->AddedOperation();
}



