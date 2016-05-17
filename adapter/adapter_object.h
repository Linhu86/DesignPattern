#ifndef __ADAPTER_OBJECT_H__
#define __ADAPTER_OBJECT_H__

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

class Adapter : public Target
{
  public:
    Adapter(Adaptee *padp);
    ~Adapter();
    void Request();
  private:
    Adaptee *m_padp;
};

#endif

