// StarWars.cpp: caculates and displays instaneated object of abstract base ForceBeing type with the greater power level 

#include <iostream>
using namespace std;

// ForceBeing as abstract class
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

	virtual void setPowerLevel(int level)
	{
		power_level = level;
	}

	virtual void setName(string characterName)
	{
		name = characterName;
	}
	

public:
	virtual int getPowerLevel()
	{
		return power_level;
	}

	virtual string getName()
	{
		return name;
	}

	virtual void setEvil()
	{
		evil = true;
	}

	virtual void setGood()
	{
		evil = false;
	}
};

// Jedi inherits ForceBeing
class Jedi : public ForceBeing
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

// Sith inherits ForceBeing
class Sith : public ForceBeing
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

// Helper methods
static string getWinner(ForceBeing &player1, ForceBeing &player2)
{
	return player1.getPowerLevel() > player2.getPowerLevel() ? player1.getName() : player2.getName();
}

static void printWinner(string winner)
{
	cout << "The winner is: " << winner << endl;
}

// Insteate derived objects and display results
int main()
{
	Sith darthVader = Sith("Darth Vader", 100);
	Jedi lukeSkyWalker = Jedi("Luke Skywalker", 99);
	printWinner(getWinner(darthVader, lukeSkyWalker));
}

