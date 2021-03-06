/* $Id: multi_page.cpp 55984 2013-01-01 09:34:55Z mordante $ */
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

#include "gui/auxiliary/widget_definition/multi_page.hpp"

#include "gettext.hpp"
#include "gui/auxiliary/log.hpp"
#include "wml_exception.hpp"

namespace gui2 {

tmulti_page_definition::tmulti_page_definition(const config& cfg)
	: tcontrol_definition(cfg)
{
	DBG_GUI_P << "Parsing multipage " << id << '\n';

	load_resolutions<tresolution>(cfg);
}

tmulti_page_definition::tresolution::tresolution(const config& cfg)
	: tresolution_definition_(cfg)
	, grid(NULL)
{
/*WIKI
 * @page = GUIWidgetDefinitionWML
 * @order = 1_multi_page
 *
 * == Multi page ==
 *
 * @begin{parent}{name="gui/"}
 * @begin{tag}{name="multi_page_definition"}{min=0}{max=-1}{super="generic/widget_definition"}
 * @macro = multi_page_description
 *
 * @begin{tag}{name="resolution"}{min=0}{max=-1}{super="generic/widget_definition/resolution"}
 * @begin{table}{config}
 *     grid & grid & &                    A grid containing the widgets for main
 *                                     widget. $
 * @end{table}
 * @allow{link}{name="gui/window/resolution/grid"}
 * @end{tag}{name="resolution"}
 * @end{tag}{name="multi_page_definition"}
 * @end{parent}{name="gui/"}
 * A multipage has no states.
 */

	const config &child = cfg.child("grid");
	VALIDATE(child, _("No grid defined."));

	grid = new tbuilder_grid(child);
}

} // namespace gui2

