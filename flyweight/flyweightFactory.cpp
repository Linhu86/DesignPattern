#include "flyweightFactory.h" 
#include <iostream> 
#include <string> 
#include <cassert> 
using namespace std; 

FlyweightFactory::FlyweightFactory() 
{ 
}

FlyweightFactory::~FlyweightFactory() 
{ 
} 


Flyweight * FlyweightFactory::GetFlyweight(const string& key)
{
  cout << "Get new object: " << key << endl;
  vector<Flyweight *>::iterator it = m_fly.begin();

  for(; it!=m_fly.end(); it++)
  {
    if((*it)->GetIntrinsicState() == key)
    {
      cout << "Already created by user..." << endl;
      return  *it;
    }
  }

  cout << "not found in the database, insert it" << endl;

  Flyweight *fn = new ConcreteFlyweight(key);
  m_fly.push_back(fn);
  return fn;
}









