#ifndef FRONTPAGE_H
#define FRONTPAGE_H

#include <QDialog>

namespace Ui {
class frontpage;
}

class frontpage : public QDialog
{
    Q_OBJECT

public:
    explicit frontpage(QWidget *parent = nullptr);
    ~frontpage();

private:
    Ui::frontpage *ui;
};

#endif // FRONTPAGE_H
