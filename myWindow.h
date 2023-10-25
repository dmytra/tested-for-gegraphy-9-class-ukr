#ifndef MYWINDOW_H
#define MYWINDOW_H
#include <QWidget>
#include<QObject>
#include "myclass.h"
 class MyWindow : public QWidget {
 Q_OBJECT
 public:
 MyWindow(QWidget* parent = NULL);

 private:
 MyClass* myButton[155];
 public slots:
 // slot for the output
    void myMessageBox(int id);
    void myMessageBox2();
 };
 #endif
