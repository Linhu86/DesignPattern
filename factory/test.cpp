#include <iostream>
#include "factory.h"
#include "product.h"

using namespace std;

int main()
{
  Factory *p_factory = new ConcreteFactory();

  Product *p_product1 = p_factory->CreateProduct("product1");

  Product *p_product2 = p_factory->CreateProduct("product2");

  return 0;
}




