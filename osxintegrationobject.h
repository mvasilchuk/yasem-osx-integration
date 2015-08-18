#ifndef OSXINTEGRATIONOBJECT_H
#define OSXINTEGRATIONOBJECT_H

#include "abstractpluginobject.h"

namespace yasem {

class OsxIntegrationObject: public SDK::AbstractPluginObject
{
    Q_OBJECT
public:
    explicit OsxIntegrationObject(SDK::Plugin* plugin);
    virtual ~OsxIntegrationObject();

public:
    SDK::PluginObjectResult init();
    SDK::PluginObjectResult deinit();
};

}

#endif // OSXINTEGRATIONOBJECT_H
