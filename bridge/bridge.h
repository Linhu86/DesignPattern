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

class RefinedAbstraction : public Abstraction
{
  public:
    RefinedAbstraction(AbstractionImp *imp);
    ~RefinedAbstraction();
    void operation();
  private:
    AbstractionImp *m_imp;
};


#endif
