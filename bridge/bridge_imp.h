#ifndef __BRIDGE_H__
#define __BRIDGE_H__

class AbstractionImp
{
  public:
    virtual ~AbstractionImp();
    virtual void operation() = 0;
  protected:
    AbstractionImp();
};

class ConcreteAbstractImpA
{
  public:
    ConcreteAbstractImpA();
    ~ConcreteAbstractImpA();
    void operation();
};

class ConcreteAbstractImpB
{
  public:
    ConcreteAbstractImpB();
    ~ConcreteAbstractImpB();
    void operation();
};


#endif
