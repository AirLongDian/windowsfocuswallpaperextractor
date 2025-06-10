#include <QApplication>
#include "src/wwe.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    WWE w;
    w.show();
    return QApplication::exec();
}
