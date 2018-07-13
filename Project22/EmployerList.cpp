#include "EmployerList.h"



EmployerList::EmployerList()
{
	int num = rand() % 10+1;
	for (int i = 0; i< num; i++)
	{
		Employer a;
		List.push_back(a);
	}
}

EmployerList::EmployerList(int num)
{
	
	for (int i = 0; i< num; i++)
	{
		Employer a;
		List.push_back(a);
	}
}

void EmployerList::PrintAll(){

	if (List.size() != 0) {
		for (int i = 0; i < List.size(); i++)
		{
			cout << "Employer # " << i << endl;
			List[i].Print();
			cout << endl;
		}
	}
	else cout << "LIST IS EMPTY " << endl;

}

void EmployerList::AppEmployer() {
	Employer a;
	a.AppEmp();
	List.push_back(a);
}

void EmployerList::DismissEmp() {
	string TmpName;
	int tmpit=-1;
	cout << "Enter name of Employer "; cin >> TmpName;
	for (auto i = List.begin(); i != List.end(); i++)
	{
		if (i->GetName() == TmpName) {

			DismissedList.push_back(*i);
			i = List.erase(i);
			cout << "Susefull" << endl;
			break;
		}

	}

}

void EmployerList::PrintDismissedList() {
	if (DismissedList.size() != 0) {
		for (int i = 0; i < DismissedList.size(); i++)
		{
			cout << "Employer # " << i << endl;
			DismissedList[i].Print();
			cout << endl;
		}
	}
	else cout << "List is empty"<<endl;
}

void EmployerList::SortOutputByVidil() {
	vector<Employer> Directoria;
	vector<Employer> Accounting;
	vector<Employer> Storage;

	for (int i = 0; i < List.size(); i++)
	{
		if (List[i].GetVidil() == "Directoria") {
			Directoria.push_back(List[i]);
		}

		if (List[i].GetVidil() == "Accounting") {
			Accounting.push_back(List[i]);
		}

		if (List[i].GetVidil() == "Storage") {
			Storage.push_back(List[i]);
		}

	}
	cout << "************************" << endl;
	cout << "Directoria: " << endl;
	for (int i = 0; i < Directoria.size(); i++)
	{
		cout << "Employer # " << i << endl;
		Directoria[i].Print();
	}
	cout << "************************" << endl;
	cout << "Accounting: " << endl;
	for (int i = 0; i < Accounting.size(); i++)
	{
		cout << "Employer # " << i << endl;
		Accounting[i].Print();
	}
	cout << "************************" << endl;
	cout << "Storage: " << endl;
	
	for (int i = 0; i < Storage.size(); i++)
	{
		cout << "Employer # " << i << endl;
		Storage[i].Print();
	}
	cout << "************************" << endl;
}

void EmployerList::SortOutputByRange()
{
	vector<Employer> Director;
	vector<Employer> Accounter;
	vector<Employer> Worker;
	for (int i = 0; i < List.size(); i++)
	{
		if (List[i].GetRange() == "Director") {
			Director.push_back(List[i]);
		}

		if (List[i].GetRange() == "Accounter") {
			Accounter.push_back(List[i]);
		}

		if (List[i].GetRange() == "Worker") {
			Worker.push_back(List[i]);
		}

	}
	cout << "************************" << endl;
	cout << "Directors: " << endl;
	for (int i = 0; i < Director.size(); i++)
	{
		cout << "Employer # " << i << endl;
		Director[i].Print();
	}
	cout << "************************" << endl;
	cout << "Accounters: " << endl;
	for (int i = 0; i < Accounter.size(); i++)
	{
		cout << "Employer # " << i << endl;
		Accounter[i].Print();
	}
	cout << "************************" << endl;
	cout << "Workers: " << endl;

	for (int i = 0; i < Worker.size(); i++)
	{
		cout << "Employer # " << i << endl;
		Worker[i].Print();
	}
	cout << "************************" << endl;
}

void EmployerList::PrintAllAboutEmployer()
{
	cout << "Enter Name of Employer " << endl;
	string tmp;
	cin >> tmp;
	for (int i = 0; i < List.size(); i++)
	{
		if (List[i].GetName() == tmp)
		{
			List[i].Print();
			break;
		}
	}
}

void EmployerList::WorkersInVidil()
{
	string tmp;
	int ki = 0;
	while (ki!=-1)
	{
		cout << "Enter vidil ";
		cin >> tmp;
		if (tmp == "Directoria" || tmp == "Accounting" || tmp == "Storage")
		{
			ki = -1;
		}
	}
	for (int i = 0; i < List.size(); i++)
	{
		if (List[i].GetVidil() == tmp)
		{
			cout << "Employer # " << i<<endl;
			List[i].Print();
			cout << endl;
		}
	}

}

