// StarWars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

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
	virtual ~ForceBeing() = default;

	virtual int getPowerLevel()
	{
		return power_level;
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

class Jedi : ForceBeing
{
	public:
		Jedi(string jediName, int level) : ForceBeing(level)
		{
			setName(jediName);
			setGood();
		}

		int getPowerLevel()
		{
			return ForceBeing :: getPowerLevel() + 1;
		}
};

class Sith : ForceBeing
{
public:
	Sith(string sithName, int level) : ForceBeing(level)
	{
		setName(sithName);
		setGood();
	}

	int getPowerLevel()
	{
		return ForceBeing::getPowerLevel() + 1;
	}

	string getName()
	{
		return "Sith Lord: " + ForceBeing::getName();
	}
};

class StarWars
{
public :
	static string getWinner(ForceBeing player1, ForceBeing player2)
	{
		return player1.getPowerLevel() > player2.getPowerLevel() ? player1.getName() : player2.getName();
	}

	static void printWinner(string winner)
	{
		cout << "The winner is: " << winner << endl;
	}
};

int main()
{
	Sith darthVader = Sith("Darth Vader", 100);
	Jedi lukeSkyWalker = Jedi("Luke Skywalker", 99);
	StarWars :: printWinner(StarWars :: getWinner(darthVader, lukeSkyWalker));
}

