#include "proxy.h"
#include <iostream>
using namespace std;

int main()
{
  cout << "Create proxy object." << endl;
  Proxy *p_pxy = new Proxy();
  cout << "Setup proxy service." << endl;
  int ret = p_pxy->ProxyService("ConcreteSubject");
  cout << "Call ConcreteSubject service by using proxy" << endl;
  if(ret == 0)
    cout << "proxy service setup successful." << endl;
  p_pxy->Operation();
  return 0;
}




