/***************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (directui@nokia.com)
**
** This file is part of applauncherd
**
** If you have questions regarding the use of this file, please contact
** Nokia at directui@nokia.com.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation
** and appearing in the file LICENSE.LGPL included in the packaging
** of this file.
**
****************************************************************************/

#ifndef PRELOAD_H
#define PRELOAD_H

const char * const gLibs[] =
{
    "/usr/lib/libcontactsvoicemail.so.0",
    "/usr/lib/libmaemomeegotouchcalendarinterface.so.1",
    "/usr/lib/libqtcontacts_extensions_tracker.so.4",
    "/usr/lib/libcontactsutils.so.0",
    "/usr/lib/libcontactswidgets.so.0",
    "/usr/lib/libpvr2d_r125.so",
    "/usr/lib/libpvrPVR2D_DRI2WSEGL_r125.so",
    "/usr/lib/libdatepicker.so",
    "/usr/lib/libvideo-widget-meegotouch.so.1",
    "/usr/lib/libvideo-renderer-gst-playbin2.so.1",
    "/usr/lib/libAccountPlugin.so.1",
    "/usr/lib/libmaemomeegotouchcontactsinterface.so.1",
    "/usr/lib/libgeoengine-mapwidget.so.1",
    "/usr/lib/libmcontentwidgets.so.0",
    "/usr/lib/libQtVersit.so.1",
    "/usr/lib/libMOS.so.1",
    "/usr/lib/libgallerycore.so.1",
    "/usr/lib/liblocationpicker.so",
    "/usr/lib/libAccountSetup.so.1",
    "/usr/lib/liblocationextras.so",
    "/usr/lib/libNAccountsUI.so.1",
    "/usr/lib/libmdatauri.so.0",
    "/usr/lib/libgeoengine.so.1",
    "/usr/lib/libSignOnUI.so",
    "/usr/lib/libgq-gconf.so.0",
    "/usr/lib/qt4/plugins/imageformats/libqsvg.so",
    "/usr/lib/libgstinterfaces-0.10.so.0",
    "/usr/lib/libgstbase-0.10.so.0",
    "/usr/lib/qt4/plugins/imageformats/libqico.so",
    "/usr/lib/libquill.so.1",
    "/usr/lib/libidn.so.11",
    "/usr/lib/libmeegocontrol.so",
    "/usr/lib/libcares.so.2",
    "/usr/lib/qt4/plugins/imageformats/libqtiff.so",
    "/usr/lib/libgstpbutils-0.10.so.0",
    "/usr/lib/libambase.so",
    "/usr/lib/libcellular-qt.so.1",
    "/usr/lib/libmoi.so.0",
    "/usr/lib/libcurl.so.4",
    "/usr/lib/libcommhistory.so.0",
    "/usr/lib/libmessagingif0.so",
    "/usr/lib/libgstvideo-0.10.so.0",
    "/usr/lib/qt4/plugins/imageformats/libqgif.so",
    "/usr/lib/libtiff.so.4",
    "/usr/lib/libresource.so",
    "/usr/lib/libgstreamer-0.10.so.0",
    "/usr/lib/libQtLocation.so.1",
    "/usr/lib/libexempi.so.3",
    "/usr/lib/libquillimagefilter.so.1",
    "/usr/lib/libexif.so.12",
    "/usr/lib/libresourceqt.so.1",
    "/usr/lib/libquillmetadata.so.1",
    "/usr/lib/libprofile.so.0",
    "/usr/lib/libsaveas.so",
    "/usr/lib/libsignoncrypto-qt.so.1",
    "/usr/lib/libsignon-qt.so",
    "/usr/lib/libmaemomeegotouchshareuiinterface.so.1",
    "/usr/lib/libQtContacts.so.1",
    "/usr/lib/libduicontrolpanel.so",
    "/usr/lib/libaccounts-qt.so.1",
    "/usr/lib/libdbus-qeventloop.so.1",
    "/usr/lib/libaccounts-glib.so.0",
    "/usr/lib/libsmartsearch.so",
    "/usr/lib/libhal.so.1",
    "/usr/lib/libcontentmanager.so.0",
    "/usr/lib/librelevance.so.0",
    "/usr/lib/libdsme.so.0.2.0",
    "/usr/lib/libtimed.so.0",
    "/usr/lib/libqmsystem2.so.1",
    "/lib/libnss_files-2.10.1.so",
    "/usr/lib/libsensordatatypes.so",
    "/usr/lib/libsensorclient.so",
    "/usr/lib/libdsme_dbus_if.so.0.2.0",
    "/usr/lib/libqmlog.so.0",
    "/lib/libuuid.so.1",
    "/usr/lib/libiphb.so",
    "/usr/lib/libthumbnailer.so.0",
    "/usr/lib/libsysinfo.so.0",
    "/usr/lib/libbmeipc.so.0",
    "/usr/lib/libqttracker.so.1~6",
    "/usr/lib/libjpeg.so.62",
    "/usr/lib/libQtXmlPatterns.so.4",
    "/usr/lib/libQtScript.so.4",
    "/usr/lib/libssl.so.0.9.8",
    "/usr/lib/libaegis_crypto.so.1",
    "/usr/lib/libQtDeclarative.so.4",
    "/usr/lib/libxml2.so.2",
    "/lib/libcal.so.1",
    "/usr/lib/libcontentaction.so.0",
    "/usr/lib/libcrypto.so.0.9.8",
    "/usr/lib/libbb5.so.0",
    "/lib/libresolv-2.10.1.so",
    "/usr/lib/libgio-2.0.so.0",
    "/usr/lib/libQtSparql.so.0",
    "/usr/lib/libsqlite3.so.0",
    "/usr/lib/libQtSql.so.4",
    "/usr/lib/libmeegotouchsettings.so.0",
    "/usr/lib/libmeegotouchextensions.so.0",
    "/usr/lib/qt4/plugins/inputmethods/libminputcontext.so",
    "/usr/lib/qt4/plugins/inputmethods/libqimsw-multi.so",
    "/lib/libudev.so.0",
    "/usr/lib/libmeegotouchviews.so.0",
    "/usr/lib/qt4/plugins/graphicssystems/libqmeegographicssystem.so",
    "/usr/lib/libXrandr.so.2",
    "/usr/lib/contextkit/subscriber-plugins/kbslider-1.so",
    "/usr/lib/libXcomposite.so.1",
    "/usr/lib/libGLESv2_r125.so",
    "/usr/lib/libgconf-2.so.4",
    "/usr/lib/libQtCore.so.4",
    "/usr/lib/libdbus-glib-1.so.2",
    "/usr/lib/libstdc++.so.6",
    "/usr/lib/libXi.so.6",
    "/lib/libpcre.so.3",
    "/usr/lib/libQtSvg.so.4",
    "/usr/lib/libicui18n.so.44",
    "/usr/lib/libIMGegl_r125.so",
    "/usr/lib/libdbus-1.so.3",
    "/usr/lib/libmeegotouchcore.so.0",
    "/usr/lib/libX11.so.6",
    "/usr/lib/libexpat.so.1",
    "/usr/lib/libfontconfig.so.1",
    "/usr/lib/libSM.so.6",
    "/usr/lib/libICE.so.6",
    "/usr/lib/libEGL_r125.so",
    "/usr/lib/libXdamage.so.1",
    "/usr/lib/libcontextsubscriber.so.0",
    "/lib/libdl-2.10.1.so",
    "/usr/lib/libXext.so.6",
    "/lib/libpthread-2.10.1.so",
    "/usr/lib/libXau.so.6",
    "/usr/lib/libgobject-2.0.so.0",
    "/usr/lib/libcdb.so.1",
    "/usr/lib/libQtNetwork.so.4",
    "/usr/lib/gconv/UTF-16.so",
    "/usr/lib/libicudata.so.44",
    "/usr/lib/libQtMeeGoGraphicsSystemHelper.so.4",
    "/usr/lib/libQtGui.so.4",
    "/usr/lib/libQtOpenGL.so.4",
    "/usr/lib/libQtXml.so.4",
    "/usr/lib/libQtDBus.so.4",
    "/usr/lib/libXfixes.so.3",
    "/usr/lib/libz.so.1",
    "/usr/lib/libxcb.so.1",
    "/lib/libm-2.10.1.so",
    "/usr/lib/libgmodule-2.0.so.0",
    "/usr/lib/libsrv_um_r125.so",
    "/usr/lib/libpng12.so.0",
    "/usr/lib/libfreetype.so.6",
    "/usr/lib/libgthread-2.0.so.0",
    "/lib/libglib-2.0.so.0",
    "/usr/lib/libXrender.so.1",
    "/usr/lib/libicuuc.so.44",
    "/lib/librt-2.10.1.so",
    "/usr/bin/single-instance"
};

#endif // PRELOAD_H
