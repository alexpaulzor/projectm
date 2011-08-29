/********************************************************************************
** Form generated from reading UI file 'PulseDeviceChooserDialog.ui'
**
** Created: Sat Aug 27 17:11:13 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PULSEDEVICECHOOSERDIALOG_H
#define UI_PULSEDEVICECHOOSERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pulseDeviceChooserDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QListView *devicesListView;
    QCheckBox *tryFirstPlayBackMonitorCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pulseDeviceChooserDialog)
    {
        if (pulseDeviceChooserDialog->objectName().isEmpty())
            pulseDeviceChooserDialog->setObjectName(QString::fromUtf8("pulseDeviceChooserDialog"));
        pulseDeviceChooserDialog->resize(380, 271);
        layoutWidget = new QWidget(pulseDeviceChooserDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 361, 251));
        hboxLayout = new QHBoxLayout(layoutWidget);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        devicesListView = new QListView(layoutWidget);
        devicesListView->setObjectName(QString::fromUtf8("devicesListView"));
        devicesListView->setAutoFillBackground(true);
        devicesListView->setViewMode(QListView::ListMode);

        vboxLayout->addWidget(devicesListView);

        tryFirstPlayBackMonitorCheckBox = new QCheckBox(layoutWidget);
        tryFirstPlayBackMonitorCheckBox->setObjectName(QString::fromUtf8("tryFirstPlayBackMonitorCheckBox"));

        vboxLayout->addWidget(tryFirstPlayBackMonitorCheckBox);


        hboxLayout->addLayout(vboxLayout);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        retranslateUi(pulseDeviceChooserDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), pulseDeviceChooserDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), pulseDeviceChooserDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(pulseDeviceChooserDialog);
    } // setupUi

    void retranslateUi(QDialog *pulseDeviceChooserDialog)
    {
        pulseDeviceChooserDialog->setWindowTitle(QApplication::translate("pulseDeviceChooserDialog", "Pulse Audio Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("pulseDeviceChooserDialog", "Select a source device below.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        devicesListView->setToolTip(QApplication::translate("pulseDeviceChooserDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Double click a source device to activate it.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        tryFirstPlayBackMonitorCheckBox->setToolTip(QApplication::translate("pulseDeviceChooserDialog", "This will try to find any available playback monitor on startup as the pulseaudio source device. This is a quick and dirty way to generally get projectM sound data without specifying a device explicitly.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tryFirstPlayBackMonitorCheckBox->setText(QApplication::translate("pulseDeviceChooserDialog", "Try first available playback monitor", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pulseDeviceChooserDialog: public Ui_pulseDeviceChooserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PULSEDEVICECHOOSERDIALOG_H
