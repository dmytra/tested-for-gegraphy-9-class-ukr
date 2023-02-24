#include "myclass.h"
 int MyClass::nextId = 0;
 MyClass::MyClass( const QString& text, int id,
QWidget* parent ) : QPushButton(text, parent), m_id(id) {
 connect(this, SIGNAL(clicked()), this, SLOT(click()));
 }
 MyClass::MyClass(const QString& text, QWidget* parent )
: QPushButton(text, parent), m_id(nextId++) {
 connect(this, SIGNAL(clicked()), this, SLOT(click()));
 }
 void MyClass::click() {
 emit clicked(m_id);
}
