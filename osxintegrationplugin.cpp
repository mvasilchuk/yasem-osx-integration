#include "osxintegrationplugin.h"
#include "osxintegrationobject.h"

using namespace yasem;

OsxIntegration::OsxIntegration(QObject* parent):
    SDK::Plugin(parent)
{

}

OsxIntegration::~OsxIntegration()
{

}


void OsxIntegration::register_dependencies()
{
}

void OsxIntegration::register_roles()
{
    register_role(SDK::ROLE_ENV_INTEGRATION, new OsxIntegrationObject(this));
}
