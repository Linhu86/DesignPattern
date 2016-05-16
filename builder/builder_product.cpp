#include "builder_product.h"
#include <iostream>
using namespace std;

Product::Product()
{
  cout << "Constructing Product "<< endl;
}


Product::~Product()
{
  cout << "Deconstructing Product name "<< endl;
}


string ConcreteProductA::getProductName()
{
  return m_name;
}

int ConcreteProductA::getBuilderSequence()
{
  return m_buildseq;
}

ConcreteProductA::ConcreteProductA()
{
  cout << "Constructing ConcreteProduct " << m_name << endl;
}

ConcreteProductA::~ConcreteProductA()
{
  cout << "Deconstructing ConcreteProduct " << m_name << endl;
}


string ConcreteProductB::getProductName()
{
  return m_name;
}

int ConcreteProductB::getBuilderSequence()
{
  return m_buildseq;
}

ConcreteProductB::ConcreteProductB()
{
  cout << "Constructing ConcreteProduct " << m_name << endl;
}

ConcreteProductB::~ConcreteProductB()
{
  cout << "Deconstructing ConcreteProduct " << m_name << endl;
}