void EmployerList::PrintInfoAboutVidil() {
	int numOfWorkersDirectoria=0, numOfWorkersAccounting=0, numOfWorkersStorage=0;
	int SalaryinStorage=0, SalaryinAccounting=0, SalaryinDirectoria =0;

		for (int i = 0; i < List.size(); i++)
		{
			if (List[i].GetVidil() == "Directoria") {
				numOfWorkersDirectoria++;
				SalaryinDirectoria += List[i].GetSalary();
			}

			if (List[i].GetVidil() == "Accounting") {
				numOfWorkersAccounting++;
				SalaryinAccounting += List[i].GetSalary();
			}
			if (List[i].GetVidil() == "Storage") {
				numOfWorkersStorage++;
				SalaryinStorage += List[i].GetSalary();
			}

		}
		double b = 0;;
		cout << "INFO: " << endl;
		cout << "*************************************************************************" << endl;
		cout << "Vidil: Directoria" << endl;
		cout << "Number of workers: " << numOfWorkersDirectoria << endl;
		cout << "Salary in viddil " << SalaryinDirectoria << endl;
		if (numOfWorkersDirectoria != 0) {
			b = SalaryinDirectoria / numOfWorkersDirectoria;
		}
		cout << "AVG SALARY= " << b << endl;
		b = 0;
		cout << "*************************************************************************" << endl;
		cout << "Vidil: Storage" << endl;
		cout << "Number of workers: " << numOfWorkersStorage << endl;
		cout << "Salary in viddil " << SalaryinStorage << endl;
		if (numOfWorkersStorage != 0) {
			b = SalaryinStorage / numOfWorkersStorage;
		}
		cout << "AVG SALARY= " <<  b << endl;
		b = 0;
		cout << "*************************************************************************" << endl;
		cout << "Vidil: Accounting" << endl;
		cout << "Number of workers: " << numOfWorkersAccounting << endl;
		cout << "Salary in viddil " << SalaryinAccounting << endl;
		if (numOfWorkersAccounting != 0) {
			b = SalaryinAccounting / numOfWorkersAccounting;
		}
		cout << "AVG SALARY= " << b << endl;
		cout << "*************************************************************************" << endl;

}

void EmployerList::ChangeVidil() {
	cout << "Enter Name " ;
	string tmpn, tmpv;
	cin >> tmpn;
	cout << "Enter new vidil "; cin >> tmpv;
	for (int i = 0; i < List.size(); i++)
	{
		if (List[i].GetName() == tmpn)
		{
			List[i].ChangeVidil(tmpv);
			break;
		}
	}
}

void EmployerList::ReportAboutFirm() {
	int numOfWorkersDirectoria = 0, numOfWorkersAccounting = 0, numOfWorkersStorage = 0;
	int SalaryinStorage = 0, SalaryinAccounting = 0, SalaryinDirectoria = 0;

	for (int i = 0; i < List.size(); i++)
	{
		if (List[i].GetVidil() == "Directoria") {
			numOfWorkersDirectoria++;
			SalaryinDirectoria += List[i].GetSalary();
		}

		if (List[i].GetVidil() == "Accounting") {
			numOfWorkersAccounting++;
			SalaryinAccounting += List[i].GetSalary();
		}
		if (List[i].GetVidil() == "Storage") {
			numOfWorkersStorage++;
			SalaryinStorage += List[i].GetSalary();
		}

	}
	double b = 0;;
	cout << "INFO: " << endl;
	cout << "*************************************************************************" << endl;
	cout << "Workers in firm " << numOfWorkersAccounting + numOfWorkersStorage + numOfWorkersDirectoria<<endl;
	cout << "Fond in firm " << SalaryinAccounting + SalaryinStorage + SalaryinDirectoria << endl;
	cout << "*************************************************************************" << endl;
	cout << "Vidil: Directoria" << endl;
	cout << "Number of workers: " << numOfWorkersDirectoria << endl;
	cout << "Salary in viddil " << SalaryinDirectoria << endl;
	if (numOfWorkersDirectoria != 0) {
		b = SalaryinDirectoria / numOfWorkersDirectoria;
	}
	cout << "AVG SALARY= " << b << endl;
	b = 0;
	cout << "*************************************************************************" << endl;
	cout << "Vidil: Storage" << endl;
	cout << "Number of workers: " << numOfWorkersStorage << endl;
	cout << "Salary in viddil " << SalaryinStorage << endl;
	if (numOfWorkersStorage != 0) {
		b = SalaryinStorage / numOfWorkersStorage;
	}
	cout << "AVG SALARY= " << b << endl;
	b = 0;
	cout << "*************************************************************************" << endl;
	cout << "Vidil: Accounting" << endl;
	cout << "Number of workers: " << numOfWorkersAccounting << endl;
	cout << "Salary in viddil " << SalaryinAccounting << endl;
	if (numOfWorkersAccounting != 0) {
		b = SalaryinAccounting / numOfWorkersAccounting;
	}
	cout << "AVG SALARY= " << b << endl;
	cout << "*************************************************************************" << endl;
}

void EmployerList::GivePremia() {
	cout << "Enter Name of employer ";
	string tmp; cin >> tmp;
	cout << "Enter on % how premia for emp " << endl;
	int proz; cin >> proz;
	for (int i = 0; i < List.size(); i++)
	{
		if (List[i].GetName() == tmp)
		{
			List[i].GivePremia(proz);
			cout << "Suseful" << endl;
			break;
		}
	}
}

void EmployerList::GivePremiaVidil() {
	cout << "Enter Vidil" << endl;
	string tempstr;
	cin >> tempstr;
	cout << "Enter on % premia for all vidil" << endl;
	int proz; 
	while (!(cin >> proz))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error, try again " << endl;
		cout << "Enter Salary";
	}

	for (int i = 0; i < List.size(); i++)
	{
		if (List[i].GetVidil() == tempstr)
		{
			List[i].GivePremia(proz);
		}
	}

}

void EmployerList::OutInFile(){
	
}

void EmployerList::DeleteDimmised()
{
	cout << "Enter name " << endl;
	string tmpName;
	cin >> tmpName;
	if (DismissedList.size() != 0) {
		for (int i = 0; i < DismissedList.size(); i++)
		{
			if (DismissedList[i].GetName() == tmpName)
			{
				if (DismissedList.size() == 1) {
					DismissedList.resize(0);
				break;
			}
				else
				DismissedList.begin()=DismissedList.erase(DismissedList.begin(), DismissedList.begin() + i);
				cout << "Susefull";
				
				break;
			}
		}
	}
	else cout << "List is empty" << endl;
}