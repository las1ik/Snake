#include "menu.h"
#include "snake.h"
#include "ui_menu.h"
#include <QPainter>
#include <QTime>
#include <QPushButton>

menu::menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);

    Snake = new snake();
       // подключаем к слоту запуска главного окна по кнопке во втором окне
       connect(Snake, &::snake::isWindow, this, &menu::show);
}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_clicked()
{
    Snake->show();  // Показываем второе окно
       this->close();
}


void menu::on_pushButton_2_clicked()
{
    this->close();
}

