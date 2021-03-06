
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_ImageIcon$AccessibleImageIcon__
#define __javax_swing_ImageIcon$AccessibleImageIcon__

#pragma interface

#include <javax/accessibility/AccessibleContext.h>
extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
        class Accessible;
        class AccessibleRole;
        class AccessibleStateSet;
    }
    namespace swing
    {
        class ImageIcon;
        class ImageIcon$AccessibleImageIcon;
    }
  }
}

class javax::swing::ImageIcon$AccessibleImageIcon : public ::javax::accessibility::AccessibleContext
{

public: // actually protected
  ImageIcon$AccessibleImageIcon(::javax::swing::ImageIcon *);
public:
  virtual ::javax::accessibility::AccessibleRole * getAccessibleRole();
  virtual ::javax::accessibility::AccessibleStateSet * getAccessibleStateSet();
  virtual ::javax::accessibility::Accessible * getAccessibleParent();
  virtual jint getAccessibleIndexInParent();
  virtual jint getAccessibleChildrenCount();
  virtual ::javax::accessibility::Accessible * getAccessibleChild(jint);
  virtual ::java::util::Locale * getLocale();
  virtual ::java::lang::String * getAccessibleIconDescription();
  virtual void setAccessibleIconDescription(::java::lang::String *);
  virtual jint getAccessibleIconHeight();
  virtual jint getAccessibleIconWidth();
private:
  static const jlong serialVersionUID = 2113430526551336564LL;
public: // actually package-private
  ::javax::swing::ImageIcon * __attribute__((aligned(__alignof__( ::javax::accessibility::AccessibleContext)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_ImageIcon$AccessibleImageIcon__
