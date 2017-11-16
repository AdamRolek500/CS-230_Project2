#ifndef FISH_H
#define FISH_H
#include <iostream>
#include <string>
#include <unistd.h>
#include "Pet.h"
#include <cstdlib>
#include <cstring>

using namespace std;

class Fish : public Pet{
	public:
		Fish(string type);
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

Fish::Fish(string type):Pet(type){
	cout << "Please enter " << this->getName() << "'s breed > ";
	cin.ignore();
	getline(cin, breed);
	system("CLS");
	cout << "Please enter " << this->getName() << "'s description > ";
	//cin.ignore();
	getline(cin, des);
	system("CLS");
}

void Fish::toString(){
	Pet::toString();
	cout << "Breed: " << this->breed << endl
	  	 << "Description: " << this->des << endl << endl;
}

void Fish::speak(){
	cout << "BLUB! BLUB! BLUB!";
	sleep(3);
	system("CLS");
}

#endif
