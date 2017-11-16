#ifndef BIRD_H
#define BIRD_H
#include <iostream>
#include <string>
#include <unistd.h>
#include "Pet.h"
#include <cstdlib>
#include <cstring>

using namespace std;

class Bird : public Pet{
	public:
		Bird(string type);
		void setDes(string newDes);
		virtual void speak();
		virtual void toString();
		string getDes(){
			return des;
		};
	private:
		string des;
};

Bird::Bird(string type):Pet(type){
	cout << "Please enter " << this->getName() << "'s description > ";
	cin.ignore();
	getline(cin, des);
	system("CLS");
}

void Bird::toString(){
	Pet::toString();
	cout << "Description: " << this->des << endl << endl;
}

void Bird::speak(){
	cout << "TWEET! TWEET!";
	sleep(3);
	system("CLS");
}

#endif
