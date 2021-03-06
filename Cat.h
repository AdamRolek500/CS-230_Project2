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
		Cat(string type);
		void setDes(string newDes);
		virtual void speak();
		virtual void toString();
		string getDes(){
			return des;
		};
		string getColor(){
			return color;
		};
	private:
		string color;
		string des;
};

Cat::Cat(string type):Pet(type){
	cout << "Please enter " << this->getName() << "'s color > ";
	cin.ignore();
	getline(cin, color);
	system("CLS");
	cout << "Please enter " << this->getName() << "'s description > ";
	//cin.ignore();
	getline(cin, des);
	system("CLS");
}

void Cat::toString(){
	Pet::toString();
	cout << "Color: " << this->color << endl
	  	 << "Description: " << this->des << endl << endl;
}

void Cat::speak(){
	cout << "Meow... Definitly a cat!";
	sleep(3);
	system("CLS");
}

#endif
