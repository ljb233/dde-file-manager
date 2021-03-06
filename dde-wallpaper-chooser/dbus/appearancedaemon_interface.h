/**
 * Copyright (C) 2015 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -p appearancedaemon_interface.h:appearancedaemon_interface.cpp -c AppearanceDaemonInterface appearancedaemon.xml
 *
 * qdbusxml2cpp is Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef APPEARANCEDAEMON_INTERFACE_H_1444717865
#define APPEARANCEDAEMON_INTERFACE_H_1444717865

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.daemon.Appearance
 */
class AppearanceDaemonInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.daemon.Appearance"; }

public:
    AppearanceDaemonInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~AppearanceDaemonInterface();

    Q_PROPERTY(int FontSize READ fontSize)
    inline int fontSize() const
    { return qvariant_cast< int >(property("FontSize")); }

    Q_PROPERTY(QString Theme READ theme)
    inline QString theme() const
    { return qvariant_cast< QString >(property("Theme")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Delete(const QString &in0, const QString &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("Delete"), argumentList);
    }

    inline QDBusPendingReply<QString> List(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("List"), argumentList);
    }

    inline QDBusPendingReply<> Set(const QString &in0, const QString &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("Set"), argumentList);
    }

    inline QDBusPendingReply<QString> Show(const QString &in0, const QString &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("Show"), argumentList);
    }

    inline QDBusPendingReply<QString> Thumbnail(const QString &in0, const QString &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("Thumbnail"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void Changed(const QString &in0, const QString &in1);
};

#endif
