#include<iostream>
#include<string>
#include "director.h"
#include "builder_product.h"
#include "builder.h"
using namespace std;

class Builder;

Director::Director()
{
  cout << "Constructing Director" << endl;
}

Director::~Director()
{
  cout << "Deconstructing Director" << endl;
}

Product *Director::BuildProduct(string product_name)
{
  Builder *p_builder;
  Product *p_product;
  if(product_name == "PA")
  {
    p_builder = new ConcreteBuilder(1);
    p_product = p_builder->BuildStart();
  }
  else if(product_name == "PB")
  {
    p_builder = new ConcreteBuilder(2);
    p_product = p_builder->BuildStart();
  }
  else
  {
     cout << "Product name does not exist." << endl;
  }
  return p_product;
}



