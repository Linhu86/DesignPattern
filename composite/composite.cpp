#include "composite.h" 
#include "component.h" 

Composite::Composite() 
{ 
}

Composite::~Composite() 
{ 
}

void Composite::Operation() 
{ 
  vector<Component*>::iterator comIter = comVec.begin(); 
   
  for (;comIter != comVec.end();comIter++) 
  { 
    (*comIter)->Operation(); 
  } 
} 

void Composite::Add(Component* com) 
{ 
  comVec.push_back(com); 
}

void Composite::Remove(Component* com) 
{
  vector<Component*>::iterator comIter = comVec.begin();
  for(; comIter != comVec.end(); comIter++)
  {
    if(*comIter == com)
    {
      comVec.erase(comIter);
    }
  }
}

Component* Composite::GetChild(int index) 
{ 
  return comVec[index];   
} 


