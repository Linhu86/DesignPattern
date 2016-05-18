#include "component.h"
#include "composite.h"

#include "leaf.h"

#include <iostream>

using namespace std;

int main()
{
  Leaf *l = new Leaf();
  l->Operation();

  Composite *com = new Composite();
  com->Add();
  com->Operation();
  Component *l1 = com->GetChild(0);
  l1->Operation();
  return 0;
}



