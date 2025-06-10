//
// Created by 20392 on 2025/6/10.
//

#ifndef WINFOCUS_WALLPAPAER_EXTRACTOR_WWE_H
#define WINFOCUS_WALLPAPAER_EXTRACTOR_WWE_H

#include <QWidget>
#include <QString>
#include <QFileDialog>
#include <QDir>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class WWE; }
QT_END_NAMESPACE

class WWE : public QWidget {
Q_OBJECT

public:
    explicit WWE(QWidget *parent = nullptr);

    ~WWE() override;

private:
    Ui::WWE *ui;

public slots:
    void browser();
    void extract();

};


#endif //WINFOCUS_WALLPAPAER_EXTRACTOR_WWE_H
