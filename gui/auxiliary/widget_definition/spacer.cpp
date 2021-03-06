/* $Id: spacer.cpp 55984 2013-01-01 09:34:55Z mordante $ */
/*
   Copyright (C) 2007 - 2013 by Mark de Wever <koraq@xs4all.nl>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

#define GETTEXT_DOMAIN "wesnoth-lib"

#include "gui/auxiliary/widget_definition/spacer.hpp"

#include "gui/auxiliary/log.hpp"

namespace gui2 {

tspacer_definition::tspacer_definition(const config& cfg)
	: tcontrol_definition(cfg)
{
	DBG_GUI_P << "Parsing spacer " << id << '\n';

	load_resolutions<tresolution>(cfg);
}

tspacer_definition::tresolution::tresolution(const config& cfg)
	: tresolution_definition_(cfg)
{
/*WIKI
 * @page = GUIWidgetDefinitionWML
 * @order = 1_spacer
 *
 * == Spacer ==
 *
 * @macro = spacer_description
 *
 * A spacer has no states so nothing to load.
 * @begin{parent}{name="gui/"}
 * @begin{tag}{name="spacer_definition"}{min=0}{max=-1}{super="generic/widget_definition"}
 * @end{tag}{name="spacer_definition"}
 * @end{parent}{name="gui/"}
 */
}

} // namespace gui2

