#ifndef __BUILDER_H__
#define __BUILDER_H__

#include <string>
#include <iostream>
#include "builder_product.h"
using namespace std;

class Product;

class Builder
{
  public:
    virtual ~Builder() = 0;
    virtual void BuilderPartA() = 0;
    virtual void BuilderPartB() = 0;
    virtual void BuilderPartC() = 0;
    virtual Product *BuildStart() = 0;
  protected:
    Builder();
};


class ConcreteBuilder : public Builder
{
  public:
    ConcreteBuilder();
    ConcreteBuilder(int buildseq) : m_buildseq(buildseq)
    {
      cout << "ConcreteBuilder build product sequence " << buildseq << endl;
    }

    void BuilderPartA();
    void BuilderPartB();
    void BuilderPartC();

    Product *BuildStart();
    
    ~ConcreteBuilder();
  private:
    int m_buildseq;
};


#endif


