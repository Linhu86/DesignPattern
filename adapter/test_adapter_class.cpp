#include <iostream>
using namespace std;

#include "adapter_class.h"

int main()
{
  Adapter *p_adp = new Adapter();  

  p_adp->Request();
  
  return 0;
}



