#include <iostream>
#include "Cat.h"
#include "Dog.h"
#include "Pet.h"
#include "List.h"
#include "Fish.h"
#include "Bird.h"
#include <fstream>

using namespace std;

List list;
ofstream out;
string type;

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
			case 1:
				list.Insert(new Cat("Cat"));
				break;
			case 2: 
				list.Insert(new Dog("Dog"));
				break;
			case 3:
				list.Insert(new Bird("Bird"));
				break;
			case 4:
				list.Insert(new Fish("Fish"));
				break;
			case 5: cout << "Back to main menu..." << endl;
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
	
	int option, add;
	string name;
	
	do
	{
		system("CLS");
		option = menu();
		switch(option)
		{
			case 1: 
				add = subAdd();
				addMenu(add);
				break;
			case 2: 
				system("CLS");
				cout << "Enter the name of the pet you wish to edit > ";
				cin >> name;
				list.Edit(name);
				break;
			case 3: 
				system("CLS");
				cout << "Enter the name of the pet you wish to delete > ";
				cin >> name;
				list.Delete(name);
				break;
			case 4: 
				system("CLS");
				list.BubbleSort();
				cout << "Sorted the list by price... ";
				sleep(1);
				system("CLS");
				break;
			case 5: 
				out.open("savedData.txt");
				Pet* temp;
				list.ResetList();
				temp = list.getFirstItem();
				do {
					temp = list.GetNextItem();
					type = temp->getType();
					if (type == "Cat"){
						Cat* cat;
						cat = (Cat*)temp;
						out << cat->getType() << endl
							<< cat->getName() << endl
							<< cat->getPrice() << endl
							<< cat->getAge() << endl
							<< cat->getColor() << endl
							<< cat->getDes() << endl;
					}
					else if (type == "Dog"){
						Dog* dog;
						dog = (Dog*)temp;
						out << dog->getType() << endl
							<< dog->getName() << endl
							<< dog->getPrice() << endl
							<< dog->getAge() << endl
							<< dog->getBreed() << endl
							<< dog->getDes() << endl;
					}
					else if (type == "Fish"){
						Fish* fish;
						fish = (Fish*)temp;
						out << fish->getType() << endl
							<< fish->getName() << endl
							<< fish->getPrice() << endl
							<< fish->getAge() << endl
							<< fish->getBreed() << endl
							<< fish->getDes() << endl;
					}
					else if (type == "Bird"){
						Bird* bird;
						bird = (Bird*)temp;
						out << bird->getType() << endl
							<< bird->getName() << endl
							<< bird->getPrice() << endl
							<< bird->getAge() << endl
							<< bird->getDes() << endl;
					} 
				} while (list.HasNext());
				out.close();
				break;
			case 6: cout <<"Print:\n";
				sleep(.5);
				system("CLS");
				list.printList();
				break;
			case 7: cout <<"Goodbye\n";
				break;
			default: cout <<"ERROR!: Invalid option!\n";
		}
		system("PAUSE");
	}while (option != 7);
	return 0;
}

