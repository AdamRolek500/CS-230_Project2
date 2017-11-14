#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include <unistd.h>
#include "Pet.h"
#include <cstdlib>
#include <cstring>

using namespace std;

class Cat : public Pet{
	public:
		Cat();
		void setDes(string newDes);
		virtual void speak();
		virtual void toString();
	private:
		string color;
		string des;
};

Cat::Cat():Pet(){
	cout << "Please enter " << this->getName() << "'s color > ";
	cin >> color;
	system("CLS");
	cout << "Please enter " << this->getName() << "'s description > ";
	cin.ignore();
	getline(cin, des);
	system("CLS");
}

void Cat::toString(){
	Pet::toString();
	cout << "Color: " << this->color << endl
	  	 << "Description: " << this->des << endl;
	sleep(5);
	system("CLS");
}

void Cat::speak(){
	cout << "Meow... Definitly a cat!";
	sleep(3);
	system("CLS");
}

#endif
