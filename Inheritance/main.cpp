#include"Human.h"
#include"Student.h"
#include"Teacher.h"
#include"Graduate.h"

#define delimiter "\n---------------------------\n"

void main()
{
	setlocale(LC_ALL, "");
	Human h("�������", 20);
	//h.info();
	cout << h << endl;

	Student durko("����� �������", 20, "���");
	//durko.info();
	cout << delimiter << endl;
	cout << durko << endl;
	cout << delimiter << endl;

	Teacher pablo("Pablo Escobar", 40, "��������������� ����������", 25, 50);
	pablo.info();
	//cout << pablo << endl;

	Graduate tony
	("Antonio Montana", 22,	"��������������� ����������", 5, 90, "������ � ���������� ��������������");
	tony.info();
	//cout << tony << endl;
}