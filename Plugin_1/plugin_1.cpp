#include "plugin_1.h"

Plugin_1::Plugin_1(QObject *parent) : QObject(parent)
{

}

void Plugin_1::SayHello()
{
    qDebug("sya heeloo!!");
}
