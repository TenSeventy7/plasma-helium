/*
 * SPDX-FileCopyrightText: 2025 John Vincent Corcega <kamusta@tenseventyseven.xyz>
 * SPDX-FileCopyrightText: 2023 Paul A McAuley <kde@paulmcauley.com>
 *
 * SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
 */

#include "breeze.h"

namespace Breeze
{

QString heliumLongVersion()
{
    QString version;

    version = QString(HELIUM_VERSION);
#if HELIUM_GIT_MASTER
    version += ".git";
#endif
    return version;
}

}
