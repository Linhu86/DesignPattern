#ifndef __PROXY_H__
#define __PROXY_H__

#include <iostream>
#include <string>

using namespace std;

class Subject
{
  public:
    Subject();
    ~Subject();
    virtual void Operation() = 0;
};

class ConcreteSubject : public Subject
{
  public:
    ConcreteSubject();
    ~ConcreteSubject();
    void Operation();
};

class Proxy : public Subject
{
  public:
    Proxy();
    ~Proxy();
    void Operation();
    int ProxyService(string sub_name);
  private:
    Subject *m_sub;
};

#endif

