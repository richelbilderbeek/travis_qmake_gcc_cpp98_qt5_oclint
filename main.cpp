#include <QApplication>
#include "my_qt5_dialog.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  my_qt5_dialog d;
  d.show();
  return a.exec();
}
