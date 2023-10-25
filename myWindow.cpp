#include "myWindow.h"
#include "myclass.h"
#include <QtCore>
#include <QtGui>
#include <QWidget>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QScrollArea>

#include <QVector>
#include <QString>
#include <QLabel>
#include <QRegularExpression>
#include <QDebug>

QVector<QString> vals;
int questionTruth = 0;
int questionNoTruth = 0;
int correntButtomShow = 0;

MyWindow::MyWindow(QWidget* parent) : QWidget(parent) {

    // «На Урок» Географія 9 клас Олімпіада
    // https://naurok.com.ua/test/geografiya-9-klas-olimpiada-1086122/print

    vals.append("1. Суспільна географія вивчає");
    vals.append("а) прирородну організацію суспільства");
    vals.append("б) державну організацію суспільства");
    vals.append("в) геопросторову організацію \n суспільства та його частин");
    vals.append("г) політичну організацію суспільства");
    vals.append("#в");
    vals.append("2. Національна економіка - це система ");
    vals.append("а) політичних відносин");
    vals.append("б) національних відносин");
    vals.append("в) сукупності видів господарської \nдіяльності та відносин");
    vals.append("г) культурних відносин");
    vals.append("#в");
    vals.append("3. Назвати універсальні \n економічні показники");
    vals.append("а) ВВП і ВНД");
    vals.append("б) ВВП і НТП");
    vals.append("в) НТР і НТП");
    vals.append("г) НТП і ІЛР");
    vals.append("#а");
    vals.append("4. Що входить до первинного \n сектору економіки");
    vals.append("а) Виробництво хімічної \n продукції");
    vals.append("б) Видобувна промисловість");
    vals.append("в) Туризм");
    vals.append("г) Сільське господарство");
    vals.append("#б");
    vals.append("5. Що входить до вторинного \n сектору");
    vals.append("а) Рибна промисловість");
    vals.append("б) Металургійне виробництво");
    vals.append("в) Будівництво");
    vals.append("г) Транспорт");
    vals.append("#б");
    vals.append("6. Якщо в секторальній \nструктурі економіки країни \n понад 25% ВВП припадає \nна первинний сектор, \n ця країна");
    vals.append("а) ідустріальна");
    vals.append("б) доіндустріальна");
    vals.append("в) постіндустріальна");
    vals.append("г) аграрна");
    vals.append("#б");
    vals.append("7. Якщо за секторальною \nструктурою економіки \nкраїни ВВП первинного \n сектору скаладає 1-2%, \nа третинний більше 70%, \n до якого типу \nвідноситься країна");
    vals.append("а) доіндустріальна");
    vals.append("б) індустріальна");
    vals.append("в) постіндустріальна");
    vals.append("г) індустриально-аграрна");
    vals.append("#в");
    vals.append("8. До якого типу суспільного \n розвитку належить Україна");
    vals.append("а) Постіндустріальна");
    vals.append("б) Індустріальна");
    vals.append("в) Доіндустріальна");
    vals.append("г) індустриально-аграрна");
    vals.append("#в");
    vals.append("9. Які основний чинник впливають\n на розміщення точного \n машинобудування");
    vals.append("а) Сировииний");
    vals.append("б) Науково-технічний");
    vals.append("в) Транспортний");
    vals.append("г) Працересурсний");
    vals.append("#б");
    vals.append("10. Спеціалізація це");
    vals.append("а) зосередження обсягів \n виробництва на підприємстві");
    vals.append("б) випуск однорідної продкції\n  на підприємстві");
    vals.append("в) встановлення виробничих \n зв'язків між \n підприємствами");
    vals.append("г) поєднання всіх стадій \n переробки сировини");
    vals.append("#б");
    vals.append("11. В основі Міжнародно \n поділу праці лежить");
    vals.append("а) Комбінування виробництва");
    vals.append("б) Спеціалізація країни");
    vals.append("в) Кооперація суспільних \n зв'язків");
    vals.append("г) Особливості структури \n господарства");
    vals.append("#б");
    vals.append("12. Процес всесвітньої економічної, \n  політичної, культурної \n нтеграції характерний для");
    vals.append("а) Інформатизації");
    vals.append("б) Приватизації");
    vals.append("в) Глобалізації");
    vals.append("г) Інновації");
    vals.append("#в");
    vals.append("13. Суспільна географія \nвивчає");
    vals.append("а) прирородну організацію суспільства");
    vals.append("б) державну організацію суспільства");
    vals.append("в) геопросторову організацію \nсуспільства та його частин");
    vals.append("г) політичну організацію суспільства");
    vals.append("#в");
    vals.append("14. Національна економіка - це система ");
    vals.append("а) політичних відносин");
    vals.append("б) національних відносин");
    vals.append("в) сукупності видів \n господарської діяльності \n та відносин");
    vals.append("г) культурних відносин");
    vals.append("#в");
    vals.append("15.  Назвати універсальні \n економічні \nпоказники");
    vals.append("а) ВВП і ВНД");
    vals.append("б) ВВП і НТП");
    vals.append("в) НТР і НТП");
    vals.append("г) НТП і ІЛР");
    vals.append("#а");
    vals.append("16.  Що входить до первинного \n сектору \nекономіки");
    vals.append("а) Виробництво хімічної продукції");
    vals.append("б) Видобувна промисловість");
    vals.append("в) Туризм");
    vals.append("г) Сільське господарство");
    vals.append("#б");
    vals.append("17.  Що входить до \n вторинного сектору");
    vals.append("а) Рибна промисловість");
    vals.append("б) Металургійне виробництво");
    vals.append("в) Будівництво");
    vals.append("г) Транспорт");
    vals.append("#б");
    vals.append("18. Якщо в секторальній с\n труктурі економіки \n країни понад 25% ВВП\n припадає на первинний \n сектор, ця країна");
    vals.append("а) ідустріальна");
    vals.append("б) доіндустріальна");
    vals.append("в) постіндустріальна");
    vals.append("г) аграрна");
    vals.append("#а");
    vals.append("19. Якщо за секторальною структурою \n економіки країни ВВП первинного \n сектору скаладає 1-2%,\n а третинний більше 70%, \nдо якого  типу відноситься \nкраїна");
    vals.append("а) доіндустріальна");
    vals.append("б) індустріальна");
    vals.append("в) постіндустріальна");
    vals.append("г) аграрна");
    vals.append("#в");
    vals.append("20. До якого типу суспільного \nрозвитку належить Україна");
    vals.append("а) Постіндустріальна");
    vals.append("б) Індустріальна");
    vals.append("в) Доіндустріальна    ");
    vals.append("б) аграрна");
    vals.append("#а");

        int nam = vals.size();
        QString str[nam];
        int i = 0;
        for (QString val : vals) {
            str[i] = val;
            i++;
        }

        QVBoxLayout *vBoxLayout= new QVBoxLayout(this);
     for (int i = 0; i < nam; ++i) {
         myButton[i] = new MyClass(str[i]);
         myButton[i]->setHidden(true);

         QRegularExpression reD("^[0-9]+");
         QRegularExpressionMatch matchD = reD.match(str[i]);
         if (matchD.hasMatch()) {
             myButton[i]->setEnabled(false);
             myButton[i]->setStyleSheet   (              "color: black; "
                                                         "font-size: 14pt; "
                                                         "background-color: white;"
                                                         "border-radius: 7;"
                                                         "padding: 3px;"
                                                         "padding-left: 5px;"
                                                         "padding-right: 5px;"
                                                         "border-color: white;"
                                                         "border-width: 1px;"
                                                         "font-family:Tahoma");

        }

         QRegularExpression reER("^[#]+");
         QRegularExpressionMatch matchER = reER.match(str[i]);
         if (matchER.hasMatch()) {
             myButton[i]->setHidden(true);
         }
         vBoxLayout->addWidget(myButton[i]);
         connect( myButton[i], SIGNAL( clicked(int) ),
         this, SLOT( myMessageBox(int) ) );
         connect( myButton[i], SIGNAL( clicked(int) ),
         this, SLOT( myMessageBox2() ) );
     }

    myButton[nam] = new MyClass("перевірено 0");
    vBoxLayout->addWidget(myButton[nam]);

    myButton[nam]->setStyleSheet   (              "color: white; "
                                                "background-color: red;"
                                                "border-style: solid;"
                                                  "font-size: 14pt; "
                                                "border-radius: 2;"
                                                "padding: 12px;"
                                                "padding-left: 12px;"
                                                "padding-right: 12px;"
                                                "border-color: white;"
                                                "border-width: 1px;"
                                                "font:Bold;"
                                                "font-family:Tahoma");


    for (int i = correntButtomShow; i < correntButtomShow + 5; ++i) {
        myButton[i]->setStyleSheet   (              "color: black; "
                                                    "font-size: 14pt; "
                                                    "background-color: white;"
                                                    "border-radius: 7;"
                                                    "padding: 3px;"
                                                    "padding-left: 5px;"
                                                    "padding-right: 5px;"
                                                    "border-color: white;"
                                                    "border-width: 1px;"
                                                    "font-family:Tahoma");
        myButton[i]->show();
    }
}

