#include "component.h"
#include <iostream>
using namespace std;

Component::Component()
{
  cout << "Constructing Component" << endl;
}

Component::~Component()
{
  cout << "Deconstructing Component" << endl;
}

void Component::Add(const Component &com)
{  
}

void Component::Remove(const Component &com)
{

}

Component* Component::GetChild(int index)
{
  return 0;
}


