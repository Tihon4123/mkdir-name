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
		cout << "������� " << age << endl;
	}
	void PrintName()
	{
		cout << name << endl;
	}



};

//static const string vidt = "���� �������";

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
	first.name = "�������";
	first.SetSurname("�������");
	first.vidt = "���� �������";
	string x = first.GetSurname();
	first.PrintName();
	first.PrintSurname();
	first.PrintAge();

	uchitel matem;
	matem.SetSurnameStudent(first, "����");
	matem.name = "����� ����������";


	return 0;


};