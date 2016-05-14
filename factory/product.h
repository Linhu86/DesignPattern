#ifndef __PRODUCT_H__
#define __PRODUCT_H__

class Product
{
  public:
    virtual ~Product() = 0;
  protected:
    Product();
};

class ConcreteProduct1 : public Product
{
  public:
    ConcreteProduct1();
    ~ConcreteProduct1();
};

class ConcreteProduct2 : public Product
{
  public:
    ConcreteProduct2();
    ~ConcreteProduct2();
};

#endif



