using namespace std;
#include "List.h"
#include <cstddef>
#include <iostream>
#include <string>


typedef NodeType* NodePtr;

struct NodeType{
	Stu student;  //payload
	NodePtr link; //pointer for next
};

List::List(){
	length = 0;
	dataPtr = NULL;
	currentPos = NULL;
	lastPtr = NULL;
}

void List::Insert(Stu item){
	NodePtr newNodePtr = new NodeType;
	newNodePtr -> student = item;
	newNodePtr -> link = NULL;
	if (lastPtr == NULL)
		dataPtr = newNodePtr;
	else
		lastPtr -> link = newNodePtr;
	lastPtr = newNodePtr;
	length++;
}

void List::ResetList(){
	currentPos = dataPtr;
}

Stu List::GetNextItem(){
	Stu item;
	item = currentPos->student;
	currentPos = currentPos -> link;
	return item;
}

bool List::HasNext() const{
	return (currentPos != NULL);
}

bool List::IsEmpty() const{
	return (dataPtr == NULL);
}

void List::Delete(string name){
	NodePtr prevPtr = NULL;
	NodePtr currPtr = dataPtr;
	while (currPtr != NULL && currPtr->student->getName() != name){
		prevPtr = currPtr;
		currPtr = currPtr -> link;
	}
	if (currPtr != NULL){
	//item is found
		if (currPtr == dataPtr)
			dataPtr = currPtr -> link;//first node
 		else
 			prevPtr -> link = currPtr -> link;
 			
 		if (currPtr == lastPtr)
 			lastPtr = prevPtr;//last node
 			
   		delete currPtr;
   		length --;
   }
}

void List::BubbleSort()
{
	this->ResetList();
	
 	if(this -> IsEmpty())
 		return;
 		
	NodePtr temp = dataPtr;
	currentPos = dataPtr;
	Pet* tempPer;
	
	for ( int i = 1; i < length; i++ ) 
	{ 
	
		while (temp->link)
		{ 
		
			if ( temp->student->getPrice() > temp->link->student->getPrice() ) 
			{ 
				tempPer = temp->student;
				temp->student = temp->link->student;
				temp->link->student = tempPer;
				
				temp = temp->link;
			}// end if 
			else
			{
				temp = temp->link;
			}
			
		}// end while
		temp = dataPtr;
	}// end for 
	
}

Stu List::getFirstItem(){
	return dataPtr->student;
}

void List::Edit(string name){
	NodePtr prevPtr = NULL;
	NodePtr currPtr = dataPtr;
	while (currPtr != NULL && currPtr->student->getName() != name){
		prevPtr = currPtr;
		currPtr = currPtr -> link;
	}
	string choice;
	cout << "Would you like to edit " << name << "'s name OR price? ";
	cin >> choice;
	system("CLS");
	if (choice == "name" || choice == "Name"){
		string newName;
		cout << "What is " << name << "'s new name? ";
		cin >> newName;
		currPtr->student->setName(newName);
		system("CLS");
	} 
	else if (choice == "price" || choice == "Price"){
		int newPrice;
		cout << "Please enter " << name << "'s new price > ";
		cin >> newPrice;
		currPtr->student->setPrice(newPrice);
		system("CLS");
	}
	
}
 
void List::printList(){
	this->ResetList();
	while(this->HasNext())
		this->GetNextItem()->toString();
}

