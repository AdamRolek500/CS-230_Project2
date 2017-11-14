#ifndef PET_H
#define PET_H
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

class Pet{
	public:
		Pet();
		string getName();
		int getAge();
		int getPrice();
		void setName(string newName);
		void setPrice(int nenPrice);
		virtual void speak();
		virtual void toString();
		
	private:
		int age;
		int price;
		string name;

};

Pet::Pet(){
	cout << "Please enter a pet name > ";
	cin >> name;
	system("CLS");
	cout << "Please enter " << name << "'s age > ";
	cin >> age;
	system("CLS");
	cout << "Please enter " << name << "'s price > ";
	cin >> price;
	system("CLS");
}

void Pet::speak(){
	cout << "I am a pet and I do things!!" << endl;
}

void Pet::toString(){
	cout << "Name: " << this->name << endl
		 << "Age: " << this->age << endl
		 << "Price: " << this->price << endl;
}

string Pet::getName(){
	return name;
}

#endif
