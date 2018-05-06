#include <iostream>
#include <fstream>
#include <cstdlib>
#include "GeneralPlayer.h"
#include "OrcPlayer.h"
#include "MagicianPlayer.h"
#include "KnightPlayer.h"

void GPTest()
{
	cout<<"General Player:"<<endl;
	cout<<"Default Constructor:"<<endl;
	GeneralPlayer G1;
	cout<<G1<<endl;
	cout<<"Copy Constructor:"<<endl;
	GeneralPlayer G2(G1);
	cout<<G2<<endl;
	cout<<"Level Constructor:"<<endl;
	GeneralPlayer G3(5);	
	cout<<G3<<endl;
	cout<<"Level-Name Constructor:"<<endl;
	GeneralPlayer G4(3, "G4");
	cout<<G4<<endl;
	cout<<"HP decreased by 3:"<<endl;
	G4.increaseHP(-3);
	cout<<G4<<endl;
	cout<<"MP decreased by 4:"<<endl;
	G4.increaseMP(-4);
	cout<<G4<<endl;
	cout<<"Exp increased by 5:"<<endl;
	G4.increaseExp(5);
	cout<<G4<<endl;
	cout<<"Exp increased by -5:"<<endl;
	G4.increaseExp(-5);
	cout<<G4<<endl;	
	cout<<"HP recovered:"<<endl;
	G4.recoverHP();
	cout<<G4<<endl;
	cout<<"MP recovered:"<<endl;
	G4.recoverMP();
	cout<<G4<<endl;
	cout<<"G4:"<<endl;
	G4.setName("New Name");
	cout<<"Name:"<<G4.getName()<<endl;
	G4.setHP(180);
	cout<<"HP:"<<G4.getHP()<<endl;
	G4.setMP(180);
	cout<<"MP:"<<G4.getMP()<<endl;
	G4.setExp(1000);
	cout<<"Set Exp 1000:"<<endl<<G4<<endl;
	G4.setLevel(10);
	cout<<"Set Level 10:"<<endl<<G4<<endl;
	G4.levelUp();
	cout<<"Level Up:"<<endl<<G4<<endl;
}

void OPTest()
{
	cout<<"Orc Player:"<<endl;
	cout<<"Default Constructor:"<<endl;
	OrcPlayer G1;
	cout<<G1<<endl;
	cout<<"Copy Constructor:"<<endl;
	OrcPlayer G2(G1);
	cout<<G2<<endl;
	cout<<"Level Constructor:"<<endl;
	OrcPlayer G3(5);	
	cout<<G3<<endl;
	cout<<"Level-Name Constructor:"<<endl;
	OrcPlayer G4(3, "G4");
	cout<<G4<<endl;
	cout<<"HP decreased by 3:"<<endl;
	G4.increaseHP(-3);
	cout<<G4<<endl;
	cout<<"MP decreased by 4:"<<endl;
	G4.increaseMP(-4);
	cout<<G4<<endl;
	cout<<"Exp increased by 5:"<<endl;
	G4.increaseExp(5);
	cout<<G4<<endl;
	cout<<"Exp increased by -5:"<<endl;
	G4.increaseExp(-5);
	cout<<G4<<endl;	
	cout<<"HP recovered:"<<endl;
	G4.recoverHP();
	cout<<G4<<endl;
	cout<<"MP recovered:"<<endl;
	G4.recoverMP();
	cout<<G4<<endl;
	cout<<"G4:"<<endl;
	G4.setName("New Name");
	cout<<"Name:"<<G4<<endl;
	G4.setHP(290);
	cout<<"HP:"<<G4<<endl;
	G4.setMP(180);
	cout<<"MP:"<<G4<<endl;
	G4.setExp(1000);
	cout<<"Set Exp 1000:"<<endl<<G4<<endl;
	G4.setLevel(10);
	cout<<"Set Level 10:"<<endl<<G4<<endl;
	G4.levelUp();
	cout<<"Level Up:"<<endl<<G4<<endl;
}

