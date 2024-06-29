#include "mainwindow.h"

#include <QApplication>
#include<QPalette>
#include <QColor>

class mainwindow : public QMainWindow {
public:
    mainwindow(){
        setWindowTitle("Welcome to Tourist Application");
        setGeometry(100,100,800,600);
        QPalette palette;
        palette.setColor(QPalette::Window, QColor("black"));
        setPalette(palette);
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
