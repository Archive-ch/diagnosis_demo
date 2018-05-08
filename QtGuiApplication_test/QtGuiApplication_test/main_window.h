#pragma once
#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H
#include <QWidget>
#include <QMainWindow>
#include <QPushButton>
#include "child_Window1.h"    // �����Ӵ��ڵ�ͷ�ļ�
#include "child_Window2.h"
#include "child_Window3.h"
namespace Ui {
	class main_window;
}
class main_window :public QMainWindow {
	Q_OBJECT
public:
	explicit main_window(QWidget *parent = 0);
	~main_window();
private slots:
	void on_fileselect_clicked();   //�����Զ����� 
private:
	Ui::main_window *ui_main;
	child_window1 cw1;            //  �����Ӵ��ڵ�ʵ��
	child_window2 cw2;
	child_window3 cw3;
	QPushButton fileselect;     // �����İ�ť �����ڵ�һ����Ա
	QPushButton functionkey;    
	QPushButton report;
};


#endif // !MAIN_WINDOW_H

