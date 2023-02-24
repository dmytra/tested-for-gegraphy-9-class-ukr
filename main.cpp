#include <QApplication>
#include "myWindow.h"
#include "myclass.h"
int main(int argc, char *argv[]) {
QApplication app(argc, argv);
MyWindow* window = new MyWindow;
window->show();
return app.exec();
}

