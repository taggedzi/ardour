// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _PANGOMM_FONTMAP_H
#define _PANGOMM_FONTMAP_H


#include <glibmm.h>

/* $Id$ */

/* fontmap.h
 *
 * Copyright 2001      The gtkmm Development Team
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


#include <glibmm/object.h>
#include <glibmm/arrayhandle.h>
#include <pangomm/font.h>
#include <pangomm/fontset.h>
#include <pangomm/fontfamily.h>
#include <pango/pango-fontmap.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _PangoFontMap PangoFontMap;
typedef struct _PangoFontMapClass PangoFontMapClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Pango
{ class FontMap_Class; } // namespace Pango
namespace Pango
{

class Context;

/** A Pango::FontMap represents the set of fonts available for a particular rendering system.
 */

class FontMap : public Glib::Object
{
   
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef FontMap CppObjectType;
  typedef FontMap_Class CppClassType;
  typedef PangoFontMap BaseObjectType;
  typedef PangoFontMapClass BaseClassType;

private:  friend class FontMap_Class;
  static CppClassType fontmap_class_;

private:
  // noncopyable
  FontMap(const FontMap&);
  FontMap& operator=(const FontMap&);

protected:
  explicit FontMap(const Glib::ConstructParams& construct_params);
  explicit FontMap(PangoFontMap* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~FontMap();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  PangoFontMap*       gobj()       { return reinterpret_cast<PangoFontMap*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const PangoFontMap* gobj() const { return reinterpret_cast<PangoFontMap*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  PangoFontMap* gobj_copy();

private:

   
public:
  
  /** Load the font in the fontmap that is the closest match for @a desc .
   * @param context The Pango::Context the font will be used with.
   * @param desc A Pango::FontDescription describing the font to load.
   * @return The font loaded, or <tt>0</tt> if no font matched.
   */
  Glib::RefPtr<Font> load_font(const Glib::RefPtr<Context>& context, const FontDescription& desc) const;
  
  /** Load a set of fonts in the fontmap that can be used to render
   * a font matching @a desc .
   * @param context The Pango::Context the font will be used with.
   * @param desc A Pango::FontDescription describing the font to load.
   * @param language A Pango::Language the fonts will be used for.
   * @return The fontset, or <tt>0</tt> if no font matched.
   */
  Glib::RefPtr<Fontset> load_fontset(const Glib::RefPtr<Context>& context, const FontDescription& desc, const Language& language) const;

  /** List all families for the fontmap.
   * @return an array of pointers to Pango::FontFamily objects.
   */
  Glib::ArrayHandle< Glib::RefPtr<FontFamily> > list_families() const;

  //This is not used unless ENABLE_BACKEND is defined: _WRAP_METHOD(Glib::ustring get_shape_engine_type() const, pango_font_map_get_shape_engine_type)
  

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

} /* namespace Pango */


namespace Glib
{
  /** @relates Pango::FontMap
   * @param object The C instance
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   */
  Glib::RefPtr<Pango::FontMap> wrap(PangoFontMap* object, bool take_copy = false);
}


#endif /* _PANGOMM_FONTMAP_H */

