#ifndef INTERFACE_H
#define INTERFACE_H

#include <QObject>

class PluginInterface
{
public:
    virtual ~PluginInterface() {}
    virtual void SayHello() = 0;
};

#define pluginInterface_iid "LIXINGCONG_PLUGIN_HELLO"
Q_DECLARE_INTERFACE(PluginInterface, pluginInterface_iid)

#endif // INTERFACE_H
