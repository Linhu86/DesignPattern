#include "product.h"
#include <iostream>
using namespace std;

Product::Product()
{
}


Product::~Product()
{
}

ConcreteProduct1::ConcreteProduct1()
{
  cout << "Constructing ConcreteProduct1 " << endl;
}

ConcreteProduct1::~ConcreteProduct1()
{
  cout << "Deconstructing ConcreteProduct1 " << endl;
}

ConcreteProduct2::ConcreteProduct2()
{
  cout << "Constructing ConcreteProduct2" << endl;
}

ConcreteProduct2::~ConcreteProduct2()
{
  cout << "Deconstructing ConcreteProduct2" << endl;
}




