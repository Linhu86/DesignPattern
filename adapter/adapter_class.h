#ifndef __ADAPTER_CLASS_H__
#define __ADAPTER_CLASS_H__

class Target
{
  public:
    virtual ~Target();
    virtual void Request() = 0;
  protected:
    Target();
};

class Adaptee
{
  public:
    Adaptee();
    ~Adaptee();
    void SpecialRequest();
};

class Adapter : public Target, private Adaptee
{
  public:
    Adapter();
    ~Adapter();
    void Request();
};

#endif


