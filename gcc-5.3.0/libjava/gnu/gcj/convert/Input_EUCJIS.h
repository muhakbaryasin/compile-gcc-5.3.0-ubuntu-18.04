
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_convert_Input_EUCJIS__
#define __gnu_gcj_convert_Input_EUCJIS__

#pragma interface

#include <gnu/gcj/convert/BytesToUnicode.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace convert
      {
          class Input_EUCJIS;
      }
    }
  }
}

class gnu::gcj::convert::Input_EUCJIS : public ::gnu::gcj::convert::BytesToUnicode
{

public:
  Input_EUCJIS();
  virtual ::java::lang::String * getName();
  virtual jint read(JArray< jchar > *, jint, jint);
public: // actually package-private
  jint __attribute__((aligned(__alignof__( ::gnu::gcj::convert::BytesToUnicode)))) codeset;
  jint first_byte;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_convert_Input_EUCJIS__