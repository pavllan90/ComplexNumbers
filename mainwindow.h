#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <stack.h>
#include <QRegExp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString substrs;
    
private:
    Ui::MainWindow *ui;
    Stack stack;
private slots:
    void count();
    void enter0();
    void enter1();
    void enter2();
    void enter3();
    void enter4();
    void enter5();
    void enter6();
    void enter7();
    void enter8();
    void enter9();
    void enterpl();
    void entermi();
    void entermu();
    void enterdi();
    void enter_left();
    void enter_right();
    void enter_i();
    void enter_j();
    void enter_k();
    void show_s();
    void size();
    void is_empty();
    void save();
    void load();
    void clean();
};

#endif // MAINWINDOW_H
