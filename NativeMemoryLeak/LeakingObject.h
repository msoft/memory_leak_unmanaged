#pragma once
#include <string>

class LeakingObject
{
public:
	LeakingObject(int count);	
	~LeakingObject();

	void CreateObjects();

private:
	int count;
	std::string *innerStrings;
};

