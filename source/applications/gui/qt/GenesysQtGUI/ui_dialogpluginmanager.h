/********************************************************************************
** Form generated from reading UI file 'dialogpluginmanager.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPLUGINMANAGER_H
#define UI_DIALOGPLUGINMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogPluginManager
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogPluginManager)
    {
        if (DialogPluginManager->objectName().isEmpty())
            DialogPluginManager->setObjectName("DialogPluginManager");
        DialogPluginManager->setWindowModality(Qt::WindowModal);
        DialogPluginManager->resize(400, 300);
        verticalLayout = new QVBoxLayout(DialogPluginManager);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(DialogPluginManager);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        plainTextEdit = new QPlainTextEdit(DialogPluginManager);
        plainTextEdit->setObjectName("plainTextEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy1);
        plainTextEdit->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(plainTextEdit);

        pushButton = new QPushButton(DialogPluginManager);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        checkBox = new QCheckBox(DialogPluginManager);
        checkBox->setObjectName("checkBox");

        verticalLayout_2->addWidget(checkBox);


        verticalLayout->addLayout(verticalLayout_2);

        buttonBox = new QDialogButtonBox(DialogPluginManager);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogPluginManager);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogPluginManager, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogPluginManager, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogPluginManager);
    } // setupUi

    void retranslateUi(QDialog *DialogPluginManager)
    {
        DialogPluginManager->setWindowTitle(QCoreApplication::translate("DialogPluginManager", "Plugin Manager", nullptr));
        label->setText(QCoreApplication::translate("DialogPluginManager", "File containing list of plugins to auto load:", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogPluginManager", "...", nullptr));
        checkBox->setText(QCoreApplication::translate("DialogPluginManager", "Auto load plugins at startup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPluginManager: public Ui_DialogPluginManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPLUGINMANAGER_H
