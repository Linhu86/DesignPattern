#include "leaf.h"
#include <iostream>

using namespace std;

Leaf::Leaf()
{
  cout << "Constructing Leaf" << endl;
}

Leaf::~Leaf()
{
  cout << "Deconstructing Leaf" << endl;
}

void Leaf::Operation()
{
  cout << "Leaf operation" << endl;
}



