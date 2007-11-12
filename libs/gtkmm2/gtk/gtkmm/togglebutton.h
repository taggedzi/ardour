// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_TOGGLEBUTTON_H
#define _GTKMM_TOGGLEBUTTON_H


#include <glibmm.h>

/* $Id$ */

/* togglebutton.h
 * 
 * Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <gtkmm/button.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkToggleButton GtkToggleButton;
typedef struct _GtkToggleButtonClass GtkToggleButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class ToggleButton_Class; } // namespace Gtk
namespace Gtk
{

/** A Gtk::ToggleButton will remain 'pressed-in' when clicked. Clicking again will cause the toggle button to return to it's normal state.
 * The state of a Gtk::ToggleButton can be set specifically using set_active(), and retrieved using get_active().
 * To simply switch the state of a toggle button, use toggled().
 *
 * @ingroup Widgets
 */

class ToggleButton : public Button
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ToggleButton CppObjectType;
  typedef ToggleButton_Class CppClassType;
  typedef GtkToggleButton BaseObjectType;
  typedef GtkToggleButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~ToggleButton();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class ToggleButton_Class;
  static CppClassType togglebutton_class_;

  // noncopyable
  ToggleButton(const ToggleButton&);
  ToggleButton& operator=(const ToggleButton&);

protected:
  explicit ToggleButton(const Glib::ConstructParams& construct_params);
  explicit ToggleButton(GtkToggleButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkToggleButton*       gobj()       { return reinterpret_cast<GtkToggleButton*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkToggleButton* gobj() const { return reinterpret_cast<GtkToggleButton*>(gobject_); }


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
  virtual void on_toggled();
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

public:

  /** Create an empty toggle button.
   * With an empty button, you can Gtk::Button::add() a widget such as a
   * Gtk::Pixmap or Gtk::Box.
   *
   * If you just wish to add a Gtk::Label, you may want to use the
   * Gtk::ToggleButton(const Glib::ustring &label) constructor directly
   * instead.
   */
  ToggleButton();

  /** Create a toggle button with a label.
   * You won't be able
   * to add a widget to this button since it already contains a Gtk::Label
   */
  explicit ToggleButton(const Glib::ustring& label, bool mnemonic = false);

  /** Creates a toggle button containing the image and text from a stock item.
   * Stock ids have identifiers like Gtk::Stock::OK and Gtk::Stock::APPLY.
   * @param stock_id The stock item.
   */
  explicit ToggleButton(const StockID& stock_id);
  
  
  /** Sets whether the button is displayed as a separate indicator and label.
   * You can call this function on a checkbutton or a radiobutton with
   *  @a draw_indicator  = <tt>false</tt> to make the button look like a normal button
   * 
   * This function only affects instances of classes like Gtk::CheckButton
   * and Gtk::RadioButton that derive from Gtk::ToggleButton,
   * not instances of Gtk::ToggleButton itself.
   * @param draw_indicator If <tt>true</tt>, draw the button as a separate indicator
   * and label; if <tt>false</tt>, draw the button like a normal button.
   */
  void set_mode(bool draw_indicator = true);
  
  /** Retrieves whether the button is displayed as a separate indicator
   * and label. See set_mode().
   * @return <tt>true</tt> if the togglebutton is drawn as a separate indicator
   * and label.
   */
  bool get_mode() const;

  
  void set_active(bool is_active = true);
  
  bool get_active() const;

  
  /** If the user has selected a range of elements (such as some text or
   * spreadsheet cells) that are affected by a toggle button, and the
   * current values in that range are inconsistent, you may want to
   * display the toggle in an "in between" state. This function turns on
   * "in between" display.  Normally you would turn off the inconsistent
   * state again if the user toggles the toggle button. This has to be
   * done manually, set_inconsistent() only affects
   * visual appearance, it doesn't affect the semantics of the button.
   * @param setting <tt>true</tt> if state is inconsistent.
   */
  void set_inconsistent(bool setting = true);
  
  /** Gets the value set by set_inconsistent().
   * @return <tt>true</tt> if the button is displayed as inconsistent, <tt>false</tt> otherwise.
   */
  bool get_inconsistent() const;

  
  void toggled();

  /** Emitted whenever the toggle tool button changes state.
   */
  
/**
   * @par Prototype:
   * <tt>void %toggled()</tt>
   */

  Glib::SignalProxy0< void > signal_toggled();


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** If the toggle button should be pressed in or not.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_active() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** If the toggle button should be pressed in or not.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_active() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** If the toggle button is in an in between state.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_inconsistent() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** If the toggle button is in an in between state.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_inconsistent() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** If the toggle part of the button is displayed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_draw_indicator() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** If the toggle part of the button is displayed.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_draw_indicator() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


};

} /* namespace Gtk */


namespace Glib
{
  /** @relates Gtk::ToggleButton
   * @param object The C instance
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   */
  Gtk::ToggleButton* wrap(GtkToggleButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_TOGGLEBUTTON_H */

