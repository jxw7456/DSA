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

