#pragma once
#include"Human.h"

class Student :public Human
{
	string specialty;
	unsigned int year;//год обучения.
	int karma;	//успеваемость
public:
	const string& get_specialty() const;
	unsigned int get_year() const;
	int get_karma() const;
	const string& set_specialty(const string& specialty);
	unsigned int set_year(unsigned int year);
	int set_karma(int karma);

	//			Constructors:
	Student
	(
		const string& name, unsigned int age,
		const string& specialty, unsigned int year = 1, int karma = 0
	);
	~Student();

	//			Methods:
	void info();
};

ostream& operator<< (ostream& os, const Student& obj);