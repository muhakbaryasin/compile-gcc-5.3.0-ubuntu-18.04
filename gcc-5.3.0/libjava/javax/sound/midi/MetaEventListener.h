
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_midi_MetaEventListener__
#define __javax_sound_midi_MetaEventListener__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace midi
      {
          class MetaEventListener;
          class MetaMessage;
      }
    }
  }
}

class javax::sound::midi::MetaEventListener : public ::java::lang::Object
{

public:
  virtual void meta(::javax::sound::midi::MetaMessage *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_sound_midi_MetaEventListener__
