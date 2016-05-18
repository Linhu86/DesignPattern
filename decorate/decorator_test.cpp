#include <iostream>
#include "decorator.h"
using namespace std;

int main()
{
  ConcreteComponent *p_com = new ConcreteComponent();

  ConcreteDecorator *p_dec = new ConcreteDecorator(p_com);

  p_dec->Operation();

  return 0;
}



