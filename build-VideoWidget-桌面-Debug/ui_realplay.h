/********************************************************************************
** Form generated from reading UI file 'realplay.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REALPLAY_H
#define UI_REALPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RealPlayClass
{
public:
    QFrame *m_pframePlay;

    void setupUi(QWidget *RealPlayClass)
    {
        if (RealPlayClass->objectName().isEmpty())
            RealPlayClass->setObjectName(QString::fromUtf8("RealPlayClass"));
        RealPlayClass->resize(869, 655);
        RealPlayClass->setMinimumSize(QSize(869, 655));
        RealPlayClass->setMaximumSize(QSize(869, 655));
        m_pframePlay = new QFrame(RealPlayClass);
        m_pframePlay->setObjectName(QString::fromUtf8("m_pframePlay"));
        m_pframePlay->setGeometry(QRect(10, 10, 610, 610));
        m_pframePlay->setFrameShape(QFrame::StyledPanel);
        m_pframePlay->setFrameShadow(QFrame::Raised);

        retranslateUi(RealPlayClass);

        QMetaObject::connectSlotsByName(RealPlayClass);
    } // setupUi

    void retranslateUi(QWidget *RealPlayClass)
    {
        RealPlayClass->setWindowTitle(QApplication::translate("RealPlayClass", "RealPlay", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RealPlayClass: public Ui_RealPlayClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REALPLAY_H
