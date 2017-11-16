#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include <unistd.h>
#include "Pet.h"
#include <cstdlib>
#include <cstring>

using namespace std;

class Dog : public Pet{
	public:
		Dog(string type);
		void setDes(string newDes);
		virtual void speak();
		virtual void toString();
		string getBreed(){
			return breed;
		};
		string getDes(){
			return des;
		};
	private:
		string breed;
		string des;
};

Dog::Dog(string type):Pet(type){
	cout << "Please enter " << this->getName() << "'s breed > ";
	cin.ignore();
	getline(cin, breed);
	system("CLS");
	cout << "Please enter " << this->getName() << "'s description > ";
	//cin.ignore();
	getline(cin, des);
	system("CLS");
}

void Dog::toString(){
	Pet::toString();
	cout << "Breed: " << this->breed << endl
	  	 << "Description: " << this->des << endl << endl;
}

void Dog::speak(){
	cout << "WOOF! WOOF! WOOF!";
	sleep(3);
	system("CLS");
}

#endif