void MPTest()
{
	cout<<"Magician Player:"<<endl;
	cout<<"Default Constructor:"<<endl;
	MagicianPlayer G1;
	cout<<G1<<endl;
	cout<<"Copy Constructor:"<<endl;
	MagicianPlayer G2(G1);
	cout<<G2<<endl;
	cout<<"Level Constructor:"<<endl;
	MagicianPlayer G3(5);	
	cout<<G3<<endl;
	cout<<"Level-Name Constructor:"<<endl;
	MagicianPlayer G4(3, "G4");
	cout<<G4<<endl;
	cout<<"HP decreased by 3:"<<endl;
	G4.increaseHP(-3);
	cout<<G4<<endl;
	cout<<"MP decreased by 4:"<<endl;
	G4.increaseMP(-4);
	cout<<G4<<endl;
	cout<<"Exp increased by 5:"<<endl;
	G4.increaseExp(5);
	cout<<G4<<endl;
	cout<<"Exp increased by -5:"<<endl;
	G4.increaseExp(-5);
	cout<<G4<<endl;	
	cout<<"HP recovered:"<<endl;
	G4.recoverHP();
	cout<<G4<<endl;
	cout<<"MP recovered:"<<endl;
	G4.recoverMP();
	cout<<G4<<endl;
	cout<<"G4:"<<endl;
	G4.setName("New Name");
	cout<<"Name:"<<G4<<endl;
	G4.setHP(290);
	cout<<"HP:"<<G4<<endl;
	G4.setMP(180);
	cout<<"MP:"<<G4<<endl;
	G4.setExp(1000);
	cout<<"Set Exp 1000:"<<endl<<G4<<endl;
	G4.setLevel(10);
	cout<<"Set Level 10:"<<endl<<G4<<endl;
	G4.levelUp();
	cout<<"Level Up:"<<endl<<G4<<endl;
	G4.increaseMP(-G4.getLevel()*10-1);
	cout<<"MP decreased:"<<endl<<G4<<endl;
	G4.pray();
	cout<<"Pray:"<<endl<<G4<<endl;
}

void KPTest()
{
	cout<<"Knight Player:"<<endl;
	cout<<"Default Constructor:"<<endl;
	KnightPlayer G1;
	cout<<G1<<endl;
	cout<<"Copy Constructor:"<<endl;
	KnightPlayer G2(G1);
	cout<<G2<<endl;
	cout<<"Level Constructor:"<<endl;
	KnightPlayer G3(5);	
	cout<<G3<<endl;
	cout<<"Level-Name Constructor:"<<endl;
	KnightPlayer G4(3, "G4");
	cout<<G4<<endl;
	cout<<"HP decreased by 3:"<<endl;
	G4.increaseHP(-3);
	cout<<G4<<endl;
	cout<<"MP decreased by 4:"<<endl;
	G4.increaseMP(-4);
	cout<<G4<<endl;
	cout<<"Exp increased by 5:"<<endl;
	G4.increaseExp(5);
	cout<<G4<<endl;
	cout<<"Exp increased by -5:"<<endl;
	G4.increaseExp(-5);
	cout<<G4<<endl;	
	cout<<"HP recovered:"<<endl;
	G4.recoverHP();
	cout<<G4<<endl;
	cout<<"MP recovered:"<<endl;
	G4.recoverMP();
	cout<<G4<<endl;
	cout<<"G4:"<<endl;
	G4.setName("New Name");
	cout<<"Name:"<<G4<<endl;
	G4.setHP(290);
	cout<<"HP:"<<G4<<endl;
	G4.setMP(180);
	cout<<"MP:"<<G4<<endl;
	G4.setExp(1000);
	cout<<"Set Exp 1000:"<<endl<<G4<<endl;
	G4.setLevel(10);
	cout<<"Set Level 10:"<<endl<<G4<<endl;
	G4.levelUp();
	cout<<"Level Up:"<<endl<<G4<<endl;
	G4.increaseHP(-G4.getLevel()*10-1);
	cout<<"HP decreased:"<<endl<<G4<<endl;
	G4.heal();
	cout<<"Heal:"<<endl<<G4<<endl;
}

using namespace std;

int main()
{
	GPTest();
	OPTest();
	MPTest();
	KPTest();
	system("PAUSE");
	return 0;
}