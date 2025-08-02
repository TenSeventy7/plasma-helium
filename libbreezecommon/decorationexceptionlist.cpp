//////////////////////////////////////////////////////////////////////////////
// breezeexceptionlist.cpp
// window decoration exceptions
// -------------------
//
// SPDX-FileCopyrightText: 2009 Hugo Pereira Da Costa <hugo.pereira@free.fr>
// SPDX-FileCopyrightText: 2022-2023 Paul A McAuley <kde@paulmcauley.com>
//
// SPDX-License-Identifier: MIT
//////////////////////////////////////////////////////////////////////////////

#include "decorationexceptionlist.h"
#include <QVector>

namespace Breeze
{

struct DefaultExceptionData {
    int propertyType;
    QString propertyPattern;
    QString programNamePattern;
    bool opaqueTitleBar;
    bool preventApplyOpacityToHeader;
    int borderSize;
    bool enabled;
    bool exceptionBorder;
    QString exceptionPreset;
    bool hideTitleBar;
};

const QVector<DefaultExceptionData> hardcodedExceptions =
{
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName,
        "",                 // propertyPattern
        "VirtualBox.*",     // programNamePattern
        false,              // opaqueTitleBar
        true,               // preventApplyOpacityToHeader
        0,                  // borderSize
        true,               // enabled
        false,              // exceptionBorder
        "",                 // exceptionPreset
        false               // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "systemsettings",                       // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Faux-CSD",                      // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.discover",                     // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header",                        // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.kclock",                       // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header",                        // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.filelight",                    // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header",                        // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.kfind",                        // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header",                        // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.kweather",                     // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header",                        // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.kjournaldbrowser",             // propertyPattern
        "kjournaldbrowser",                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header",                        // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "kinfocenter",                          // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header",                        // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.partitionmanager",             // propertyPattern
        "partitionmanager",                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header Blur",                   // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.plasma-systemmonitor",         // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header",                        // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.konsole",                      // propertyPattern
        "konsole",                              // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Faux-CSD Blur",                 // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.merkuro.*",                    // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Faux-CSD",                      // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "kcm_notifications",                    // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header",                        // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.kamoso",                       // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Faux-CSD",                      // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.elisa",                        // propertyPattern
        "elisa",                                // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header",                        // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.krecorder",                    // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Faux-CSD",                      // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.krdc",                         // propertyPattern
        "krdc",                                 // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Faux-CSD Blur",                 // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.okular",                       // propertyPattern
        "okular",                               // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header Blur",                   // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.khelpcenter",                  // propertyPattern
        "khelpcenter",                          // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        false,                                  // exceptionBorder (Note: this one is false)
        "Helium Faux-CSD Blur",                 // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.plasma-welcome",               // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Faux-CSD",                      // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.gwenview",                     // propertyPattern
        "gwenview",                             // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Faux-CSD Blur",                 // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.kolourpaint",                  // propertyPattern
        "kolourpaint",                          // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Faux-CSD",                      // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.dolphin",                      // propertyPattern
        "dolphin",                              // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header Blur",                   // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.kmenuedit",                    // propertyPattern
        "kmenuedit",                            // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Faux-CSD Blur",                 // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.kwrite",                       // propertyPattern
        "kwrite",                               // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Faux-CSD Blur",                 // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.skanpage",                     // propertyPattern
        "skanpage",                             // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Faux-CSD",                      // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.ark",                          // propertyPattern
        "ark",                                  // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header Blur",                   // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.spectacle",                    // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header",                        // exceptionPreset
        false                                   // hideTitleBar
    },
    {
        InternalSettings::EnumExceptionWindowPropertyType::ExceptionWindowClassName, // propertyType (0)
        "org.kde.kalk",                         // propertyPattern
        "",                                     // programNamePattern
        false,                                  // opaqueTitleBar
        false,                                  // preventApplyOpacityToHeader
        0,                                      // borderSize
        true,                                   // enabled
        true,                                   // exceptionBorder
        "Helium Header",                        // exceptionPreset
        false                                   // hideTitleBar
    }
};

//______________________________________________________________
void DecorationExceptionList::readConfig(KSharedConfig::Ptr config, const bool readDefaults)
{
    _exceptions.clear();
    _defaultExceptions.clear();

    // Loop through the hardcoded exceptions and populate the _defaultExceptions list
    for (const auto &data : hardcodedExceptions) {
        InternalSettingsPtr defaultException(new InternalSettings());
        defaultException->setExceptionWindowPropertyType(data.propertyType);
        defaultException->setExceptionWindowPropertyPattern(data.propertyPattern);
        defaultException->setExceptionProgramNamePattern(data.programNamePattern);
        defaultException->setOpaqueTitleBar(data.opaqueTitleBar);
        defaultException->setPreventApplyOpacityToHeader(data.preventApplyOpacityToHeader);
        defaultException->setBorderSize(data.borderSize);
        defaultException->setEnabled(data.enabled);
        defaultException->setExceptionBorder(data.exceptionBorder);
        defaultException->setExceptionPreset(data.exceptionPreset);
        defaultException->setHideTitleBar(data.hideTitleBar);
        _defaultExceptions.append(defaultException);
    }

    QString groupName;

    // load default enabled settings for the default exceptions
    if (!readDefaults) {
        for (int index = 0; index < _defaultExceptions.count(); ++index) {
            readExceptionEnabledFromConfig(config, defaultExceptionGroupName(index), _defaultExceptions, index);
        }
    }

    // load user-set exceptions from the config file
    for (int index = 0; config->hasGroup(groupName = exceptionGroupName(index)); ++index) {
        readIndividualExceptionFromConfig(config, groupName, _exceptions);
    }
}

