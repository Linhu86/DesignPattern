#include "proxy.h"


Subject::Subject()
{
  cout << "Constructing Subject." << endl;
}

Subject::~Subject()
{
  cout << "Deconstructing Subject." << endl;
}

ConcreteSubject::ConcreteSubject()
{
  cout << "Constructing ConcreteSubject." << endl;
}

ConcreteSubject::~ConcreteSubject()
{
  cout << "Deconstructing ConcreteSubject." << endl;
}

void ConcreteSubject::Operation()
{
  cout << "ConcreteSubject operation" << endl;
}


Proxy::Proxy()
{
  cout << "Constructing Proxy." << endl;
}

Proxy::~Proxy()
{
  delete m_sub;
  cout << "Deconstructing Proxy." << endl;
}

int Proxy::ProxyService(string sub_name)
{
  if(sub_name == "ConcreteSubject")
  {
    m_sub = new ConcreteSubject();
  }
  else
  {
    cout << "Service not found." << endl;
    return 0;
  }
  return 1;
}

void Proxy::Operation()
{
  m_sub->Operation();
}





