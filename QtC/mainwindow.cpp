#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QTextCursor>
#include <QFont>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_actionNew_triggered()
{
    QString content = ui->textEdit->toPlainText();

    int status = madeChanges();
    if (content.length()==0){
        file_path = "";
        ui->textEdit->setPlainText("");
        setWindowTitle("untitled");
    }
    else if(status==1){
        return on_actionSave_as_triggered();
    }
    else if(status==2){
        file_path = "";
        ui->textEdit->setPlainText("");
        setWindowTitle("untitled");
    }
    else if(status==3){

        return;
    }


}

void MainWindow::on_actionOpen_triggered()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open the File");
    QFile file(file_name);
    file_path = file_name;
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "..", "file not open");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();

    ui->textEdit->setText(text);
    file.close();
}

void MainWindow::on_actionSave_triggered()
{
    if(file_path==""){
        QString file_name = QFileDialog::getSaveFileName(this, "Enter name of the file");
        QFile file(file_name);
        file_path = file_name;
        QTextStream out(&file);
        setWindowTitle(file_name);
        QString text = ui->textEdit->toPlainText();
        out << text;
        file.flush();
        file.close();
    }
    else{
    QFile file(file_path);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "..", "file not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();

}
}

void MainWindow::on_actionSave_as_triggered()
{
    QString file_name = QFileDialog::getSaveFileName(this, "Enter name of the file");
    QFile file(file_name);
    file_path = file_name;
    setWindowTitle(file_name);

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "..", "file not open");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();

}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}



void MainWindow::on_actionBold_triggered()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextCharFormat format;
    if(!cursor.charFormat().font().bold())
    {
        format.setFontWeight(QFont::Bold);
        cursor.mergeCharFormat(format);
    }
    else
    {
        format.setFontWeight(QFont::Normal);
        cursor.mergeCharFormat(format);    }

}



void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actionSuperscript_triggered()
{
    QString superText = ui->textEdit->textCursor().selectedText();
    ui->textEdit->textCursor().removeSelectedText();
    ui->textEdit->insertHtml(QString("<sup>%1</sup>").arg(superText));



}

void MainWindow::on_actionSubscript_triggered()
{
    QString subText = ui->textEdit->textCursor().selectedText();
    ui->textEdit->textCursor().removeSelectedText();
    ui->textEdit->insertHtml(QString("<sub>%1</sub>").arg(subText));
}

void MainWindow::on_actionRedo_triggered()
{

     ui->textEdit->redo();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}
int MainWindow::madeChanges()
{
    if(ui->textEdit->document()->isModified()){
        QMessageBox msgBox;
        msgBox.setText("The document has been modified.");
        msgBox.setInformativeText("Do you want to save your changes?");
        msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        int ret = msgBox.exec();

        switch(ret){
        case QMessageBox::Save:

            return 1;


          case QMessageBox::Discard:
            return 2;

              break;
          case QMessageBox::Cancel:
             return 3;
          default:
              break;
        }

    }
    return 0;
}


void MainWindow::on_actionAbout_Me_triggered()
{
   QString about_me = "<h1>Mohan Kalyan</h1><h3>B.Tech Graduate in Computer Science and Engineering</h3><p>Currently working as Technical Management Intern in IITB</p><p>Github: <a href='https://github.com/mohan-veer' target='_blank'>mohan-veer</a></p>";
   QMessageBox::about(this,"About Me",about_me);

}
