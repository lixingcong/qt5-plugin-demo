#ifndef PLUGIN_2_H
#define PLUGIN_2_H

#include <QObject>
#include <../Public/interface.h>

class Plugin_2 : public QObject, PluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID pluginInterface_iid FILE "plugin_2.json")
    Q_INTERFACES(PluginInterface)

public:
    explicit Plugin_2(QObject *parent = nullptr);
    void SayHello()override;

signals:

public slots:
};

#endif // PLUGIN_2_H