void MyWindow::myMessageBox2() {

    for (int i = correntButtomShow; i <= correntButtomShow + 5 ; ++i) {
        myButton[i]->setHidden(true);
    }

    correntButtomShow +=6;

    for (int i = correntButtomShow; i <= correntButtomShow +5 &&  vals.size() > correntButtomShow + 5; ++i) {
        myButton[i]->setStyleSheet   (              "color: black; "
                                                    "font-size: 14pt; "
                                                    "background-color: white;"
                                                    "border-radius: 7;"
                                                    "padding: 3px;"
                                                    "padding-left: 5px;"
                                                    "padding-right: 5px;"
                                                    "border-color: white;"
                                                    "border-width: 1px;"
                                                    "font-family:Tahoma");
        myButton[i]->show();// >setHidden(false);
        QRegularExpression reER("^[#]+");
        QRegularExpressionMatch matchER = reER.match(myButton[i]->text());
        if (matchER.hasMatch()) {
            myButton[i]->setHidden(true);
        }
    }
}

void MyWindow::myMessageBox(int id) {

    myButton[id]->setEnabled(false);

int countTR = 0;
bool idbool = false;
QString idboolchar;
       for (QString val : vals) {
           QRegularExpression reC("^[а-я]+");
           QRegularExpressionMatch matchC = reC.match(val);
           if (matchC.hasMatch()) {
               if (id == countTR)
               {
                   idbool = true;
                   idboolchar = matchC.captured(0);
               }
           }
           QRegularExpression reER("^[#]+");
           QRegularExpressionMatch matchER = reER.match(val);
           if (matchER.hasMatch() && idbool == true) {
               if (QString(val[1]) == idboolchar)
               {
               questionTruth += 1;
               } else questionNoTruth++;

               myButton[vals.size()]->setText("Вірно " + QString::number(questionTruth) +
                                              " || НЕ вірно " + QString::number(questionNoTruth));
               idbool = false;
           }
           countTR++;
       }
 }
