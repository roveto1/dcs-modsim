/********************************************************************************
** Form generated from reading UI file 'dialogsimulationconfigure.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSIMULATIONCONFIGURE_H
#define UI_DIALOGSIMULATIONCONFIGURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogSimulationConfigure
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox_2;
    QComboBox *comboBox_2;
    QLabel *label_6;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogSimulationConfigure)
    {
        if (DialogSimulationConfigure->objectName().isEmpty())
            DialogSimulationConfigure->setObjectName("DialogSimulationConfigure");
        DialogSimulationConfigure->setWindowModality(Qt::WindowModal);
        DialogSimulationConfigure->resize(534, 416);
        verticalLayout = new QVBoxLayout(DialogSimulationConfigure);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, -1, -1, 2);
        label = new QLabel(DialogSimulationConfigure);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(DialogSimulationConfigure);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(DialogSimulationConfigure);
        label_3->setObjectName("label_3");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(DialogSimulationConfigure);
        label_4->setObjectName("label_4");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(DialogSimulationConfigure);
        label_5->setObjectName("label_5");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        plainTextEdit = new QPlainTextEdit(DialogSimulationConfigure);
        plainTextEdit->setObjectName("plainTextEdit");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy);
        plainTextEdit->setMaximumSize(QSize(16777215, 32));

        formLayout->setWidget(0, QFormLayout::FieldRole, plainTextEdit);

        plainTextEdit_2 = new QPlainTextEdit(DialogSimulationConfigure);
        plainTextEdit_2->setObjectName("plainTextEdit_2");
        sizePolicy.setHeightForWidth(plainTextEdit_2->sizePolicy().hasHeightForWidth());
        plainTextEdit_2->setSizePolicy(sizePolicy);

        formLayout->setWidget(5, QFormLayout::FieldRole, plainTextEdit_2);

        spinBox = new QSpinBox(DialogSimulationConfigure);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);
        spinBox->setMaximum(5000);
        spinBox->setValue(1);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        spinBox_3 = new QSpinBox(DialogSimulationConfigure);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setMinimum(1);
        spinBox_3->setMaximum(100000);

        horizontalLayout->addWidget(spinBox_3);

        comboBox = new QComboBox(DialogSimulationConfigure);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        spinBox_2 = new QSpinBox(DialogSimulationConfigure);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMaximum(100000);

        horizontalLayout_2->addWidget(spinBox_2);

        comboBox_2 = new QComboBox(DialogSimulationConfigure);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_2->addWidget(comboBox_2);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

        label_6 = new QLabel(DialogSimulationConfigure);
        label_6->setObjectName("label_6");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        comboBox_3 = new QComboBox(DialogSimulationConfigure);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");

        formLayout->setWidget(6, QFormLayout::FieldRole, comboBox_3);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        checkBox = new QCheckBox(DialogSimulationConfigure);
        checkBox->setObjectName("checkBox");

        horizontalLayout_4->addWidget(checkBox);

        checkBox_4 = new QCheckBox(DialogSimulationConfigure);
        checkBox_4->setObjectName("checkBox_4");

        horizontalLayout_4->addWidget(checkBox_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBox_3 = new QCheckBox(DialogSimulationConfigure);
        checkBox_3->setObjectName("checkBox_3");

        horizontalLayout_3->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(DialogSimulationConfigure);
        checkBox_2->setObjectName("checkBox_2");

        horizontalLayout_3->addWidget(checkBox_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 10, -1, 0);

        verticalLayout->addLayout(horizontalLayout_5);

        buttonBox = new QDialogButtonBox(DialogSimulationConfigure);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(plainTextEdit);
        label_2->setBuddy(spinBox);
        label_3->setBuddy(spinBox_3);
        label_4->setBuddy(spinBox_2);
        label_5->setBuddy(plainTextEdit_2);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(plainTextEdit, spinBox);
        QWidget::setTabOrder(spinBox, spinBox_3);
        QWidget::setTabOrder(spinBox_3, comboBox);
        QWidget::setTabOrder(comboBox, spinBox_2);
        QWidget::setTabOrder(spinBox_2, comboBox_2);
        QWidget::setTabOrder(comboBox_2, plainTextEdit_2);
        QWidget::setTabOrder(plainTextEdit_2, checkBox);
        QWidget::setTabOrder(checkBox, checkBox_4);
        QWidget::setTabOrder(checkBox_4, checkBox_3);
        QWidget::setTabOrder(checkBox_3, checkBox_2);

        retranslateUi(DialogSimulationConfigure);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogSimulationConfigure, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogSimulationConfigure, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogSimulationConfigure);
    } // setupUi

    void retranslateUi(QDialog *DialogSimulationConfigure)
    {
        DialogSimulationConfigure->setWindowTitle(QCoreApplication::translate("DialogSimulationConfigure", "Configure Simulation", nullptr));
        label->setText(QCoreApplication::translate("DialogSimulationConfigure", "Experiment Name:", nullptr));
        label_2->setText(QCoreApplication::translate("DialogSimulationConfigure", "Number of Replications:", nullptr));
        label_3->setText(QCoreApplication::translate("DialogSimulationConfigure", "Replication Length", nullptr));
        label_4->setText(QCoreApplication::translate("DialogSimulationConfigure", "Warmup Period:", nullptr));
        label_5->setText(QCoreApplication::translate("DialogSimulationConfigure", "Terminating Condition:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DialogSimulationConfigure", "picosecond", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DialogSimulationConfigure", "nanosecond", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DialogSimulationConfigure", "microsecond", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("DialogSimulationConfigure", "milisecond", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("DialogSimulationConfigure", "second", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("DialogSimulationConfigure", "minute", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("DialogSimulationConfigure", "hour", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("DialogSimulationConfigure", "day", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("DialogSimulationConfigure", "week", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("DialogSimulationConfigure", "picosecond", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("DialogSimulationConfigure", "nanosecond", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("DialogSimulationConfigure", "microsecond", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("DialogSimulationConfigure", "milisecond", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("DialogSimulationConfigure", "second", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("DialogSimulationConfigure", "minute", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("DialogSimulationConfigure", "hour", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("DialogSimulationConfigure", "day", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("DialogSimulationConfigure", "week", nullptr));

        label_6->setText(QCoreApplication::translate("DialogSimulationConfigure", "Trace Level:", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("DialogSimulationConfigure", "L0", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("DialogSimulationConfigure", "L1", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("DialogSimulationConfigure", "L2", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("DialogSimulationConfigure", "L3", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("DialogSimulationConfigure", "L4", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("DialogSimulationConfigure", "L5", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("DialogSimulationConfigure", "L6", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("DialogSimulationConfigure", "L7", nullptr));

        checkBox->setText(QCoreApplication::translate("DialogSimulationConfigure", "Initialize system", nullptr));
        checkBox_4->setText(QCoreApplication::translate("DialogSimulationConfigure", "Initialize statistics between replications", nullptr));
        checkBox_3->setText(QCoreApplication::translate("DialogSimulationConfigure", "Show reports after replication", nullptr));
        checkBox_2->setText(QCoreApplication::translate("DialogSimulationConfigure", "Show reports after simulation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogSimulationConfigure: public Ui_DialogSimulationConfigure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSIMULATIONCONFIGURE_H
