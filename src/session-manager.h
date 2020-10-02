/*
 * Copyright (C) 2020 Purism SPC
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#pragma once

#include <glib-object.h>

G_BEGIN_DECLS

#define PHOSH_TYPE_SESSION_MANAGER     phosh_session_manager_get_type ()

G_DECLARE_FINAL_TYPE (PhoshSessionManager, phosh_session_manager,
                      PHOSH, SESSION_MANAGER, GObject)

PhoshSessionManager *phosh_session_manager_new (void);
gboolean phosh_session_manager_is_active (PhoshSessionManager *self);

G_END_DECLS
