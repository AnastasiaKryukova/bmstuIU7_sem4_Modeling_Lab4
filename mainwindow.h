#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "evendistribution.h"
#include "gaussdistribution.h"
#include "eventStruct.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void getDataFromScreen(int&a, int&b, double&aa, double&bb, double&SKO, double&math_exp, int&count_tasks, int&repeat_probability, double&step_t);
    int stepModel(EvenDistribution& generator, GaussDistribution& processor, int countTasks, int repeatProbability, double step);
    int randf();
    int eventModel(EvenDistribution& generator, GaussDistribution& processor, int countTasks, int repeatProbability);
    void addEvent(QVector<eventStruct*>& events, eventStruct event);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
