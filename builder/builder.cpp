#include<iostream>
using namespace std;

#include "builder.h"

Builder::Builder()
{
  cout << "Constructing Builder. " << endl;
}

Builder::~Builder()
{
  cout << "Constructing Builder. " << endl;
}

ConcreteBuilder::ConcreteBuilder()
{
  cout << "Constructing ConcreteBuilder. " << endl;
}

ConcreteBuilder::~ConcreteBuilder()
{
  cout << "Deconstructing ConcreteBuilder. " << endl;
}

void ConcreteBuilder::BuilderPartA()
{
  cout << "Start build process A." << endl;
}

void ConcreteBuilder::BuilderPartB()
{
  cout << "Start build process B." << endl;
}

void ConcreteBuilder::BuilderPartC()
{
  cout << "Start build process C." << endl;
}

Product *ConcreteBuilder::BuildStart()
{
  Product *p_product;
  if(m_buildseq == 1)
  {
    BuilderPartA();
    BuilderPartB();
    BuilderPartC();
    p_product = new ConcreteProductA("PA");
  }
  else(m_buildseq == 2)
  {
    BuilderPartC();
    BuilderPartB();
    BuilderPartA();
    p_product = new ConcreteProductA("PB");
  }
  else
  {
    cout << "m_buildseq sequence error." << endl;
  }
  return p_product;
}




