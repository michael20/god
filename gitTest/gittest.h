#ifndef GITTEST_H
#define GITTEST_H

#include <QWidget>

namespace Ui {
    class gitTest;
}

class gitTest : public QWidget
{
    Q_OBJECT

public:
    explicit gitTest(QWidget *parent = 0);
    ~gitTest();

private:
    Ui::gitTest *ui;
};

#endif // GITTEST_H
