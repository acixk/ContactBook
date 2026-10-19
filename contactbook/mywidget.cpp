#include "mywidget.h"
#include "ui_mywidget.h"
#include <QFile>
#include <QDebug>
#include <QFileDialog>
QString mFilename = "C:/Users/user/desktop/ContactBook/contactbook/myfile.txt";
void read(QString Filename,QString str){
    QFile mFile(Filename);
    if(!mFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug()<<"could not open file for read";
        return;
    }
    mFile.flush();
    mFile.close();
}
void Write(QString Filename,QString str){
    QFile mFile(Filename);
    if(!mFile.open(QFile::WriteOnly | QFile::Text)){
        qDebug()<<"could not open file for write";
        return;
    }
    QTextStream out(&mFile);
    out.setEncoding(QStringConverter::System);
    out<<str;
    mFile.flush();
    mFile.close();
}
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    QStringList ColTotle;
    ui->tableWidget->setColumnCount(4);
    ColTotle<<QStringLiteral("學號")<<QStringLiteral("班級")<<QStringLiteral("姓名")<<QStringLiteral("電話");
    ui->tableWidget->setHorizontalHeaderLabels(ColTotle);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_insert_clicked()
{
    QTableWidgetItem *col1,*col2,*col3,*col4;
    col1 = new QTableWidgetItem(QString(ui->lineEdit_1->text()));
    col2 = new QTableWidgetItem(QString(ui->lineEdit_2->text()));
    col3 = new QTableWidgetItem(QString(ui->lineEdit_3->text()));
    col4 = new QTableWidgetItem(QString(ui->lineEdit_4->text()));
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,col1);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,col2);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,col3);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3,col4);
}




/*void MyWidget::on_pushButton_clicked()
{
    QString saveFile="";
    for(int i=0;i<ui->tableWidget->rowCount();i++){
        for(int j=0;j<ui->tableWidget->columnCount();j++){
            saveFile+=ui->tableWidget->item(i,j)->text()+",";
        }
        saveFile+="\n";
    }
    Write(mFilename,saveFile);
}*/
void MyWidget::on_pushButton_clicked(){
    QString Filename;
    QString saveStr;
    Filename = QFileDialog::getSaveFileName(this,"輸出通訊錄",",","csv(*.csv);;text(*.txt)");
    for(int i=0;i<ui->tableWidget->rowCount();i++){
        for(int j=0;j<ui->tableWidget->columnCount();j++){
            saveStr+=ui->tableWidget->item(i,j)->text()+((j<ui->tableWidget->columnCount())? ",":"");

        }
        saveStr+="\n";
    }
    Write(Filename,saveStr);
}
