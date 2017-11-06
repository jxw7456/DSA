#pragma once
template <class dataType>
class Template_Queue
{
public:
	Template_Queue();
	~Template_Queue();
	void TheRuleofThree();
	void Push();
	void Pop();
	void Print();
	int GetSize(int size);
	bool IsEmpty(bool empty);
};

