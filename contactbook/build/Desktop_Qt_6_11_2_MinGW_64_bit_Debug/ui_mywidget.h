/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *insert;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName("MyWidget");
        MyWidget->resize(800, 600);
        verticalLayout_3 = new QVBoxLayout(MyWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        tableWidget = new QTableWidget(MyWidget);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_3->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_1 = new QLabel(MyWidget);
        label_1->setObjectName("label_1");

        verticalLayout->addWidget(label_1);

        label_2 = new QLabel(MyWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(MyWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(MyWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit_1 = new QLineEdit(MyWidget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setEnabled(true);

        verticalLayout_2->addWidget(lineEdit_1);

        lineEdit_2 = new QLineEdit(MyWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(MyWidget);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(MyWidget);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout_2->addWidget(lineEdit_4);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(785, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(MyWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);

        insert = new QPushButton(MyWidget);
        insert->setObjectName("insert");

        horizontalLayout_2->addWidget(insert);

        pushButton = new QPushButton(MyWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(785, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QCoreApplication::translate("MyWidget", "MyWidget", nullptr));
        label_1->setText(QCoreApplication::translate("MyWidget", "\345\255\270\350\231\237:", nullptr));
        label_2->setText(QCoreApplication::translate("MyWidget", "\347\217\255\347\264\232:", nullptr));
        label_3->setText(QCoreApplication::translate("MyWidget", "\345\247\223\345\220\215:", nullptr));
        label_4->setText(QCoreApplication::translate("MyWidget", "\351\233\273\350\251\261:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MyWidget", "\345\214\257\345\205\245", nullptr));
        insert->setText(QCoreApplication::translate("MyWidget", "\346\226\260\345\242\236", nullptr));
        pushButton->setText(QCoreApplication::translate("MyWidget", "\345\214\257\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
