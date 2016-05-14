#include "factory.h"
#include "product.h"

#include <iostream>
#include <string>
using namespace std;

Factory::Factory()
{
}

Factory::~Factory()
{
}

ConcreteFactory::ConcreteFactory()
{
  cout << "Constructing concreteFactory." << endl;
}

ConcreteFactory::~ConcreteFactory()
{
  cout << "Deconstructing concreteFactory" << endl;
}

Product * ConcreteFactory::CreateProduct(string name)
{
  if(name == "product1")
    return new ConcreteProduct1();
  if(name == "product2")
    return new ConcreteProduct2();
  return NULL;
}


