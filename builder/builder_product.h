#ifndef __BUILDER_PRODUCT_H__
#define __BUILDER_PRODUCT_H__
#include <string>
#include <iostream>
using namespace std;


// Build sequence 1: A->B->C
// Build sequence 2: C->B->A

class Product
{
  public:
   virtual ~Product() = 0;
   virtual string getProductName() = 0;
   virtual int getBuilderSequence() = 0;

  protected:
    Product();
    string m_name;
};

class ConcreteProductA : public Product
{
  public:
    ConcreteProductA();
    ConcreteProductA(string name) : m_name(name){
        cout << "Constructing product : " << name << endl;
        m_buildseq = 1;
    }
    string getProductName();
    int getBuilderSequence();
    ~ConcreteProductA();
  private:
       int m_buildseq;
       string m_name;
};

class ConcreteProductB : public Product
{
  public:
    ConcreteProductB();
    ConcreteProductB(string name) : m_name(name){
        cout << "Constructing product : " << name << endl;
        m_buildseq = 2;
     };
    ~ConcreteProductB();
    string getProductName();
    int getBuilderSequence();
  private:
     int m_buildseq;
     string m_name;
};


#endif



