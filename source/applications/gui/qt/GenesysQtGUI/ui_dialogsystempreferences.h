/********************************************************************************
** Form generated from reading UI file 'dialogsystempreferences.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSYSTEMPREFERENCES_H
#define UI_DIALOGSYSTEMPREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSystemPreferences
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *tab2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogSystemPreferences)
    {
        if (DialogSystemPreferences->objectName().isEmpty())
            DialogSystemPreferences->setObjectName("DialogSystemPreferences");
        DialogSystemPreferences->resize(377, 270);
        DialogSystemPreferences->setMinimumSize(QSize(0, 270));
        verticalLayout = new QVBoxLayout(DialogSystemPreferences);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(DialogSystemPreferences);
        tabWidget->setObjectName("tabWidget");
        tab1 = new QWidget();
        tab1->setObjectName("tab1");
        verticalLayout_2 = new QVBoxLayout(tab1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        checkBox_2 = new QCheckBox(tab1);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_2->addWidget(checkBox_2);

        groupBox = new QGroupBox(tab1);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 70));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout_2->addWidget(radioButton_3);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout_2->addWidget(radioButton_2);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName("radioButton");

        horizontalLayout_2->addWidget(radioButton);


        verticalLayout_2->addWidget(groupBox);

        checkBox = new QCheckBox(tab1);
        checkBox->setObjectName("checkBox");

        verticalLayout_2->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(tab1);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(tab1);
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout);

        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName("tab2");
        tabWidget->addTab(tab2, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(DialogSystemPreferences);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogSystemPreferences);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogSystemPreferences, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogSystemPreferences, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogSystemPreferences);
    } // setupUi

    void retranslateUi(QDialog *DialogSystemPreferences)
    {
        DialogSystemPreferences->setWindowTitle(QCoreApplication::translate("DialogSystemPreferences", "System Preferences", nullptr));
        checkBox_2->setText(QCoreApplication::translate("DialogSystemPreferences", "Start windows maximixed", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DialogSystemPreferences", "Model file at startup:", nullptr));
        radioButton_3->setText(QCoreApplication::translate("DialogSystemPreferences", "None (closed)", nullptr));
        radioButton_2->setText(QCoreApplication::translate("DialogSystemPreferences", "New model", nullptr));
        radioButton->setText(QCoreApplication::translate("DialogSystemPreferences", "Open last used", nullptr));
        checkBox->setText(QCoreApplication::translate("DialogSystemPreferences", "Automatically install plugins", nullptr));
        label->setText(QCoreApplication::translate("DialogSystemPreferences", "Trace Level:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QCoreApplication::translate("DialogSystemPreferences", "General", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QCoreApplication::translate("DialogSystemPreferences", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSystemPreferences: public Ui_DialogSystemPreferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSYSTEMPREFERENCES_H
