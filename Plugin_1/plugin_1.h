#ifndef PLUGIN_1_H
#define PLUGIN_1_H

#include <QObject>
#include <../Public/interface.h>

class Plugin_1 : public QObject, PluginInterface
{
    // json file example
    // https://doc-snapshots.qt.io/qtcreator-extending/plugin-meta-data.html

    Q_OBJECT
    Q_PLUGIN_METADATA(IID pluginInterface_iid FILE "plugin_1.json")
    Q_INTERFACES(PluginInterface)

    // plugin doc
    // http://doc.qt.io/qt-5/plugins-howto.html

public:
    explicit Plugin_1(QObject *parent = nullptr);
    void SayHello()override;

signals:

public slots:
};

#endif // PLUGIN_1_H
