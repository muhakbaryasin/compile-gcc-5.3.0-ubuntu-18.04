
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_AccessException__
#define __java_rmi_AccessException__

#pragma interface

#include <java/rmi/RemoteException.h>
extern "Java"
{
  namespace java
  {
    namespace rmi
    {
        class AccessException;
    }
  }
}

class java::rmi::AccessException : public ::java::rmi::RemoteException
{

public:
  AccessException(::java::lang::String *);
  AccessException(::java::lang::String *, ::java::lang::Exception *);
private:
  static const jlong serialVersionUID = 6314925228044966088LL;
public:
  static ::java::lang::Class class$;
};

#endif // __java_rmi_AccessException__
