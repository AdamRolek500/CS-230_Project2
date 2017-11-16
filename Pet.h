#ifndef PET_H
#define PET_H
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

class Pet{
	public:
		Pet(string type){
			this->type = type;
			cout << "Please enter a pet name > ";
			cin >> name;
			system("CLS");
			cout << "Please enter " << name << "'s age > ";
			cin >> age;
			system("CLS");
			cout << "Please enter " << name << "'s price > ";
			cin >> price;
			system("CLS");
		};
		virtual string getName(){
			return name;
		};
		string getType(){
			return type;
		}
		int getAge(){
			return age;
		};
		int getPrice(){
			return price;
		};
		void setName(string newName){
			name = newName;
		};
		void setPrice(int newPrice){
			price = newPrice;
		};
		virtual void speak(){
			cout << "I am a pet and I do things!!" << endl;
		};
		virtual void toString(){
			cout << "Type: " << this->type << endl
				 << "Name: " << this->name << endl
				 << "Age: " << this->age << " years old." << endl
				 << "Price: $" << this->price << endl;
		};
		
	private:
		string type;
		int age;
		int price;
		string name;

};

#endif
