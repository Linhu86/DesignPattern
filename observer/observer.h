#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <iostream>
using namespace std;

#include <vector>
#include <string>


class ConcreteObserver;

enum State
{
  DEAD = 0,
  IDLE,
  RUNNING,
  PENDING,
  STOP,
  ZOOMBIE
};

class Subject
{
  public:
    Subject();
    ~Subject();
    virtual int Attach(ConcreteObserver * new_observer) = 0;
    virtual int Detach(ConcreteObserver * observer) = 0;
    virtual void Notify() = 0;
};


class ConcreteSubject
{
  public:
    ConcreteSubject();
    ~ConcreteSubject();
    int Attach(ConcreteObserver * new_observer);
    int Detach(ConcreteObserver * observer);
    void Notify();    
    int GetState();
    void SetState(int state);
  private:
    int m_state;
    vector<ConcreteObserver*> SubscriberList;
};

class Observer
{
  public:
    Observer();
    ~Observer();
    virtual void Update(int state) = 0;
};

class ConcreteObserver
{
  public:
    ConcreteObserver(string name);
    ~ConcreteObserver();
    void Update(int state);
    int GetState();
    void SetState(int state);
    string GetName();
  private:
    string m_name;
    int m_state;
};


#endif


