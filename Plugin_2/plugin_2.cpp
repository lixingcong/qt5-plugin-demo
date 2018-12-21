#include "plugin_2.h"

Plugin_2::Plugin_2(QObject *parent) : QObject(parent)
{

}

void Plugin_2::SayHello()
{
    qDebug("Hello!!!!!! HHHHHH!!! I am plugin 2!!");
}
