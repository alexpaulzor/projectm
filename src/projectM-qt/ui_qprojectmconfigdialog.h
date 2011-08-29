/********************************************************************************
** Form generated from reading UI file 'qprojectmconfigdialog.ui'
**
** Created: Sat Aug 27 17:10:57 2011
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPROJECTMCONFIGDIALOG_H
#define UI_QPROJECTMCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QProjectMConfigDialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *startupPlaylistDirectoryLineEdit;
    QToolButton *startupPlaylistDirectoryToolButton;
    QLabel *label_14;
    QLineEdit *startupPlaylistFileLineEdit;
    QToolButton *startupPlaylistFileToolButton;
    QLabel *label;
    QLineEdit *menuFontPathLineEdit;
    QToolButton *menuFontPathToolButton;
    QLabel *label_9;
    QLineEdit *titleFontPathLineEdit;
    QToolButton *titleFontPathToolButton;
    QLabel *label_3;
    QSpinBox *presetDurationSpinBox;
    QLabel *label_4;
    QSpinBox *smoothPresetDurationSpinBox;
    QLabel *label_12;
    QDoubleSpinBox *beatSensitivitySpinBox;
    QLabel *label_6;
    QSpinBox *maxFPSSpinBox;
    QLabel *label_7;
    QComboBox *textureSizeComboBox;
    QLabel *label_13;
    QDoubleSpinBox *easterEggParameterSpinBox;
    QVBoxLayout *vboxLayout;
    QCheckBox *useAspectCorrectionCheckBox;
    QCheckBox *menuOnStartupCheckBox;
    QCheckBox *fullscreenOnStartupCheckBox;
    QCheckBox *shuffleOnStartupCheckBox;
    QCheckBox *softCutRatingsEnabledCheckBox;
    QLabel *label_8;
    QSpinBox *meshSizeWidthSpinBox;
    QLabel *label_10;
    QSpinBox *meshSizeHeightSpinBox;
    QLabel *label_5;
    QSpinBox *windowWidthSpinBox;
    QLabel *label_11;
    QSpinBox *windowHeightSpinBox;
    QDialogButtonBox *buttonBox;
    QLabel *mouseHideLabel;
    QSpinBox *mouseHideTimeoutSpinBox;

    void setupUi(QDialog *QProjectMConfigDialog)
    {
        if (QProjectMConfigDialog->objectName().isEmpty())
            QProjectMConfigDialog->setObjectName(QString::fromUtf8("QProjectMConfigDialog"));
        QProjectMConfigDialog->resize(683, 409);
        layoutWidget = new QWidget(QProjectMConfigDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(8, 8, 662, 385));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        startupPlaylistDirectoryLineEdit = new QLineEdit(layoutWidget);
        startupPlaylistDirectoryLineEdit->setObjectName(QString::fromUtf8("startupPlaylistDirectoryLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startupPlaylistDirectoryLineEdit->sizePolicy().hasHeightForWidth());
        startupPlaylistDirectoryLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(startupPlaylistDirectoryLineEdit, 0, 1, 1, 6);

        startupPlaylistDirectoryToolButton = new QToolButton(layoutWidget);
        startupPlaylistDirectoryToolButton->setObjectName(QString::fromUtf8("startupPlaylistDirectoryToolButton"));

        gridLayout->addWidget(startupPlaylistDirectoryToolButton, 0, 7, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);
        label_14->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(label_14, 1, 0, 1, 1);

        startupPlaylistFileLineEdit = new QLineEdit(layoutWidget);
        startupPlaylistFileLineEdit->setObjectName(QString::fromUtf8("startupPlaylistFileLineEdit"));
        sizePolicy1.setHeightForWidth(startupPlaylistFileLineEdit->sizePolicy().hasHeightForWidth());
        startupPlaylistFileLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(startupPlaylistFileLineEdit, 1, 1, 1, 6);

        startupPlaylistFileToolButton = new QToolButton(layoutWidget);
        startupPlaylistFileToolButton->setObjectName(QString::fromUtf8("startupPlaylistFileToolButton"));

        gridLayout->addWidget(startupPlaylistFileToolButton, 1, 7, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        menuFontPathLineEdit = new QLineEdit(layoutWidget);
        menuFontPathLineEdit->setObjectName(QString::fromUtf8("menuFontPathLineEdit"));
        sizePolicy1.setHeightForWidth(menuFontPathLineEdit->sizePolicy().hasHeightForWidth());
        menuFontPathLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(menuFontPathLineEdit, 2, 1, 1, 6);

        menuFontPathToolButton = new QToolButton(layoutWidget);
        menuFontPathToolButton->setObjectName(QString::fromUtf8("menuFontPathToolButton"));

        gridLayout->addWidget(menuFontPathToolButton, 2, 7, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        titleFontPathLineEdit = new QLineEdit(layoutWidget);
        titleFontPathLineEdit->setObjectName(QString::fromUtf8("titleFontPathLineEdit"));
        sizePolicy1.setHeightForWidth(titleFontPathLineEdit->sizePolicy().hasHeightForWidth());
        titleFontPathLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(titleFontPathLineEdit, 3, 1, 1, 6);

        titleFontPathToolButton = new QToolButton(layoutWidget);
        titleFontPathToolButton->setObjectName(QString::fromUtf8("titleFontPathToolButton"));

        gridLayout->addWidget(titleFontPathToolButton, 3, 7, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 2);

        presetDurationSpinBox = new QSpinBox(layoutWidget);
        presetDurationSpinBox->setObjectName(QString::fromUtf8("presetDurationSpinBox"));
        presetDurationSpinBox->setMinimum(1);
        presetDurationSpinBox->setMaximum(100000);

        gridLayout->addWidget(presetDurationSpinBox, 4, 2, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 3, 1, 2);

        smoothPresetDurationSpinBox = new QSpinBox(layoutWidget);
        smoothPresetDurationSpinBox->setObjectName(QString::fromUtf8("smoothPresetDurationSpinBox"));
        smoothPresetDurationSpinBox->setMinimum(1);
        smoothPresetDurationSpinBox->setMaximum(1000000);

        gridLayout->addWidget(smoothPresetDurationSpinBox, 4, 5, 1, 3);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_12, 5, 0, 1, 2);

        beatSensitivitySpinBox = new QDoubleSpinBox(layoutWidget);
        beatSensitivitySpinBox->setObjectName(QString::fromUtf8("beatSensitivitySpinBox"));
        beatSensitivitySpinBox->setMinimum(0);
        beatSensitivitySpinBox->setMaximum(100);

        gridLayout->addWidget(beatSensitivitySpinBox, 5, 2, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 5, 3, 1, 2);

        maxFPSSpinBox = new QSpinBox(layoutWidget);
        maxFPSSpinBox->setObjectName(QString::fromUtf8("maxFPSSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(maxFPSSpinBox->sizePolicy().hasHeightForWidth());
        maxFPSSpinBox->setSizePolicy(sizePolicy2);
        maxFPSSpinBox->setMinimum(0);

        gridLayout->addWidget(maxFPSSpinBox, 5, 5, 1, 3);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_7, 6, 0, 1, 2);

        textureSizeComboBox = new QComboBox(layoutWidget);
        textureSizeComboBox->setObjectName(QString::fromUtf8("textureSizeComboBox"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textureSizeComboBox->sizePolicy().hasHeightForWidth());
        textureSizeComboBox->setSizePolicy(sizePolicy3);
        textureSizeComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout->addWidget(textureSizeComboBox, 6, 2, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_13, 6, 3, 1, 2);

        easterEggParameterSpinBox = new QDoubleSpinBox(layoutWidget);
        easterEggParameterSpinBox->setObjectName(QString::fromUtf8("easterEggParameterSpinBox"));
        easterEggParameterSpinBox->setMaximum(20);
        easterEggParameterSpinBox->setSingleStep(0.01);

        gridLayout->addWidget(easterEggParameterSpinBox, 6, 5, 1, 3);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        useAspectCorrectionCheckBox = new QCheckBox(layoutWidget);
        useAspectCorrectionCheckBox->setObjectName(QString::fromUtf8("useAspectCorrectionCheckBox"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(useAspectCorrectionCheckBox->sizePolicy().hasHeightForWidth());
        useAspectCorrectionCheckBox->setSizePolicy(sizePolicy4);

        vboxLayout->addWidget(useAspectCorrectionCheckBox);

        menuOnStartupCheckBox = new QCheckBox(layoutWidget);
        menuOnStartupCheckBox->setObjectName(QString::fromUtf8("menuOnStartupCheckBox"));
        sizePolicy4.setHeightForWidth(menuOnStartupCheckBox->sizePolicy().hasHeightForWidth());
        menuOnStartupCheckBox->setSizePolicy(sizePolicy4);

        vboxLayout->addWidget(menuOnStartupCheckBox);

        fullscreenOnStartupCheckBox = new QCheckBox(layoutWidget);
        fullscreenOnStartupCheckBox->setObjectName(QString::fromUtf8("fullscreenOnStartupCheckBox"));
        sizePolicy4.setHeightForWidth(fullscreenOnStartupCheckBox->sizePolicy().hasHeightForWidth());
        fullscreenOnStartupCheckBox->setSizePolicy(sizePolicy4);

        vboxLayout->addWidget(fullscreenOnStartupCheckBox);

        shuffleOnStartupCheckBox = new QCheckBox(layoutWidget);
        shuffleOnStartupCheckBox->setObjectName(QString::fromUtf8("shuffleOnStartupCheckBox"));
        sizePolicy4.setHeightForWidth(shuffleOnStartupCheckBox->sizePolicy().hasHeightForWidth());
        shuffleOnStartupCheckBox->setSizePolicy(sizePolicy4);

        vboxLayout->addWidget(shuffleOnStartupCheckBox);

        softCutRatingsEnabledCheckBox = new QCheckBox(layoutWidget);
        softCutRatingsEnabledCheckBox->setObjectName(QString::fromUtf8("softCutRatingsEnabledCheckBox"));
        sizePolicy4.setHeightForWidth(softCutRatingsEnabledCheckBox->sizePolicy().hasHeightForWidth());
        softCutRatingsEnabledCheckBox->setSizePolicy(sizePolicy4);

        vboxLayout->addWidget(softCutRatingsEnabledCheckBox);


        gridLayout->addLayout(vboxLayout, 7, 0, 5, 3);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_8, 7, 3, 1, 1);

        meshSizeWidthSpinBox = new QSpinBox(layoutWidget);
        meshSizeWidthSpinBox->setObjectName(QString::fromUtf8("meshSizeWidthSpinBox"));
        meshSizeWidthSpinBox->setMinimum(1);
        meshSizeWidthSpinBox->setMaximum(1000);
        meshSizeWidthSpinBox->setValue(1);

        gridLayout->addWidget(meshSizeWidthSpinBox, 7, 4, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_10, 7, 5, 1, 1);

        meshSizeHeightSpinBox = new QSpinBox(layoutWidget);
        meshSizeHeightSpinBox->setObjectName(QString::fromUtf8("meshSizeHeightSpinBox"));
        meshSizeHeightSpinBox->setMinimum(1);
        meshSizeHeightSpinBox->setMaximum(1000);

        gridLayout->addWidget(meshSizeHeightSpinBox, 7, 6, 1, 2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_5, 8, 3, 1, 1);

        windowWidthSpinBox = new QSpinBox(layoutWidget);
        windowWidthSpinBox->setObjectName(QString::fromUtf8("windowWidthSpinBox"));
        windowWidthSpinBox->setMinimum(1);
        windowWidthSpinBox->setMaximum(10000);

        gridLayout->addWidget(windowWidthSpinBox, 8, 4, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_11, 8, 5, 1, 1);

        windowHeightSpinBox = new QSpinBox(layoutWidget);
        windowHeightSpinBox->setObjectName(QString::fromUtf8("windowHeightSpinBox"));
        windowHeightSpinBox->setMinimum(1);
        windowHeightSpinBox->setMaximum(10000);

        gridLayout->addWidget(windowHeightSpinBox, 8, 6, 1, 2);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setLayoutDirection(Qt::RightToLeft);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        gridLayout->addWidget(buttonBox, 11, 3, 1, 5);

        mouseHideLabel = new QLabel(layoutWidget);
        mouseHideLabel->setObjectName(QString::fromUtf8("mouseHideLabel"));

        gridLayout->addWidget(mouseHideLabel, 9, 3, 1, 2);

        mouseHideTimeoutSpinBox = new QSpinBox(layoutWidget);
        mouseHideTimeoutSpinBox->setObjectName(QString::fromUtf8("mouseHideTimeoutSpinBox"));
        mouseHideTimeoutSpinBox->setMinimum(0);
        mouseHideTimeoutSpinBox->setMaximum(30000);

        gridLayout->addWidget(mouseHideTimeoutSpinBox, 9, 5, 1, 3);


        retranslateUi(QProjectMConfigDialog);

        QMetaObject::connectSlotsByName(QProjectMConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *QProjectMConfigDialog)
    {
        QProjectMConfigDialog->setWindowTitle(QApplication::translate("QProjectMConfigDialog", "projectM Settings", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QProjectMConfigDialog", "Playlist Directory", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        startupPlaylistDirectoryLineEdit->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\">This sets the default preset playlist directory when projectM starts up. Every valid preset file in the specified directory will be loaded into the playlist upon initialization. <span style=\" font-weight:600;\">NOTE:</span> This option is overriden by a non empty value of the <span style=\" font-style:italic;\">Playlist File </span>option.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        startupPlaylistDirectoryToolButton->setText(QApplication::translate("QProjectMConfigDialog", "...", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("QProjectMConfigDialog", "Playlist File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        startupPlaylistFileLineEdit->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\">This sets the default preset playlist file when projectM starts up. The file must be a valid preset playlist (of type *.ppl). If specified, this overrides the <span style=\" font-style:italic;\">Playlist Directory</span> value on startup. </p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        startupPlaylistFileToolButton->setText(QApplication::translate("QProjectMConfigDialog", "...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QProjectMConfigDialog", "Menu Font Path", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        menuFontPathLineEdit->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This changes the font projectM will use for its opengl rendered menus</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        menuFontPathToolButton->setText(QApplication::translate("QProjectMConfigDialog", "...", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QProjectMConfigDialog", "Title Font Path", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        titleFontPathLineEdit->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Changes the font projectM will use for rendering the song title</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        titleFontPathToolButton->setText(QApplication::translate("QProjectMConfigDialog", "...", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QProjectMConfigDialog", "Preset Duration (s)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        presetDurationSpinBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sets how long a preset should be played in seconds before projectM automatically switches to another in the playlist</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("QProjectMConfigDialog", "Smooth Preset Duration (s)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        smoothPresetDurationSpinBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sets how long a transition occurs in seconds when smooth preset switching</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("QProjectMConfigDialog", "Beat Sensitivity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        beatSensitivitySpinBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sets the intensity threshold for the preset hard cuts</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("QProjectMConfigDialog", "Maximum FPS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        maxFPSSpinBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This parameter, if nonzero, limits the number of frames per second projectM will attempt to render to screen. 35 is a reasonable limit.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("QProjectMConfigDialog", "Texture Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textureSizeComboBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sets the size of the texture. Higher is better, but slower.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("QProjectMConfigDialog", "Easter Egg Parameter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        easterEggParameterSpinBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A mystery parameter!</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        useAspectCorrectionCheckBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This makes a square look like a square, and a circle look like a circle in cases where they may not otherwise.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        useAspectCorrectionCheckBox->setText(QApplication::translate("QProjectMConfigDialog", "Use Aspect Correction", 0, QApplication::UnicodeUTF8));
        menuOnStartupCheckBox->setText(QApplication::translate("QProjectMConfigDialog", "Show Menu on startup", 0, QApplication::UnicodeUTF8));
        fullscreenOnStartupCheckBox->setText(QApplication::translate("QProjectMConfigDialog", "Fullscreen on startup", 0, QApplication::UnicodeUTF8));
        shuffleOnStartupCheckBox->setText(QApplication::translate("QProjectMConfigDialog", "Shuffle on startup", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        softCutRatingsEnabledCheckBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "Enable to turn on a different rating system for soft cuts and hard cuts.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        softCutRatingsEnabledCheckBox->setText(QApplication::translate("QProjectMConfigDialog", "Soft Cut Ratings", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QProjectMConfigDialog", "Mesh Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        meshSizeWidthSpinBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\">This modifies the horizontal component of the mesh. Higher is better but slower</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("QProjectMConfigDialog", "by", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        meshSizeHeightSpinBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\">This modifies the vertical component of the mesh. Higher is better but slower</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("QProjectMConfigDialog", "Window Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        windowWidthSpinBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This modifies the horizontal component of the startup window size </p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        windowWidthSpinBox->setWhatsThis(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This modifies the horizontal component of the startup window size </p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_11->setText(QApplication::translate("QProjectMConfigDialog", "by", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        windowHeightSpinBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\">This modifies the vertical component of the startup window size</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "Click save to write the settings to your projectM config file. The reset button will bring your settings back to whatever was stored on disk. ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mouseHideLabel->setToolTip(QApplication::translate("QProjectMConfigDialog", "Sets how long of an idle interval to wait before hiding the mouse. A value of zero disables this feature.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mouseHideLabel->setText(QApplication::translate("QProjectMConfigDialog", "Mouse Hide Timeout (s)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mouseHideTimeoutSpinBox->setToolTip(QApplication::translate("QProjectMConfigDialog", "Sets how long of an idle interval to wait before hiding the mouse. A value of zero disables this feature.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mouseHideTimeoutSpinBox->setPrefix(QString());
    } // retranslateUi

};

namespace Ui {
    class QProjectMConfigDialog: public Ui_QProjectMConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPROJECTMCONFIGDIALOG_H
