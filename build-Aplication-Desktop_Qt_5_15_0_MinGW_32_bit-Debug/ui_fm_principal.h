/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QLabel *label;
    QFrame *line;
    QLabel *label_3;
    QFrame *line_2;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QTimeEdit *timeEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;

    void setupUi(QDialog *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName(QString::fromUtf8("fm_principal"));
        fm_principal->resize(472, 311);
        label = new QLabel(fm_principal);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 0, 311, 71));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/SGP1.png")));
        label->setScaledContents(true);
        line = new QFrame(fm_principal);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-10, 70, 501, 20));
        QFont font;
        font.setPointSize(10);
        line->setFont(font);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(fm_principal);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 80, 481, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Black"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(fm_principal);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(-20, 100, 511, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(fm_principal);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 270, 93, 28));
        layoutWidget = new QWidget(fm_principal);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 120, 440, 94));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        label_4->setFont(font2);

        horizontalLayout->addWidget(label_4);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        horizontalLayout_2->addWidget(label_5);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        horizontalLayout_3->addWidget(label_6);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        horizontalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);
        label_8->setScaledContents(false);

        horizontalLayout_4->addWidget(label_8);

        timeEdit = new QTimeEdit(layoutWidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setEnabled(true);
        timeEdit->setWrapping(false);
        timeEdit->setFrame(true);
        timeEdit->setAlignment(Qt::AlignCenter);
        timeEdit->setReadOnly(false);
        timeEdit->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        timeEdit->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        timeEdit->setProperty("showGroupSeparator", QVariant(false));
        timeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        timeEdit->setCalendarPopup(false);
        timeEdit->setTimeSpec(Qt::TimeZone);
        timeEdit->setTime(QTime(7, 30, 18));

        horizontalLayout_4->addWidget(timeEdit);

        horizontalSpacer = new QSpacerItem(165, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        horizontalLayout_5->addWidget(label_7);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setDate(QDate(2020, 8, 14));

        horizontalLayout_5->addWidget(dateEdit);


        horizontalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_7);

        layoutWidget1 = new QWidget(fm_principal);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(130, 230, 206, 27));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(layoutWidget1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setFont(font2);

        horizontalLayout_8->addWidget(checkBox);

        checkBox_2 = new QCheckBox(layoutWidget1);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setFont(font);

        horizontalLayout_8->addWidget(checkBox_2);


        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QDialog *fm_principal)
    {
        fm_principal->setWindowTitle(QCoreApplication::translate("fm_principal", "Dialog", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("fm_principal", "Formulario de retirada e devolu\303\247\303\243o de chaves", nullptr));
        pushButton->setText(QCoreApplication::translate("fm_principal", "Confirmar", nullptr));
        label_4->setText(QCoreApplication::translate("fm_principal", "Nome:", nullptr));
        label_5->setText(QCoreApplication::translate("fm_principal", "Registro:", nullptr));
        label_6->setText(QCoreApplication::translate("fm_principal", "Chave N\302\272:", nullptr));
        label_8->setText(QCoreApplication::translate("fm_principal", "Hora:", nullptr));
        label_7->setText(QCoreApplication::translate("fm_principal", "Data:", nullptr));
        checkBox->setText(QCoreApplication::translate("fm_principal", "Retirada ", nullptr));
        checkBox_2->setText(QCoreApplication::translate("fm_principal", "Devolu\303\247\303\243o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
