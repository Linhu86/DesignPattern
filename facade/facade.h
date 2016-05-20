#ifndef __FACADE_H__
#define __FACADE_H__

class Subsys1;
class Subsys2;


class Facade
{
  public:
    Facade();
    virtual ~Facade();
    void Operation_sub1();
    void Operation_sub2();

    private:
      Subsys1 *m_sys1;
      Subsys2 *m_sys2;
};

class Subsys1
{
  public:
    Subsys1();
    ~Subsys1();
    void Operation();
  private:
    void wrapper_operation_linux();
    void wrapper_operation_windows();
};

class Subsys2
{
  public:
    Subsys2();
    ~Subsys2();
    void Operation();
  private:
    void wrapper_operation_linux();
    void wrapper_operation_windows();
};


#endif




