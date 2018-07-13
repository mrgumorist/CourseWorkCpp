#include "Employer.h"


Employer::Employer() {
	Name = "Anon";
	Surname = "Anonn";
	Salary = 5000;
	Number = rand() % 10000;
	Vidil = "Storage";
	Range = "Worker";
	dateStart.day = 15;
	dateStart.month = 3;
	dateStart.year = 2001;
	dateBirth.day = 16;
	dateBirth.month = 2;
	dateBirth.year = 2000;
}

Employer::Employer(string Name, string Surname, int Salary, long long Number, string Vidil, string Range, DATE dateStart1, DATE dateBirth1)
{
	this->Name = Name;
	this->Vidil = Vidil;
	this->Range = Range;
	this->Surname = Surname;
	this->Salary = Salary;
	this->Number = Number;
	dateStart.day = dateStart1.day;
	dateStart.month = dateStart1.month;
	dateStart.year = dateStart1.year;
	dateBirth.day = dateBirth1.day;
	dateBirth.month = dateBirth1.month;
	dateBirth.year = dateBirth1.year;

}

void Employer::SetInfo(string Name, string Surname, int Salary, long long Number, string Vidil, string Range, DATE dateStart1, DATE dateBirth1)
{
	this->Name = Name;
	this->Range = Range;
	this->Vidil = Vidil;
	this->Surname = Surname;
	this->Salary = Salary;
	this->Number = Number;
	dateStart.day = dateStart1.day;
	dateStart.month = dateStart1.month;
	dateStart.year = dateStart1.year;
	dateBirth.day = dateBirth1.day;
	dateBirth.month = dateBirth1.month;
	dateBirth.year = dateBirth1.year;
}

void Employer::ChangeVidil(string vidil)
{
	if (vidil == "Directoria" || vidil== "Accounting" || vidil=="Storage")
	{
		Vidil = vidil;
		cout << "Viddil changed";
	}

}

void  Employer::Print()
{
	cout << "Name: " << Name << endl;
	cout << "Surname: " << Surname << endl;
	cout << "Salary: " << Salary << endl;
	cout << "Number: " << Number << endl;
	cout << "Vidil: " << Vidil << endl;
	cout << "Range: " << Range<<endl;
	cout << "Date of start working " << dateStart.day << "." << dateStart.month << "." << dateStart.year << endl;
	cout << "Date of birth " << dateBirth.day << "." << dateBirth.month << "." << dateBirth.year << endl;
}

string Employer::GetName()
{
	return Name;
}

void Employer::AppEmp() {
	int tmp = 0;
	int a = 0;

	cout << "Enter info: " << endl;   
	cout << "Enter Name "; cin >> Name; cout << endl;
	cout << "Enter Surname "; cin >> Surname; cout << endl;
	cout << "Enter Salary ";
	while (!(cin >> Salary))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error, try again " << endl;
		cout << "Enter Salary";
	}
	
	while (a != 1) {
		cout << "Enter Vidil (avaliable are:  Directoria, Accounting, Storage) ";
		cin >> Vidil;
		if (Vidil == "Directoria"||Vidil == "Accounting" || Vidil == "Storage")
		{
			a = 1;
		}
	}
	a = 0;
	cout << endl;
	while (a != 1) {
		cout << "Enter Range (avaliable are:  Director, Accounter, Worker) ";
		cin >> Range;
		if (Range == "Director" || Range == "Accounter" || Range == "Worker")
		{
			a = 1;
		}
	}
	
	cout << endl;
	cout << "Enter phone number "; cin >> Number; cout << endl;
	cout << "Enter date of start working " << endl;
	cout << "Day: "; 
	while (!(cin >> tmp))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error, try again " << endl;
		cout << "Enter day";
	}
	dateStart.day = tmp;
	cout << "Month: "; 
	while (!(cin >> tmp))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error, try again " << endl;
		cout << "Enter Month";
	}
	dateStart.month = tmp;
	cout << "Year: "; 
	while (!(cin >> tmp))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error, try again " << endl;
		cout << "Enter Year";
	}
	dateStart.year = tmp;
	cout << endl;
	cout << "Enter date of bith " << endl;
	cout << "Day: ";
	while (!(cin >> tmp))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error, try again " << endl;
		cout << "Enter day";
	}
	dateBirth.day = tmp;
	cout << "Month: ";
	while (!(cin >> tmp))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error, try again " << endl;
		cout << "Enter Month";
	}
	dateBirth.month = tmp;
	cout << "Year: ";
	while (!(cin >> tmp))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error, try again " << endl;
		cout << "Enter Year";
	}
	dateBirth.year = tmp;
	cout << endl;

	cout << endl;
}

string Employer::GetVidil()
{
	return Vidil;

}

string Employer::GetRange() {
	return Range;
}

int Employer::GetSalary()
{
	
		return Salary;
	
}

void Employer::GivePremia(int proc)
{
	Salary += Salary / 100 * proc;
}

//