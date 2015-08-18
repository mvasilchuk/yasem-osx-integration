#ifndef OSXINTERGATION_H
#define OSXINTERGATION_H

#include "osxintegration_global.h"

#include "plugin.h"

#include <QObject>
#include <QSystemTrayIcon>
#include <QMenu>

namespace yasem {

class OSXINTERGATIONSHARED_EXPORT OsxIntegration: public SDK::Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.mvas.yasem.OsxIntegrationPlugin/1.0" FILE "metadata.json")
    Q_INTERFACES(yasem::SDK::Plugin)

    Q_CLASSINFO("author", "Maxim Vasilchuk")
    Q_CLASSINFO("description", "OS X integration")
    Q_CLASSINFO("version", MODULE_VERSION)
    Q_CLASSINFO("revision", GIT_VERSION)
public:
    OsxIntegration(QObject* parent = 0);
    virtual ~OsxIntegration();

    // Plugin interface
public:
    void register_dependencies();
    void register_roles();
};

}

#endif // OSXINTERGATION_H
