#ifndef LIST_H
#define LIST_H
#include <string>
#include "Pet.h"
using namespace std;
typedef Pet* Stu; //Type for component

struct NodeType;  //forward declaration

class List{

	public:
		List(); //default constructor
		void Insert(Stu student);
		bool IsEmpty() const;
		bool HasNext() const;
		void ResetList();
		Stu GetNextItem();
		void Delete(string name);
		void BubbleSort();
		void Edit(string name);
		void printList();
		Stu getFirstItem();
		
	private:
		NodeType* dataPtr;//pointer for first node
		NodeType* currentPos;//pointer to current position
		NodeType* lastPtr;//pointer to tail
		int length;
};

#endif
