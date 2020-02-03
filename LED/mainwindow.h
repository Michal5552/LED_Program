#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Led_Component.h"
#include <QFile>
#include <memory>
#include "helpdialog.h"
#include "authorinformation.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_comboBoxColor_currentIndexChanged(const QString &arg1); 

    void on_actionPomoc_triggered();    

    void on_actionO_Autorze_triggered();

private:
    bool first_serialization_flag;

    Ui::MainWindow *ui;
    std::unique_ptr<HelpDialog> HD0;
    std::unique_ptr<AuthorInformation> AI0;

    std::unique_ptr<Led_Component> Led_Component0;
    std::unique_ptr<QFile> serialization;

    void load_pictures() const;
    QPixmap set_picture() const;

    void first_serialization();
    void save_serialization_file() const ;

    void set_rgb_model() const;
    void set_hsv_model() const;
    void set_pins() const;
};

#endif // MAINWINDOW_H
