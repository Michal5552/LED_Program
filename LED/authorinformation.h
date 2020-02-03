#ifndef AUTHORINFORMATION_H
#define AUTHORINFORMATION_H

#include <QDialog>

namespace Ui {
class AuthorInformation;
}

class AuthorInformation : public QDialog
{
    Q_OBJECT

public:
    explicit AuthorInformation(QWidget *parent = nullptr);
    ~AuthorInformation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AuthorInformation *ui;
};

#endif // AUTHORINFORMATION_H
