#include <iostream>
#include <ctime>
#include <string>
#include <ctime>
#include <vector>
using namespace std;


struct DATE {


	unsigned short  day : 5;


	unsigned short month : 4;


	unsigned short year : 11;


}; 

class Employer {
	string Name;
	string Surname;
	int Salary;
	long long Number;
	string Vidil; // Directoria, Accounting, Storage
	string Range; //Director, Accounter, Worker
	DATE dateStart;
	DATE dateBirth;
public:
	Employer();

	Employer(string Name, string Surname, int Salary, long long Number, string Vidil, string Range, DATE dateStart1, DATE dateBirth1);

	void SetInfo(string Name, string Surname, int Salary, long long Number, string Vidil, string Range, DATE dateStart1, DATE dateBirth1);

	void ChangeVidil(string vidil);

	void AppEmp();

	void Print();

	string GetName();

	string GetVidil();

	string GetRange();

	int GetSalary();

	void GivePremia(int proc);
};

