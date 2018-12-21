#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../Public/interface.h"
#include <QPluginLoader>
#include <QDebug>
#include <QDir>
#include <QJsonObject>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked,
            this, &MainWindow::onButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonClicked()
{
    // load plugins example
    // http://doc.qt.io/qt-5/qtwidgets-tools-echoplugin-example.html

    QDir pluginsDir(qApp->applicationDirPath());

#if defined(Q_OS_WIN)
    if (pluginsDir.dirName().toLower() == "debug" || pluginsDir.dirName().toLower() == "release")
        pluginsDir.cdUp();
#endif

    pluginsDir.cd("plugins"); // 打开程序所在目录的plugins目录

    foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
        //qDebug()<<fileName;

        QPluginLoader pluginLoader(pluginsDir.absoluteFilePath(fileName));

        if(pluginInterface_iid != pluginLoader.metaData().value("IID").toString()){
            qDebug()<<fileName<<"was not my own DLL!";
            continue;
        }

        QObject *plugin = pluginLoader.instance();

        if(plugin){
            auto interface = qobject_cast<PluginInterface*>(plugin);
            if(interface){
                auto jsonData=pluginLoader.metaData().value("MetaData").toObject();

                qDebug()<<"load ok, version="<<jsonData.value("Version").toString()<<
                          "help="<<jsonData.value("Help").toString();

                interface->SayHello();
            }else{
                qDebug("load pulgin instance ok, but invalid");
            }
        }else{
            qDebug("load pulgin fail");
        }
    }
}
