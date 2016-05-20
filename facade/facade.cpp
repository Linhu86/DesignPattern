#include "facade.h"
#include <iostream>
using namespace std;

Facade::Facade()
{
  m_sys1 = new Subsys1();
  m_sys2 = new Subsys2();
  cout << "Constructing Facade" << endl;
}

Facade::~Facade()
{
  delete m_sys1;
  delete m_sys2;
  cout << "Deconstructing Facade" << endl;
}

void Facade::Operation_sub1()
{
  m_sys1->Operation();
}

void Facade::Operation_sub2()
{
  m_sys2->Operation();
}


Subsys1::Subsys1()
{
  cout << "Constructing Subsys1" << endl;
}

Subsys1::~Subsys1()
{
  cout << "Deconstructing Subsys1" << endl;
}

void Subsys1::Operation()
{
#ifdef OS_LINUX
   wrapper_operation_linux();
#endif

#ifdef OS_WINDOWS
   wrapper_operation_windows();
#endif

}


void Subsys1::wrapper_operation_linux()
{
  cout << "Subsys1 Operation Linux" << endl;
}

void Subsys1::wrapper_operation_windows()
{
  cout << "Subsys1 Operation Windows" << endl;
}


Subsys2::Subsys2()
{
  cout << "Constructing Subsys2" << endl;
}

Subsys2::~Subsys2()
{
  cout << "Deconstructing Subsys2" << endl;
}

void Subsys2::Operation()
{
#ifdef OS_LINUX
   wrapper_operation_linux();
#endif

#ifdef OS_WINDOWS
   wrapper_operation_windows();
#endif

}


void Subsys2::wrapper_operation_linux()
{
  cout << "Subsys2 Operation Linux" << endl;
}

void Subsys2::wrapper_operation_windows()
{
  cout << "Subsys2 Operation Windows" << endl;
}



