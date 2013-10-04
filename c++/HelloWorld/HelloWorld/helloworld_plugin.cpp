//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

#include "helloworld_plugin.h"
#include "helloworld.h"

#include <qdeclarative.h>

void HelloWorldPlugin::registerTypes(const char *uri)
{
    // @uri org.huggle.extension.qt
    qmlRegisterType<HelloWorld>(uri, 1, 0, "HelloWorld");
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(HelloWorld, HelloWorldPlugin)
#endif

