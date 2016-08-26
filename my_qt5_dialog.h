#ifndef MY_DIALOG_H
#define MY_DIALOG_H

#include <QDialog>

namespace Ui {
  class my_qt5_dialog;
}

class my_qt5_dialog : public QDialog
{
  Q_OBJECT //!OCLINT

public:
  explicit my_qt5_dialog(QWidget *parent = 0);
  ~my_qt5_dialog();

private:
  Ui::my_qt5_dialog *ui;
};

#endif // MY_DIALOG_H
