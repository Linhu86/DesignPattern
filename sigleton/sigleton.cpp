#include <iostream>
using namespace std;

class Sigleton
{
  public:
   ~Sigleton();
   static Sigleton* getInstance();

  private:
    Sigleton();
    static Sigleton *m_sigleton;
};

Sigleton *Sigleton::m_sigleton = NULL;

Sigleton::Sigleton()
{
  cout << "Constructing Sigleton." << endl;
}

Sigleton::~Sigleton()
{
  cout << "Deconstructing Sigleton." << endl;
}

Sigleton* Sigleton:: getInstance()
{
  cout << "current m_sigleton: " << m_sigleton << endl;
  if(m_sigleton == NULL)
  {
    cout << "calling Sigleton " << endl;
    m_sigleton = new Sigleton();
  }
  return m_sigleton;
}

int main()
{
  Sigleton *p_sigleton = Sigleton::getInstance();
  cout << p_sigleton << endl;
  Sigleton *p_sigleton2 = Sigleton::getInstance();
  cout << p_sigleton2 << endl;
  return 0;
}

