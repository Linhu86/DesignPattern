#ifndef __BRIDGE_IMP_H__
#define __BRIDGE_IMP_H__

class AbstractionImp
{
  public:
    virtual ~AbstractionImp() = 0;
    virtual void operation() = 0;
  protected:
    AbstractionImp();
};

class ConcreteAbstractionImpA : public AbstractionImp
{
  public:
    ConcreteAbstractionImpA();
    ~ConcreteAbstractionImpA();
    void operation();
};

class ConcreteAbstractionImpB : public AbstractionImp
{
  public:
    ConcreteAbstractionImpB();
    ~ConcreteAbstractionImpB();
    void operation();
};


#endif
