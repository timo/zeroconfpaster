#ifndef ZEROCONFPASTER_H
#define ZEROCONFPASTER_H

#include "zeroconfpaster_global.h"

#include <extensionsystem/iplugin.h>

namespace ZeroconfPaster {
namespace Internal {

class ZeroconfPasterPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "ZeroconfPaster.json")

public:
    ZeroconfPasterPlugin();
    ~ZeroconfPasterPlugin();

    bool initialize(const QStringList &arguments, QString *errorString);
    void extensionsInitialized();
    ShutdownFlag aboutToShutdown();

private slots:
    void triggerAction();
};

} // namespace Internal
} // namespace ZeroconfPaster

#endif // ZEROCONFPASTER_H

