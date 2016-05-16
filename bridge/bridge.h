#ifndef __BRIDGE_H__
#define __BRIDGE_H__
#include "bridge_imp.h"

class AbstractionImp;

class Abstraction
{
  public:
    virtual ~Abstraction()= 0;
    virtual void operation() = 0;
  protected:
    Abstraction();
};

class RefinedAbstration : public Abstraction
{
  public:
    RefinedAbstration(AbstractionImp *imp);
    ~RefinedAbstration();
    void operation();
  private:
    AbstractionImp *m_imp;
};


#endif
