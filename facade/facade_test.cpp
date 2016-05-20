#include <iostream>
#include "facade.h"

using namespace std;

int main()
{
  Facade *p_fac = new Facade();
  p_fac->Operation_sub1();
  p_fac->Operation_sub2();
  delete p_fac;
}





