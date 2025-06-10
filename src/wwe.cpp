//
// Created by 20392 on 2025/6/10.
//

// You may need to build the project (run Qt uic code generator) to get "ui_WWE.h" resolved

#include "wwe.h"
#include "ui_WWE.h"



WWE::WWE(QWidget *parent) :
        QWidget(parent), ui(new Ui::WWE) {
    ui->setupUi(this);
}

WWE::~WWE() {
    delete ui;
}

void WWE::browser() {
    QString defaultPath = QDir::homePath()+"/Desktop";
    QString folderPath = QFileDialog::getExistingDirectory(
            this,
            "选择文件夹",  // 对话框标题
            defaultPath,           // 默认路径
            QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
    );

    if (!folderPath.isEmpty()) {
        ui->lineEdit->setText(folderPath);
    }
}

void WWE::extract() {
    QString folderPath = ui->lineEdit->text();
    QString SourceDirPath = QDir::homePath()+"/AppData/Local/Packages/Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy/LocalState/Assets/";

    QDir dir(SourceDirPath);
    QStringList fileList = dir.entryList(QDir::Files);

    foreach (const QString &fileName, fileList) {
        QString filePath = SourceDirPath + "/" + fileName;
        QString destinationFilePath = folderPath + "/" + fileName+".png";
        QFile::copy(filePath, destinationFilePath);
    }

    QMessageBox::information(this, "info", "extract success");
}
