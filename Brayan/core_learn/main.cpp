#include "mainwindow.h"

#include <QApplication>
#include "student.h"
int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    //return a.exec();

    auto karolPtr = std::make_unique<Student>("karol");
    auto danglingPtr = new Student{"dangling"};
    auto sharedStudent = std::make_shared<Student>("shared outside");



    return 0;
}
