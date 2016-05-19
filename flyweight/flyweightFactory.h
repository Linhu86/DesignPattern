#ifndef _FLYWEIGHTFACTORY_H_ 
#define _FLYWEIGHTFACTORY_H_ 
 
#include "flyweight.h" 
#include <string> 
#include <vector> 
using namespace std;


class FlyweightFactory
{
  public:
    FlyweightFactory();
    ~FlyweightFactory();
    Flyweight *GetFlyweight(const string &key);

  private:
    vector<Flyweight*> m_fly;
};



#endif



