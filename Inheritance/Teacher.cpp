#include"Teacher.h"

const string& Teacher::get_specialty() const
{
	return this->specialty;
}
unsigned int Teacher::get_xp() const
{
	return this->xp;
}
int Teacher::get_evil() const
{
	return this->evil;
}
const string& Teacher::set_specialty(const std::string& specialty)
{
	return this->specialty = specialty;
}
unsigned int Teacher::set_xp(unsigned int xp)
{
	return this->xp = xp;
}
int Teacher::set_evil(int evil)
{
	return this->evil = evil;
}

//				Constructors:
Teacher::Teacher
(
	const string& name, unsigned int age,
	const string& specialty, unsigned int xp, int evil
) :Human(name, age)
{
	this->specialty = specialty;
	this->xp = xp;
	this->evil = evil;
	cout << "TConstructor:\t" << this << endl;
}
Teacher::~Teacher()
{
	cout << "TDestructor:\t" << this << endl;
}



//			Methods:
void Teacher::info()
{
	Human::info();
	cout << "�������������: " << specialty
		<< ", ���� ������������: " << xp << " ���, "
		<< "������� ������: " << evil << "%" << endl;
}

ostream & operator<<(ostream & os, const Teacher & obj)
{
	os << (Human)obj;
	return os << ", �������������: " << obj.get_specialty()
		<< ", ���� ������������" << obj.get_xp() << " ���, ������� ������:"
		<< obj.get_evil() << "%";
}
