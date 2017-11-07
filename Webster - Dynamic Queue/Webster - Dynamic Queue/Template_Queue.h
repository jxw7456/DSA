// Homework 5
// Professor Maier
// Dynamic Queue
#pragma once
template <class dataType>
class Template_Queue
{
private:
	dataType type;
public:
	Template_Queue(dataType type);
	~Template_Queue();
	void TheRuleofThree();
	void Push();
	void Pop();
	void Print();
	int GetSize(int size);
	bool IsEmpty(bool empty);
};

// Constructor
template<class dataType>
Template_Queue<dataType>::Template_Queue(dataType type)
{
	this->type = type;
	std::cout << "CONSTRUCTED\n" << endl;
}

// Deconstructor
template<class dataType>
Template_Queue<dataType>::~Template_Queue()
{
	std::cout << "DESTROY!\n" << endl;
}

// a collection of pointers needed to define a constuctor that
// allocates one space for the queue
template<class dataType>
void Template_Queue<dataType>::TheRuleofThree()
{
}

// add information to the queue
template<class dataType>
void Template_Queue<dataType>::Push()
{
}

// removes information of the queue from the front
template<class dataType>
void Template_Queue<dataType>::Pop()
{
}

// writes out the contents of the queue
template<class dataType>
void Template_Queue<dataType>::Print()
{
	std::cout << "Queue contents: " << type << endl;
}

// returns an integer containing the amount of entries
// (not the size of the queue, but how many entries the queue has)
// as an integer
template<class dataType>
int Template_Queue<dataType>::GetSize(int size)
{
	return 0;
}

// informs whether or not a List contains no entries
template<class dataType>
bool Template_Queue<dataType>::IsEmpty(bool empty)
{
	return false;
}