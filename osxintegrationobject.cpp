#include "osxintegrationobject.h"
#include "macros.h"

#include <QCoreApplication>

using namespace yasem;

OsxIntegrationObject::OsxIntegrationObject(SDK::Plugin* plugin):
    SDK::AbstractPluginObject(plugin)
{

}

OsxIntegrationObject::~OsxIntegrationObject()
{
}

SDK::PluginObjectResult OsxIntegrationObject::init()
{
    return SDK::PLUGIN_OBJECT_RESULT_OK;
}

SDK::PluginObjectResult OsxIntegrationObject::deinit()
{
    return SDK::PLUGIN_OBJECT_RESULT_OK;
}
