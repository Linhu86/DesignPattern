#include <iostream>
using namespace std;
#include "adapter_object.h"

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

Adapter::Adapter(Adaptee *padp)
{
  cout << "Constructing Adapter" << endl;
  m_padp = padp;
}

Adapter::~Adapter()
{
  cout << "Deconstructing Adapter" << endl;
}

void Adapter::Request()
{
  m_padp->SpecialRequest();
}

