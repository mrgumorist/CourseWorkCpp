#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Employer.h"
#include <algorithm>
using namespace std;

class EmployerList
{
	vector <Employer> List;
	vector <Employer> DismissedList;

public:
	EmployerList();
	EmployerList(int num);
	void PrintAll();
	void PrintDismissedList();
	void AppEmployer();
	void DismissEmp();
	void SortOutputByVidil();
	void SortOutputByRange();
	void PrintAllAboutEmployer();
	void WorkersInVidil();
	void PrintInfoAboutVidil();
	void ChangeVidil();
	void ReportAboutFirm();
	void GivePremia();
	void GivePremiaVidil();
	void OutInFile();
	void DeleteDimmised();
};

