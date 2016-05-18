#ifndef __DECORATOR_H__
#define __DECORATOR_H__

class Component
{
  public:
    virtual ~Component() = 0;
    virtual void Operation() = 0;
  protected:
    Component();
};

class ConcreteComponent : public Component
{
  public:
    ConcreteComponent();
    ~ConcreteComponent();
    void Operation();
};

class Decorator : public Component
{
  public:
    virtual ~Decorator() = 0;
    virtual void Operation() = 0;
    virtual void AddedOperation() = 0;
  protected:
    Decorator();
};

class ConcreteDecorator : public Decorator
{
  public:
    ConcreteDecorator(Component *com);
    ~ConcreteDecorator();
    void Operation();
    void AddedOperation();
   private:
     Component *m_com;
};




#endif
