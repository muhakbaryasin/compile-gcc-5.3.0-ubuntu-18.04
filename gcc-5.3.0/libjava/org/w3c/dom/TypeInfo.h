
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_w3c_dom_TypeInfo__
#define __org_w3c_dom_TypeInfo__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class TypeInfo;
      }
    }
  }
}

class org::w3c::dom::TypeInfo : public ::java::lang::Object
{

public:
  virtual ::java::lang::String * getTypeName() = 0;
  virtual ::java::lang::String * getTypeNamespace() = 0;
  virtual jboolean isDerivedFrom(::java::lang::String *, ::java::lang::String *, jint) = 0;
  static const jint DERIVATION_RESTRICTION = 1;
  static const jint DERIVATION_EXTENSION = 2;
  static const jint DERIVATION_UNION = 4;
  static const jint DERIVATION_LIST = 8;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_w3c_dom_TypeInfo__
