#include "gittest.h"
#include "ui_gittest.h"

gitTest::gitTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gitTest)
{
    ui->setupUi(this);
    this->setWindowTitle("helloWorld");

}

gitTest::~gitTest()
{
    delete ui;
}
