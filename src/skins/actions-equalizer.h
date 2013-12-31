/*  Audacious - Cross-platform multimedia player
 *  Copyright (C) 2005-2007  Audacious development team.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; under version 3 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses>.
 *
 *  The Audacious team does not consider modular code linking to
 *  Audacious or using our public API to be a derived work.
 */

#ifndef SKINS_ACTIONS_EQUALIZER_H
#define SKINS_ACTIONS_EQUALIZER_H

#include <gtk/gtk.h>

void action_equ_load_preset(void);
void action_equ_load_auto_preset(void);
void action_equ_load_default_preset(void);
void action_equ_zero_preset(void);
void action_equ_load_preset_file(void);
void action_equ_load_preset_eqf(void);
void action_equ_import_winamp_presets(void);
void action_equ_save_preset(void);
void action_equ_save_auto_preset(void);
void action_equ_save_default_preset(void);
void action_equ_save_preset_file(void);
void action_equ_save_preset_eqf(void);
void action_equ_delete_preset(void);
void action_equ_delete_auto_preset(void);

void action_show_equalizer(GtkToggleAction*);
void action_roll_up_equalizer(GtkToggleAction*);

#endif /* SKINS_ACTIONS_EQUALIZER_H */
