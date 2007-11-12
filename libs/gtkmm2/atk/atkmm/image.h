// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _ATKMM_IMAGE_H
#define _ATKMM_IMAGE_H


#include <glibmm.h>

/* $Id$ */

/* Copyright (C) 2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <atkmm/component.h> /* for Atk::CoordType */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
  typedef struct _AtkImageIface AtkImageIface;
  typedef struct _AtkImage      AtkImage;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _AtkImage AtkImage;
typedef struct _AtkImageClass AtkImageClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Atk
{ class Image_Class; } // namespace Atk
namespace Atk
{

/** The ATK Interface implemented by components which expose image or pixmap content on-screen.
 * This should be implemented by Atk::Object subtypes on behalf of components which display image/pixmap information
 * onscreen, and which provide information (other than just widget borders, etc.) via that image content. For instance,
 * icons, buttons with icons, toolbar elements, and image viewing panes typically should implement AtkImage.
 *
 * Atk::Image primarily provides two types of information: coordinate information (useful for screen review mode of
 * screenreaders, and for use by onscreen magnifiers), and descriptive information. The descriptive information is
 * provided for alternative, text-only presentation of the most significant information present in the image. 
 */

class Image : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Image CppObjectType;
  typedef Image_Class CppClassType;
  typedef AtkImage BaseObjectType;
  typedef AtkImageIface BaseClassType;

private:
  friend class Image_Class;
  static CppClassType image_class_;

  // noncopyable
  Image(const Image&);
  Image& operator=(const Image&);

protected:
  Image(); // you must derive from this class
  explicit Image(AtkImage* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Image();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  AtkImage*       gobj()       { return reinterpret_cast<AtkImage*>(gobject_); }

  ///Provides access to the underlying C GObject.  
  const AtkImage* gobj() const { return reinterpret_cast<AtkImage*>(gobject_); }

private:


public:
  
  /** Sets the textual description for this image.
   * @param description A string description to set for @a image .
   * @return Boolean <tt>true</tt>, or <tt>false</tt> if operation could
   * not be completed.
   */
  bool set_image_description(const Glib::ustring& description);
  
  /** Get a textual description of this image.
   * @return A string representing the image description.
   */
  Glib::ustring get_image_description() const;

  
  /** Get the width and height in pixels for the specified image.
   * The values of @a width  and @a height  are returned as -1 if the
   * values cannot be obtained.
   * @param width Filled with the image width.
   * @param height Filled with the image height.
   */
  void get_image_size(int& width, int& height) const;
  
  /** Gets the position of the image in the form of a point specifying the
   * images top-left corner.  The values of @a x  and @a y  are returned as -1
   * if the values cannot be obtained.
   * @param x Address of <tt>int</tt> to put x coordinate position.
   * @param y Address of <tt>int</tt> to put y coordinate position.
   * @param coord_type Specifies whether the coordinates are relative to the screen
   * or to the components top level window.
   */
  void get_image_position(int& x, int& y, CoordType coord_type) const;

protected:
  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool set_image_description_vfunc(const Glib::ustring& description);
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual const char* get_image_description_vfunc() const;
#endif //GLIBMM_VFUNCS_ENABLED


  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual void get_image_position_vfunc(int& x, int& y, CoordType coord_type) const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual void get_image_size_vfunc(int& width, int& height) const;
#endif //GLIBMM_VFUNCS_ENABLED


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

  //Default Signal Handlers::
#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


};

} // namespace Atk


namespace Glib
{
  /** @relates Atk::Image
   * @param object The C instance
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   */
  Glib::RefPtr<Atk::Image> wrap(AtkImage* object, bool take_copy = false);

} // namespace Glib


#endif /* _ATKMM_IMAGE_H */

