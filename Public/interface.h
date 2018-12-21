#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>

class PluginInterface
{
public:
    virtual ~PluginInterface() {}
    virtual void SayHello(QWidget *parent) = 0;
};

#define pluginInterface_iid "io.qt.dynamicplugin"
Q_DECLARE_INTERFACE(PluginInterface, pluginInterface_iid)

#endif // INTERFACE_H
