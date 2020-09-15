// StarWars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    std::cout << "Hello World!\n";
}

class ForceBeing
{
private:
	int power_level;
	string name;
	bool evil;
	
protected:
	ForceBeing(int level)
	{
		power_level = level;
	}

	void setPowerLevel(int level)
	{
		power_level = level;
	}

	void setName(string characterName)
	{
		name = characterName;
	}
	

public:
	virtual int getPowerLevel()
	{
		
	}

	string getName()
	{
		return name;
	}

	void setEvil()
	{
		evil = true;
	}

	void setGood()
	{
		evil = false;
	}
	
};
