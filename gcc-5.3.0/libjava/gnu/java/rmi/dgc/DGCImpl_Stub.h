
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_dgc_DGCImpl_Stub__
#define __gnu_java_rmi_dgc_DGCImpl_Stub__

#pragma interface

#include <java/rmi/server/RemoteStub.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace dgc
        {
            class DGCImpl_Stub;
        }
      }
    }
  }
  namespace java
  {
    namespace rmi
    {
      namespace dgc
      {
          class Lease;
          class VMID;
      }
      namespace server
      {
          class ObjID;
          class Operation;
          class RemoteRef;
      }
    }
  }
}

class gnu::java::rmi::dgc::DGCImpl_Stub : public ::java::rmi::server::RemoteStub
{

public:
  DGCImpl_Stub();
  DGCImpl_Stub(::java::rmi::server::RemoteRef *);
  void clean(JArray< ::java::rmi::server::ObjID * > *, jlong, ::java::rmi::dgc::VMID *, jboolean);
  ::java::rmi::dgc::Lease * dirty(JArray< ::java::rmi::server::ObjID * > *, jlong, ::java::rmi::dgc::Lease *);
private:
  static const jlong serialVersionUID = 2LL;
  static const jlong interfaceHash = -669196253586618813LL;
  static jboolean useNewInvoke;
  static JArray< ::java::rmi::server::Operation * > * operations;
  static ::java::lang::reflect::Method * $method_clean_0;
  static ::java::lang::reflect::Method * $method_dirty_1;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_rmi_dgc_DGCImpl_Stub__
