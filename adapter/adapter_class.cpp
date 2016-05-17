#include <iostream>
using namespace std;
#include "adapter_class.h"

Target::Target()
{
  cout << "Constructing Target" << endl;
}

Target::~Target()
{
  cout << "Deconstructing Target" << endl;
}

Adaptee::Adaptee()
{
  cout << "Constructing Adaptee" << endl;
}

Adaptee::~Adaptee()
{
  cout << "Deconstructing Adaptee" << endl;
}

void Adaptee::SpecialRequest()
{
  cout << "Adaptee SpecialRequest." << endl;
}

Adapter::Adapter()
{
  cout << "Constructing Adapter" << endl;
}

Adapter::~Adapter()
{
  cout << "Deconstructing Adapter" << endl;
}

void Adapter::Request()
{
  this->SpecialRequest();
}
    



