#include "ui_main_window.h"
#include "main_window.h"
#include <QDebug>
#include "child_Window1.h"
#include "child_Window2.h"
#include "child_Window3.h"
main_window::main_window(QWidget *parent):
	QMainWindow(parent),
	ui_main(new Ui::main_window)
{
	ui_main->setupUi(this);
	//fileselect.setParent(this);   //���ð�ť������ ��main_window
	//connect(&fileselect,&QPushButton::clicked,this,&main_window::ChangeToFileSelect);  //��ť���Զ���Ĳۺ���������������ڵİ�ť�ͻᴥ������
	//connect(&cw1, &child_window1::mysignal, this, &main_window::show);
	/*functionkey.setParent(this);
	connect(&functionkey, &QPushButton::clicked, this, &main_window::ChangeToFunctionKey);
	report.setParent(this);
	connect(&report, &QPushButton::clicked, this, &main_window::ChangeToReport);*/
	
	
	connect(&cw1, &child_window1::showmainwindow, this, &main_window::show);
}

//��ʾ�Ӵ��� ͬʱ�������� ����
void main_window::on_fileselect_clicked() {
	this->hide();
	cw1.show();
}


//void main_window::ChangeToFileSelect() {
//	this->hide();
//	cw1.show();
//}
//void main_window::ChangeToFunctionKey() {
//	this->hide();
//	cw2.show();
//}
//void main_window::ChangeToReport() {
//	this->hide();
//	cw3.show();
//}
main_window::~main_window() {
	delete ui_main;
}



//connect(ui->fileselect,SIGNAL(clicked()),this,SLOT())