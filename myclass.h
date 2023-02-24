#ifndef MYCLASS_H
#define MYCLASS_H
#include <QString>
#include <QWidget>
#include <QPushButton>

// A class that has signals and slots.
class MyClass: public QPushButton
{
    Q_OBJECT
public:
 MyClass( const QString& text,
int id,
QWidget* parent = NULL );
 MyClass( const QString& text,
QWidget* parent = NULL );
 private:
 static int nextId;
 int m_id;
 public slots:
// overwrite click ()
 void click();
 signals:
// add a new signal
 void clicked(int id);
};

#endif // MYCLASS_H
