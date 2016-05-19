#include "flyweight.h"

#include <iostream>
using namespace std;

Flyweight::Flyweight(string intrinsicState)
{
  cout << "Constructing Flyweight" << endl;
  this->m_intrinsicState = intrinsicState;
}

Flyweight::~Flyweight()
{
  cout << "Deconstructing Flyweight" << endl;
}

void Flyweight::Operation(const string &extrinsicState)
{
}

string Flyweight::GetIntrinsicState()
{
  return this->m_intrinsicState;
}

ConcreteFlyweight::ConcreteFlyweight(string intrinsicState) : Flyweight(intrinsicState)
{
  cout << "Constructing ConcreteFlyweight " << intrinsicState << endl;
}

ConcreteFlyweight::~ConcreteFlyweight()
{
}


void ConcreteFlyweight::Operation(const string &extrinsicState)
{
  cout << "ConcreteFlyweight: intrisic [ " << this->GetIntrinsicState() << " ] extrinsicState: " << extrinsicState << "]" << endl;
}



