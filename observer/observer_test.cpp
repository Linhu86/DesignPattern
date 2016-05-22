#include "observer.h"

int main()
{
  ConcreteObserver *p_obs1 = new ConcreteObserver("obs1");
  ConcreteObserver *p_obs2 = new ConcreteObserver("obs2");

  ConcreteSubject *p_obj = new ConcreteSubject();

  p_obj->Attach(p_obs1);
  p_obj->Attach(p_obs2);

  int state1 = p_obs1->GetState();
  int state2 = p_obs2->GetState();

  cout << "obs1 watch state: " << state1 << endl;
  cout << "obs2 watch state: " << state2 << endl;
  
  p_obj->SetState(RUNNING);

  state1 = p_obs1->GetState();
  state2 = p_obs2->GetState();

  cout << "obs1 watch state: " << (p_obs1->GetState())  << endl;
  cout << "obs2 watch state: " << (p_obs2->GetState())  << endl;

  p_obj->SetState(ZOOMBIE);

  state1 = p_obs1->GetState();
  state2 = p_obs2->GetState();

  cout << "obs1 watch state: " << (p_obs1->GetState())  << endl;
  cout << "obs2 watch state: " << (p_obs2->GetState())  << endl;
  return 0;
}




