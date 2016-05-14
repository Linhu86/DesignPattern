#ifndef __FACTORY_H__
#define __FACTORY_H__
#include <string>
#include "product.h"

using namespace std;

class Product;

class Factory
{
  public:
    virtual ~Factory() = 0;
    virtual Product *CreateProduct(string name) = 0;

  protected:
    Factory();
};

class ConcreteFactory : public Factory
{
  public:
    ConcreteFactory();
    ~ConcreteFactory();
    Product * CreateProduct(string name);
};


#endif

