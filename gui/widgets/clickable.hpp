/* $Id: clickable.hpp 55984 2013-01-01 09:34:55Z mordante $ */
/*
   Copyright (C) 2009 - 2013 by Mark de Wever <koraq@xs4all.nl>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

#ifndef GUI_WIDGETS_CLICKABLE_HPP_INCLUDED
#define GUI_WIDGETS_CLICKABLE_HPP_INCLUDED

#include "gui/auxiliary/event/dispatcher.hpp"

namespace gui2 {

/**
 * Small concept class.
 *
 * Parts of the engine inherit this class so we can have generic
 * clickable items. This is mainly for the button and the repeating button
 * classes.
 *
 * The reason for having the click functions here is that not all subclasses
 * need to implement the click event in the same way; e.g. the repeating button
 * clicks on the mouse down event and the normal button on the mouse click
 * event.
 *
 * Common signal handlers:
 * - connect_signal_mouse_left_click
 * - disconnect_signal_mouse_left_click
 */
class tclickable_
{
public:
	virtual ~tclickable_() {}

	/**
	 * Connects a signal handler for a 'click' event.
	 *
	 * What the click is depends on the subclass.
	 *
	 * @param signal              The signal to connect.
	 */
	virtual void connect_click_handler(
			const event::tsignal_function& signal) = 0;

	/**
	 * Disconnects a signal handler for a 'click' event.
	 *
	 * What the click is depends on the subclass.
	 *
	 * @param signal              The signal to disconnect (should be the same
	 *                            as send to the connect call.
	 */
	virtual void disconnect_click_handler(
			const event::tsignal_function& signal) = 0;
};

} // namespace gui2

#endif
