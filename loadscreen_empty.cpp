/* $Id: loadscreen_empty.cpp 55984 2013-01-01 09:34:55Z mordante $ */
/*
   Copyright (C) 2005 - 2013 by Joeri Melis <joeri_melis@hotmail.com>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

/** @file */

#include "loadscreen.hpp"

void loadscreen::start_stage(char const *) {}
void loadscreen::increment_progress() {}
void loadscreen::clear_screen() {}

loadscreen *loadscreen::global_loadscreen = 0;
