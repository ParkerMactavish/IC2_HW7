#include <string>
#include <cmath>
#include <iostream>
#include "GeneralPlayer.h"

using namespace std;

void GeneralPlayer::setName(string Name){this->name=Name;}

void GeneralPlayer::setHP(int HP)
{
	if(HP>=0&&HP<=this->max_hp)
	{
		this->hp=HP;
	}
	else if(this->max_hp<HP)
	{
		this->hp=max_hp;
		cout<<"Warning: HP has exceeded, HP is max."<<endl;
	}
	else
	{
		cout<<"Error: HP of "<<this->getName()<<" is smaller than zero."<<endl;
		this->hp=0;
	}
}

void GeneralPlayer::setMP(int MP)
{
	if(MP>=0&&MP<=this->max_mp)
	{
		this->mp=MP;
	}
	else if(this->max_mp<MP)
	{		
		this->mp=this->max_mp;
		cout<<"Warning: MP has exceeded, MP is max."<<endl;
	}
	else
	{
		cout<<"Error: MP of "<<this->getName()<<" is smaller than zero."<<endl;
		this->mp=0;
	}
}

void GeneralPlayer::setExp(int Exp)
{
	if(Exp>=0)
	{
		if(Exp<ceil(pow(10, log2(this->level))))
		{
			this->exp=ceil(pow(10, log2(this->level)));
		}
		else 
		{
			this->exp=Exp;
			
			while(this->exp>this->lvup_exp)
			{
				this->levelUp();
			}
		}
	}
	else
	{
		cout<<"Error: Exp of "<<this->getName()<<" is smaller than zero."<<endl;
	}
}

void GeneralPlayer::levelUp()
{
	this->setLevel(this->level+1);
}

void GeneralPlayer::setLevel(int Level)
{
	if(Level>0&&(Level>this->level||this->constructFlag==0))
	{
		this->level=Level;
		this->setAttr(Level);		
		this->setExp(ceil(pow(10, log2(this->level))));
	}
	else if(Level<=this->level)
	{
		cout<<"Error: Level of "<<this->getName()<<" is smaller than or equal to previous."<<endl;
	}
	else
	{
		cout<<"Error: Level of "<<this->getName()<<" is smaller than one."<<endl;
	}
}

void GeneralPlayer::setAttr(int Level)
{
	this->max_hp=100+10*Level;
	this->hp=this->max_hp;
	this->max_mp=40+5*Level;
	this->mp=this->max_mp;
	this->lvup_exp=ceil(pow(10, log2(this->level+1)));
	this->attack=20+5*Level;
	this->defense=20+5*Level;
}

GeneralPlayer::GeneralPlayer()
{
	this->constructFlag=0;
	this->setLevel(1);
	this->setName("anonymous");
	this->constructFlag=1;
}

GeneralPlayer::GeneralPlayer(int level)
{
	this->constructFlag=0;
	this->setLevel(level);
	this->setName("anonymous");
	this->constructFlag=1;
}

GeneralPlayer::GeneralPlayer(int level, string name)
{
	this->constructFlag=0;
	this->setLevel(level);
	this->setName(name);
	this->constructFlag=1;
}

GeneralPlayer::GeneralPlayer(const GeneralPlayer& outer)
{
	this->constructFlag=0;
	this->setLevel(outer.getLevel());
	this->setHP(outer.getHP());
	this->setMP(outer.getMP());
	this->setExp(outer.getExp());
	this->setName(outer.getName());
	this->constructFlag=1;
}

string GeneralPlayer::getName() const{return this->name;}

int GeneralPlayer::getHP() const{return this->hp;}

int GeneralPlayer::getMP() const{return this->mp;}

int GeneralPlayer::getExp() const{return this->exp;}

int GeneralPlayer::getLevel() const{return this->level;}

int GeneralPlayer::getAtt() const{return this->attack;}

int GeneralPlayer::getDef() const{return this->defense;}

void GeneralPlayer::increaseHP(int num)
{
	if((this->hp+num)>this->max_hp) this->hp=this->max_hp;
	else if((this->hp+num)<0) cout<<"Error: HP of "<<this->getName()<<" is smaller than zero."<<endl;
	else this->hp+=num;
}

void GeneralPlayer::increaseMP(int num)
{
	if((this->mp+num)>this->max_mp) this->mp=this->max_mp;
	else if((this->mp+num)<0) cout<<"Error: MP of "<<this->getName()<<" is smaller than zero."<<endl;
	else this->mp+=num;
}

void GeneralPlayer::increaseExp(int num)
{
	if(num>=0) this->setExp(this->exp+num);
	else cout<<"Error: the increment of Exp should be a positive integer."<<endl;
}

void GeneralPlayer::recoverHP(){this->setHP(this->max_hp);}

void GeneralPlayer::recoverMP(){this->setMP(this->max_mp);}

ostream& operator<< (ostream& os, GeneralPlayer& rhs)
{
	cout<<"Player: "<<rhs.name<<endl;
	cout<<"Level: "<<rhs.level<<endl;
	cout<<"HP: "<<rhs.hp<<"/"<<rhs.max_hp<<endl;
	cout<<"MP: "<<rhs.mp<<"/"<<rhs.max_mp<<endl;
	cout<<"Exp: "<<rhs.exp<<endl;
	cout<<rhs.lvup_exp-rhs.exp<<" to go to level up"<<endl;
	cout<<"Att: "<<rhs.attack<<endl;
	cout<<"Def: "<<rhs.defense<<endl;
}