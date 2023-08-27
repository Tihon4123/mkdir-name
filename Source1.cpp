#include <iostream>
using namespace std;

class student
{
	friend class uchitel;

public:
	static string vidt;

	string name;
private:
	string surname;

public:
	int age;
	string GetSurname()
	{
		return surname;
	}

	void SetSurname(string valueSurname)
	{
		surname = valueSurname;
	}

	void PrintSurname()
	{
		cout << surname << endl;
	}

	void PrintAge()
	{
		cout << "возраст " << age << endl;
	}
	void PrintName()
	{
		cout << name << endl;
	}



};

//static const string vidt = "Хомо Сапиенс";

class uchitel
{
	friend class student;
public:
	string name;

	void SetSurnameStudent(student& ObStudent, string NewName)
	{
		ObStudent.surname = NewName;


		cout << ObStudent.surname << endl;
	}


};



int main()
{
	setlocale(LC_ALL, "Russian");

	student first;
	first.age = 25;
	first.name = "Василий";
	first.SetSurname("Новиков");
	first.vidt = "Хомо Сапиенс";
	string x = first.GetSurname();
	first.PrintName();
	first.PrintSurname();
	first.PrintAge();

	uchitel matem;
	matem.SetSurnameStudent(first, "Вася");
	matem.name = "Ольга Генадьевна";


	return 0;


};