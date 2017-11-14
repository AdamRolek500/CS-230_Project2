#include <iostream>
#include "Pet.h"
#include "Cat.h"

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

int subAdd()
{
	system("CLS");
	int add;
	cout <<"\t\tADD MENU\n"
		<<"\t\t=========\n"
		<<"\t\t1. Add Cat\n"
		<<"\t\t2. Add Dog\n"
		<<"\t\t3. Add Bird\n"
		<<"\t\t4. Add Fish\n"
		<<"\t\t5. Go Back\n"
		<<"\t\t6. Exit\n"
		<<"\tEnter your choice: ";
	cin >>add;
	return add;
}

void addMenu(int opt){
		system("CLS");
		switch(opt)
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
		if (opt == 6)
			exit(0);
}
int main()
{
	Cat pet1;
	
	pet1.speak();
	pet1.toString();
	/*
	int option, add;
	
	do
	{
		system("CLS");
		option = menu();
		switch(option)
		{
			case 1: 
				cout <<"Add\n";
				add = subAdd();
				addMenu(add);
				break;
			case 2: cout <<"Edit\n";
				break;
			case 3: cout <<"Delete\n";
				break;
			case 4: cout <<"Sort\n";
				break;
			case 5: cout <<"File I/O\n";
				break;
			case 6: cout <<"Print\n";
				break;
			case 7: cout <<"Goodbye\n";
				break;
			default: cout <<"ERROR!: Invalid option!\n";
		}
		system("PAUSE");
	}while (option != 7);
	*/
	return 0;
}

