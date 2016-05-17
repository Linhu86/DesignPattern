#include <iostream>
using namespace std;

#include "adapter_object.h"

int main()
{
  Adaptee *p_adpe = new Adaptee();
  Adapter *p_adp = new Adapter(p_adpe);  

  p_adp->Request();
  
  return 0;
}




