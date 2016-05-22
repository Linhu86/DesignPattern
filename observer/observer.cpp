#include "observer.h"


Subject::Subject()
{
  cout << "Constructing Subject" << endl;
}

Subject::~Subject()
{
  cout << "Deconstructing Subject" << endl;
}

ConcreteSubject::ConcreteSubject()
{
  m_state = IDLE;
  cout << "Constructing ConcreteSubject" << endl;
}

ConcreteSubject::~ConcreteSubject()
{
  cout << "Deconstructing ConcreteSubject" << endl;
}

int ConcreteSubject::Attach(ConcreteObserver *new_observer)
{
  cout << "New subscriber name" << new_observer->GetName() << endl;
  SubscriberList.push_back(new_observer);
  new_observer->SetState(this->m_state);
  return 0;
}

int ConcreteSubject::Detach(ConcreteObserver *observer)
{
  cout << "Deregister a subscriber name " << observer->GetName() << endl;
  vector<ConcreteObserver *>::iterator iter = SubscriberList.begin();

  for(; iter != SubscriberList.end(); iter++)
  {
    if(*iter == observer)
    {
      cout << "Delete iterm " << *iter << endl;
      SubscriberList.erase(iter);
      return 0;
    }
  }

  cout << "item not found" << endl;
  return -1;
}

void ConcreteSubject::Notify()
{
  cout << "Notify all the subscriber about the state change." <<endl;
  vector<ConcreteObserver *> :: iterator iter;

  for(iter = SubscriberList.begin(); iter != SubscriberList.end(); iter++)
  {
     (*iter)->Update(m_state);
  }
}

void ConcreteSubject::SetState(int state)
{
  if(state != m_state)
  {
    cout << "SetState to " << state << endl;
    m_state = state;
    this->Notify();
  }
  else
    cout << "The same state" << endl;
}

int ConcreteSubject::GetState()
{
  cout << "GetState current state " << m_state << endl;
  return m_state;
}

Observer::Observer()
{
  cout << "Constructing Observer" << endl;
}

Observer::~Observer()
{
  cout << "Deconstructing Observer" << endl;
}

ConcreteObserver::ConcreteObserver(string name)
{
  cout << "Constructing Observer " << name << endl;
  m_name = name;
  m_state = IDLE;
}

ConcreteObserver:: ~ConcreteObserver()
{
  cout << "Constructing Observer" << endl;
}

void ConcreteObserver::Update(int state)
{
  cout << "Update Observer " << m_name << " from " << m_state << " to " << state << endl;
  m_state = state;
}

int ConcreteObserver::GetState()
{
  return m_state;
}

void ConcreteObserver::SetState(int state)
{
  m_state = state;
}

string ConcreteObserver::GetName()
{
  return m_name;
}


