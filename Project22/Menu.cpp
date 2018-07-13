#include "Menu.h"

void Menu::help()
{
	cout << "Press any key to continue " << endl;
	_getch();
	system("cls");
}
Menu::Menu() {


	

	EmployerList List(1);
	int a = 0;
	while (a != -1)
	{
		cout << "**********************************MENU**********************************" << endl;
		cout << "*Enter 1 if do you want print all workers in firm                      *" << endl;
		cout << "*Enter 2 if do you want add new worker in firm                         *" << endl;
		cout << "*Enter 3 if do you want delete (dismiss worker)                        *" << endl;
		cout << "*Enter 4 if do you want see list of dissmised workers                  *" << endl;
		cout << "*Enter 5 if do you want see sorted list by vidil                       *" << endl;
		cout << "*Enter 6 if do you want see sorted list by range                       *" << endl;
		cout << "*Enter 7 if do you want search all about emloyer                       *" << endl;
		cout << "*Enter 8 if do you want see employers by vidil                         *" << endl;
		cout << "*Enter 9 if do you want see report about all vidils + fond of salary   *" << endl;
		cout << "*Enter 10 if do you want see report about all firm                     *" << endl;
		cout << "*Enter 11 if do you want change vidil of employer                      *" << endl;
		cout << "*Enter 12 if do you want give premia to employer                       *" << endl;
		cout << "*Enter 13 if do you want give premia to all Vidil                      *" << endl;
		cout << "*Enter 14 if od you want delete all about dimissed employer            *" << endl;
		cout << "*....................... FOR EXIT  ENTER 0 ............................*" << endl;  
		cout << "**********************************MENU**********************************" << endl;
		while (!(cin >> a))
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "Input error! YOU ARE STUPID! Retry input " << endl;
		}
		if (a == 0)
		{
			break;
		}
		if (a == 1)
		{
			system("cls");
			List.PrintAll();
			help();
		}
		if (a == 2)
		{
			system("cls");
			List.AppEmployer();
			help();

		}
		if (a == 3)
		{
			system("cls");
			List.DismissEmp();
			help();
		}
		if (a == 4)
		{
			system("cls");
			List.PrintDismissedList();
			help();
		}
		if (a == 5)
		{
			system("cls");
			List.SortOutputByVidil();
			help();
		}
		if (a == 6)
		{
			system("cls");
			List.SortOutputByRange();
			help();
		}
		if (a == 7)
		{
			system("cls");
			List.PrintAllAboutEmployer();
			help();
		}
		if (a == 8)
		{
			system("cls");
			List.WorkersInVidil();
			help();
		}
		if (a == 9)
		{
			system("cls");
			List.PrintInfoAboutVidil();
			help();
		}
		if (a == 10)
		{
			system("cls");
			List.ReportAboutFirm();
			help();
		}
		if (a == 11)
		{
			system("cls");
			List.ChangeVidil();
			help();
		}
		if (a == 12)
		{
			system("cls");
			List.GivePremia();
			help();
		}
		if (a == 13)
		{
			system("cls");
			List.GivePremiaVidil();
			help();
		}

		if (a == 14)
		{
			system("cls");
			List.DeleteDimmised();
			help();
		}

	}

	system("cls");
	cout << "Thanks for using my program "<<endl;
	cout << "CREATED BY ANDREW SMIRNOV ";
	cout << endl << "Press any key)) ";
	_getch();
}
