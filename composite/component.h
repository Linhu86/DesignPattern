#ifndef __COMPONENT_H__
#define __COMPONENT_H__

class Component
{
  public:
    Component();
    virtual ~Component();
    virtual void Opeartion() = 0;
    virtual void Removed(const Component &com);
    virtual void Add(const Component &com);
    virtual Component *GetChild(int index);

};

#endif

