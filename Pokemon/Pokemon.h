#ifndef POKEMON_H
#define POKEMON_H

#include <string>

using namespace std;

class Pokemon {

public:
	Pokemon();
	~Pokemon();
	string getName();
	
	string getType();

	int getNumber();
	void setNumber(int Number);

	int getHealth_max();
	void setHealth_max(int hp_m);

	int getHealth();
	void setHealth(int hp);

	int getSpa();
	void setSpa(int Spa);

	int getSpd();
	void setSpd(int Spd);

	int getAttack();
	void setAttack(int a);

	int getDefend();
	void setDefend(int d);

	int getSpe();
	void setSpe(int spe);

	int getLevel();
	void setLevel(int Level);


	int* getGoodsId();		//掉落物品
	int* getGoodsNum();		//掉落物品数量
	int getExp();			//增加经验
	int getMoney();			//增加金钱

	double useSkill();	//使用技能，返回伤害数值

	void showPokemon();

	void showEnemy();

protected:

	string name;
	string type;
	int number;
	int health_max;
	int health;
	int spa;
	int spd;
	int attack;
	int defend;
	int level;
	int spe;

	int goodsId[4]; //打死怪物会掉落的物品
	int goodsNum[4];//打死怪物会掉落的物品数量
	int exp;  //打死怪物增加的经验
	int money;  //打死怪物增加的金钱
};

class Pokemon_File :public Pokemon { //大怪
public:
	Pokemon_File();
	Pokemon_File(int type);
	~Pokemon_File() {};

};


#endif
