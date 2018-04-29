#ifndef GENERALPLAYER_H_
#define GENERALPLAYER_H_

#include <string>
#include <iostream>

using namespace std;

class GeneralPlayer
{
	public:		
		void setName(string);
		void setHP(int);
		void setMP(int);
		void setExp(int);
		void setLevel(int);
		GeneralPlayer();
		GeneralPlayer(int);
		GeneralPlayer(int, string);
		GeneralPlayer(const GeneralPlayer&);
		
		string getName() const;
		int getHP() const;
		int getMP() const;
		int getExp() const;
		int getLevel() const;
		int getAtt() const;
		int getDef() const;
		void increaseHP(int);
		void increaseMP(int);
		void increaseExp(int);
		void recoverHP();
		void recoverMP();
		void levelUp();
		friend ostream& operator<< (ostream&, GeneralPlayer&);
	
	protected:		
		int level;
		int attack;
		int defense;
		int max_hp;
		int max_mp;		
		int lvup_exp;
		int constructFlag;
	
	private:
		string name;
		int hp;
		int mp;
		int exp;
		void setAttr(int);
};


#endif