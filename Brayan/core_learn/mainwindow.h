#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void createLambda();

    void smartPointers();

private slots:
    void on_horizontalScrollBar_sliderMoved(int position);

private:
    Ui::MainWindow *ui;


    std::unique_ptr<QObject> labelKarol;
    std::unique_ptr<QObject> scrollbarKarol;
};
#endif // MAINWINDOW_H
