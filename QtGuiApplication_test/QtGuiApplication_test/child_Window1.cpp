#include "ui_childwindow1.h"
#include "child_Window1.h"


child_window1::child_window1(QWidget *parent) :
	QWidget(parent),
	ui1(new Ui::Form)
{
	//this->setWindowTitle("�ļ��������-�ļ���ѡ��");
	ui1->setupUi(this);
	//backtomainwindow.setParent(this);   //���ð�ť�ĸ�����Ϊ�Ӵ���
	connect(&backtomainwindow, &QCommandLinkButton::clicked, this, &child_window1::on_backtomainwindow_clicked);
	
}

void child_window1::on_backtomainwindow_clicked() {
	
	emit showmainwindow();
	this->hide();
}

//void child_window1::sendmysignal()   //����ۺ���
//{
//	emit mysignal();
//	this->hide();
//}

