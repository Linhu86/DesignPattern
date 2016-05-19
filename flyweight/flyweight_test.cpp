#include "flyweight.h" 
#include "flyweightFactory.h" 
#include <iostream> 
using namespace std;


int main()
{
  FlyweightFactory *fc = new FlyweightFactory();

  Flyweight *fw1 = fc->GetFlyweight("Hello");

  Flyweight *fw2 = fc->GetFlyweight("Hello");

  Flyweight *fw3 = fc->GetFlyweight("World");

  Flyweight *fw4 = fc->GetFlyweight("World");

  return 0;
}



