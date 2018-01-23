// JaJuan Webster
// Assignment 01
// Professor Bobadilla
// Templated Queue
#ifndef _MAIN_H
#define _MAIN_H

#include <iostream>

#endif //_MAIN_H

template <class T>
class Temp_Queue
{
	// Attributes and Methods
private:
	int size;
	int index;
	T* queue;

public:
	Temp_Queue();
	Temp_Queue(const Temp_Queue &queue);
	Temp_Queue &operator = (const Temp_Queue &queue);
	~Temp_Queue();
	void Push(T var);
	void Pop();
	void Print();
	int GetSize();
	bool IsEmpty();
};

// Rule of Three --->
// Constructor: allocates one space for the queue
template<class T>
Temp_Queue<T>::Temp_Queue()
{
	size = 1;
	queue = new T[size];
	index = 0;
	std::cout << "CONSTRUCTED\n" << endl;
}

// Copy Constructor: takes another queue and clone its
// contents into a new object
template<class T>
inline Temp_Queue<T>::Temp_Queue(const Temp_Queue & queue)
{
	this->size = queue.size;
	this->queue = queue.queue;
	this->index = queue.index;
	std::cout << "COPY CONSTRUCTED\n" << endl;
}

// Copy Assignment Constructor: reinitializes an existing 
// queue object and copies the content from the queue to be 
// copied onto it
template<class T>
Temp_Queue<T> & Temp_Queue<T>::operator=(const Temp_Queue & queue)
{
	if (this != &queue)
	{
		this->size = queue.size;
		this->queue = queue.queue;
		this->index = queue.index;
	}

	std::cout << "COPY ASSIGNMENT CONSTRUCTED\n" << endl;

	// insert return statement
	return *this;
}

// Deconstructor: deallocates all the memory of the queue
template<class T>
Temp_Queue<T>::~Temp_Queue()
{
	if (queue != nullptr)
	{
		//delete queue;		Ash took a look at this and for some reason this causes an error after the program runs through completely

	}

	std::cout << "DESTROY CONSTRUCTOR!\n" << endl;
}

// Add information to the queue
template<class T>
void Temp_Queue<T>::Push(T var)
{
	// statement checks to see if the list is out of space
	if (index == size - 1)
	{
		// if size is full, allocate more space for new information
		T* tempQueue = new T[size * 2];

		for (int i = 0; i <= index; i++)
		{
			tempQueue[i] = queue[i];
		}

		delete queue;
		queue = tempQueue;
		size *= 2;
	}

	queue[index] = var;
	index++;
}

// Removes information of the queue from the front
template<class T>
void Temp_Queue<T>::Pop()
{
	// finds where the last element in pointer array is stored
	for (int i = 0; i <= index; i++)
	{
		queue[i] = queue[i + 1];
	}

	index--;
}

// Writes out all the contents of the queue
template<class T>
void Temp_Queue<T>::Print()
{
	std::cout << "--Start of Queue--\n";

	for (int i = 0; i < index; i++)
	{
		std::cout << "Element: " << queue[i] << endl;
	}
	std::cout << "--End of Queue--\n\n";
}

// Returns an integer containing the amount of entries
// (not the size of the queue, but how many entries the queue has)
// as an integer
template<class T>
int Temp_Queue<T>::GetSize()
{
	return index;
}

// Informs whether or not a List contains no entries
template<class T>
bool Temp_Queue<T>::IsEmpty()
{
	int size = this->GetSize();

	// true
	if (size == 0)
	{
		return true;
	}

	// false
	else
	{
		return false;
	}
}