void DecorationExceptionList::readIndividualExceptionFromConfig(KSharedConfig::Ptr config, QString &groupName, InternalSettingsList &appendTo)
{
    // create exception
    InternalSettings exception;

    // reset group
    readConfig(&exception, config.data(), groupName);

    // create new configuration
    InternalSettingsPtr configuration(new InternalSettings());
    configuration.data()->load();

    // apply changes from exception
    configuration->setEnabled(exception.enabled());
    configuration->setExceptionWindowPropertyType(exception.exceptionWindowPropertyType());
    configuration->setExceptionProgramNamePattern(exception.exceptionProgramNamePattern());
    configuration->setExceptionWindowPropertyPattern(exception.exceptionWindowPropertyPattern());

    configuration->setExceptionPreset(exception.exceptionPreset());
    configuration->setExceptionBorder(exception.exceptionBorder());

    if (exception.exceptionBorder())
        configuration->setBorderSize(exception.borderSize());
    configuration->setHideTitleBar(exception.hideTitleBar());
    configuration->setOpaqueTitleBar(exception.opaqueTitleBar());
    configuration->setPreventApplyOpacityToHeader(exception.preventApplyOpacityToHeader());

    // append to exceptions
    appendTo.append(configuration);
}

void DecorationExceptionList::readExceptionEnabledFromConfig(KSharedConfig::Ptr config, QString groupName, InternalSettingsList &settingsList, int index)
{
    // create exception
    InternalSettings exception;

    // reset group
    readConfig(&exception, config.data(), groupName);

    // append to exceptions
    settingsList[index]->setEnabled(exception.enabled());
}

int DecorationExceptionList::numberDefaults()
{
    return _defaultExceptions.size();
}

//______________________________________________________________
void DecorationExceptionList::writeConfig(KSharedConfig::Ptr config)
{
    QString groupName;
    // remove all existing default-set exceptions
    for (int index = 0; config->hasGroup(groupName = defaultExceptionGroupName(index)); ++index) {
        config->deleteGroup(groupName);
    }

    // rewrite current default exceptions with user-set enable flag
    int index = 0;
    for (const InternalSettingsPtr &exception : std::as_const(_defaultExceptions)) {
        writeDefaultsConfig(exception.data(), config.data(), defaultExceptionGroupName(index));
        ++index;
    }

    // remove all existing user-set exceptions
    for (int index = 0; config->hasGroup(groupName = exceptionGroupName(index)); ++index) {
        config->deleteGroup(groupName);
    }

    // rewrite current user-set exceptions
    index = 0;
    for (const InternalSettingsPtr &exception : std::as_const(_exceptions)) {
        writeConfig(exception.data(), config.data(), exceptionGroupName(index));
        ++index;
    }
}

//_______________________________________________________________________
QString DecorationExceptionList::exceptionGroupName(int index)
{
    return QString("Windeco Exception %1").arg(index);
}

//_______________________________________________________________________
QString DecorationExceptionList::defaultExceptionGroupName(int index)
{
    return QString("Default Windeco Exception %1").arg(index);
}

//______________________________________________________________
void DecorationExceptionList::writeConfig(KCoreConfigSkeleton *skeleton, KConfig *config, const QString &groupName)
{
    // write all items in windecoExceptionKeys
    for (auto key : windecoExceptionKeys) {
        KConfigSkeletonItem *item(skeleton->findItem(key));
        if (!item)
            continue;

        if (!groupName.isEmpty())
            item->setGroup(groupName);
        KConfigGroup configGroup(config, item->group());
        configGroup.writeEntry(item->key(), item->property());
    }
}

//______________________________________________________________
void DecorationExceptionList::writeDefaultsConfig(KCoreConfigSkeleton *skeleton, KConfig *config, const QString &groupName)
{
    // list of items to be written
    QStringList keys = {"Enabled"};

    // write all items
    for (auto key : keys) {
        KConfigSkeletonItem *item(skeleton->findItem(key));
        if (!item || item->isEqual(true)) // don't write true to file as it's already the default
            continue;

        if (!groupName.isEmpty())
            item->setGroup(groupName);
        KConfigGroup configGroup(config, item->group());
        configGroup.writeEntry(item->key(), item->property());
    }
}

//______________________________________________________________
void DecorationExceptionList::readConfig(KCoreConfigSkeleton *skeleton, KConfig *config, const QString &groupName)
{
    const auto items = skeleton->items();
    for (KConfigSkeletonItem *item : items) {
        if (!groupName.isEmpty())
            item->setGroup(groupName);
        item->readConfig(config);
    }
}

}
