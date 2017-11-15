//testmenuV2.cpp
#include<iostream>
using namespace std;
int menu()
{
	int choice;
	cout <<"\t\tMAIN MENU\n"
		<<"\t\t=========\n"
		<<"\t\t1. Add a pet\n"
		<<"\t\t2. Edit a pet\n"
		<<"\t\t3. Delete a pet\n"
		<<"\t\t4. Sort pets\n"
		<<"\t\t5. File I/O\n"
		<<"\t\t6. Print report\n"
		<<"\t\t7. Exit\n"
		<<"\tEnter your choice: ";
	cin >>choice;
	return choice;
}

void subAdd()
{
	int add;
	cout <<"\t\tADD MENU\n"
		<<"\t\t========\n"
		<<"\t\t1. Add Cat\n"
		<<"\t\t2. Add Dog\n"
		<<"\t\t3. Add Bird\n"
		<<"\t\t4. Add Fish\n"
		<<"\t\t5. Go Back\n"
		<<"\t\t6. Exit\n"
		<<"\tEnter your choice: ";
	cin >>add;
	system("CLS");
	switch(add)
		{
			case 1: cout <<"add cat\n";
				break;
			case 2: cout <<"add dog\n";
				break;
			case 3: cout <<"add bird\n";
				break;
			case 4: cout <<"add fish\n";
				break;
			case 5: cout <<"go back\n";
				break;
			case 6: cout <<"Exit\n";
				break;
			default: cout <<"ERROR!: Invalid option!\n";
		}
	if (add == 6)
		exit(0);
}

void subEdit()
{
	int edit;
	cout <<"\t\tEDIT MENU\n"
		<<"\t\t=========\n"
		<<"\t\t1. Edit Cat\n"
		<<"\t\t2. Edit Dog\n"
		<<"\t\t3. Edit Bird\n"
		<<"\t\t4. Edit Fish\n"
		<<"\t\t5. Go Back\n"
		<<"\t\t6. Exit\n"
		<<"\tEnter your choice: ";
	cin >>edit;
	system("CLS");
	switch(edit)
		{
			case 1: cout <<"edit cat\n";
				break;
			case 2: cout <<"edit dog\n";
				break;
			case 3: cout <<"edit bird\n";
				break;
			case 4: cout <<"edit fish\n";
				break;
			case 5: cout <<"go back\n";
				break;
			case 6: cout <<"Exit\n";
				break;
			default: cout <<"ERROR!: Invalid option!\n";
		}
	if (edit == 6)
		exit(0);
}

void subDel()
{
	int del;
	cout <<"\t\tDELETE MENU\n"
		<<"\t\t========\n"
		<<"\t\t1. Delete Cat\n"
		<<"\t\t2. Delete Dog\n"
		<<"\t\t3. Delete Bird\n"
		<<"\t\t4. Delete Fish\n"
		<<"\t\t5. Go Back\n"
		<<"\t\t6. Exit\n"
		<<"\tEnter your choice: ";
	cin >>del;
	system("CLS");
	switch(del)
		{
			case 1: cout <<"delete cat\n";
				break;
			case 2: cout <<"delete dog\n";
				break;
			case 3: cout <<"delete bird\n";
				break;
			case 4: cout <<"delete fish\n";
				break;
			case 5: cout <<"go back\n";
				break;
			case 6: cout <<"Exit\n";
				break;
			default: cout <<"ERROR!: Invalid option!\n";
		}
	if (del == 6)
		exit(0);
}

void subSort()
{
	int sort;
	cout <<"\t\tSORT MENU\n"
		<<"\t\t=========\n"
		<<"\t\t1. Sort Price\n"
		<<"\t\t2. Sort Name\n"
		<<"\t\t3. Sort Breed\n"
		<<"\t\t4. Go Back\n"
		<<"\t\t5. Exit\n"
		<<"\tEnter your choice: ";
	cin >>sort;
	system("CLS");
	switch(sort)
		{
			case 1: cout <<"sort price\n";
				break;
			case 2: cout <<"sort name\n";
				break;
			case 3: cout <<"sort breed\n";
				break;
			case 4: cout <<"go back\n";
				break;
			case 5: cout <<"Exit\n";
				break;
			default: cout <<"ERROR!: Invalid option!\n";
		}
	if (sort == 5)
		exit(0);
}

void subPrint()
{
	int print;
	cout <<"\t\tPRINT MENU\n"
		<<"\t\t==========\n"
		<<"\t\t1. Print cats\n"
		<<"\t\t2. Print dogs\n"
		<<"\t\t3. Print birds\n"
		<<"\t\t4. Print fish\n"
		<<"\t\t5. go back\n"
		<<"\t\t6. Exit\n"
		<<"\tEnter your choice: ";
	cin >>print;
	system("CLS");
	switch(print)
		{
			case 1: cout <<"print cats\n";
				break;
			case 2: cout <<"print dogs\n";
				break;
			case 3: cout <<"print birds\n";
				break;
			case 4: cout <<"print fish\n";
				break;
			case 5: cout <<"go back\n";
				break;
			case 6: cout <<"EXIT\n";
				break;
			default: cout <<"ERROR!: Invalid option!\n";
		}
	if (print == 6)
		exit(0);
}

int main()
{
	int option;
	int add;
	int edit;
	do
	{
		system("CLS");
		option = menu();
		switch(option)
		{
			case 1: cout <<"Add\n";
				subAdd();
				break;
			case 2: cout <<"Edit\n";
				subEdit();
				break;
			case 3: cout <<"Delete\n";
				subDel();
				break;
			case 4: cout <<"Sort\n";
				subSort();
				break;
			case 5: cout <<"File I/O\n";
				break;
			case 6: cout <<"Print\n";
				subPrint();
				break;
			case 7: cout <<"Goodbye\n";
				break;
			default: cout <<"ERROR!: Invalid option!\n";
		}
		system("PAUSE");
		
	}while (option != 7);
	return 0;
}
