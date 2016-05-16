#include "builder_product.h"
#include <iostream>
using namespace std;

Product::~Product()
{
  cout << "Deconstructing Product name " << m_name << endl;
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

ConcreteProductB::ConcreteProductA()
{
  cout << "Deconstructing ConcreteProduct " << m_name << endl;
}







