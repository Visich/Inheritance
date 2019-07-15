#include"Graduate.h"

const string& Graduate::get_diploma_theme() const
{
	return this->diploma_theme;
}
const string& Graduate::set_diploma_theme(const string& diploma_theme)
{
	return this->diploma_theme = diploma_theme;
}
//			Constructors:
Graduate::Graduate
(
	const string& name, unsigned int age,
	const string& specialty, unsigned int year, int karma,
	const string& diploma_theme
) :Student(name, age, specialty, year, karma)
{
	this->diploma_theme = diploma_theme;
	cout << "GConstructor:\t" << this << endl;
}
Graduate::~Graduate()
{
	cout << "Gdestructor:\t" << this << endl;
}

//			Methods:
void Graduate::info()
{
	Student::info();
	cout << "Тема дипломного проекта: " << diploma_theme << endl;
}