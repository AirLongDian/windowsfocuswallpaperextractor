/********************************************************************************
** Form generated from reading UI file 'wwe.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WWE_H
#define UI_WWE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WWE
{
public:
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *WWE)
    {
        if (WWE->objectName().isEmpty())
            WWE->setObjectName("WWE");
        WWE->resize(495, 67);
        horizontalLayout_4 = new QHBoxLayout(WWE);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(WWE);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(WWE);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_4->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(31, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton = new QPushButton(WWE);
        pushButton->setObjectName("pushButton");

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(WWE);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_4->addWidget(pushButton_2);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 6);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 2);
        horizontalLayout_4->setStretch(4, 2);

        retranslateUi(WWE);
        QObject::connect(pushButton, SIGNAL(clicked()), WWE, SLOT(browser()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), WWE, SLOT(extract()));

        QMetaObject::connectSlotsByName(WWE);
    } // setupUi

    void retranslateUi(QWidget *WWE)
    {
        WWE->setWindowTitle(QCoreApplication::translate("WWE", "WWE", nullptr));
        label->setText(QCoreApplication::translate("WWE", "OutDir :", nullptr));
        pushButton->setText(QCoreApplication::translate("WWE", "Browser", nullptr));
        pushButton_2->setText(QCoreApplication::translate("WWE", "Extract", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WWE: public Ui_WWE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WWE_H
