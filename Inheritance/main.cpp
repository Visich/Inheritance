#include"Human.h"
#include"Student.h"
#include"Teacher.h"
#include"Graduate.h"

#define delimiter "\n---------------------------\n"

//#define INHERITANCE
//#define POITERS_TO_BASE_CLASS

void main()
{
	setlocale(LC_ALL, "");
#ifdef INHERITANCE
	Human h("�������", 20);
	//h.info();
	//cout << h << endl;

	Student durko("����� �������", 20, "���");
	//durko.info();
	cout << delimiter << endl;
	//cout << durko << endl;
	cout << delimiter << endl;

	Teacher pablo("Pablo Escobar", 40, "�������� ������������ ����������", 25, 50);
	//pablo.info();
	//cout << pablo << endl;

	Graduate tony
	("Antonio Montana", 22, "��������������� ����������", 5, 90, "������ � ���������� ��������������");
	//tony.info();
	//cout << tony << endl;
#endif // INHERITANCE

#ifdef POITERS_TO_BASE_CLASS
	Human* p_h = &h;
	p_h->info();
	Human* p_teacher = &pablo;
	p_teacher->info();
	Human* p_student = &durko;
	p_student->info();
#endif // POITERS_TO_BASE_CLASS

	//Human vasya("�������", 20);
	Human* group[] =
	{
		new Student("����� �������", 20, "���"),
		new Teacher("Pablo Escobar", 40, "�������� ������������ ����������", 25, 50),
		new Graduate("Antonio Montana", 22, "��������������� ����������", 5, 90, "������ � ���������� ��������������"),
		new Teacher("Albert Einstein", 150, "Phisics", 120, 8)
	};

	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		//group[i]->info();
		/*if (typeid(*group[i]) == typeid(Student))cout << *(Student*)group[i] << endl;
		if (typeid(*group[i]) == typeid(Teacher))cout << *(Teacher*)group[i] << endl;
		if (typeid(*group[i]) == typeid(Graduate))cout << *(Graduate*)group[i] << endl;*/
		
		if (typeid(*group[i]) == typeid(Student))
			cout << *dynamic_cast<Student*>(group[i]) << endl;
		if (typeid(*group[i]) == typeid(Teacher))
			cout << *dynamic_cast<Teacher*>(group[i]) << endl;
		if (typeid(*group[i]) == typeid(Graduate))
			cout << *dynamic_cast<Graduate*>(group[i]) << endl;
	}
}