#include <QtGui>
#include"ui_qtTest.h"
int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QDialog *dd=new QDialog();
    Ui_Dialog *ui=new Ui_Dialog();
    ui->steupUi(dd);
    dd->show();
    return app.exec();

}
