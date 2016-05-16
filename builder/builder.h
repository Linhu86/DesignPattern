#ifndef __BUILDER_H__
#define __BUILDER_H__

#include <string>
#include <iostream>
using namespace std;


class Builder
{
  public:
    ~Builder() = 0;
    void BuilderPartA() = 0;
    void BuilderPartB() = 0;
    void BuilderPartC() = 0;
    Product *BuildStart( ) = 0;
  protected:
    Builder();
};


class ConcreteBuilder : public Builder
{
  public:
    ConcreteBuilder(int buildseq) : m_buildseq(buildseq)
    {
      cout << "ConcreteBuilder build product sequence " << buildseq << endl;
    }

    void BuilderPartA();
    void BuilderPartB();
    void BuilderPartC();

    Product *BuildStart( );
    
    ~ConcreteBuilder();
  private:
    int m_buildseq;
};


#endif


