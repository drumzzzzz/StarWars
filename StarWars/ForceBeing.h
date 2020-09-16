#include <iostream>

using namespace std;

class ForceBeing
{
private:
	int power_level;
	string name;
	bool evil;

protected:
	ForceBeing(int level);
	virtual void setPowerLevel(int level);
	virtual void setName(string characterName);

public:
	virtual int getPowerLevel();
	virtual string getName();
	virtual void setEvil();
	void setGood();
};

class Jedi : public ForceBeing
{
public:
	Jedi(string jediName, int level) : ForceBeing(level)
	{
		setName(jediName);
		setGood();
	}

	int getPowerLevel() override;
};

class Sith : public ForceBeing
{
public:
	Sith(string sithName, int level) : ForceBeing(level);
	int getPowerLevel() override;
	string getName() override;
};
