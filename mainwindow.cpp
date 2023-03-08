#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "editor.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->clear();
    on_toolButton_clicked();                //создание новой вкладки после нажатия на кнопку
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_toolButton_clicked()
{
    Editor * editor = new Editor(this);
    QString name = "Файл №" + QString::number(ui->tabWidget->count() + 1);
    ui->tabWidget->addTab(editor, name);
    int index = ui->tabWidget->count()-1;
    ui->tabWidget->setCurrentIndex(index);

}


void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    if(ui->tabWidget->count()>1)
    {
        ui->tabWidget->removeTab(index);             //закрытие всех вкладок, кроме последней
    }

}


void MainWindow::on_action_triggered()
{
    on_toolButton_clicked();                //приданию кнопкам из "Файл" функционала
}


void MainWindow::on_action_4_triggered()
{
    this->close();              //действие "Выход" в "Файл"
}

