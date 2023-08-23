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


	int* getGoodsId();		//������Ʒ
	int* getGoodsNum();		//������Ʒ����
	int getExp();			//���Ӿ���
	int getMoney();			//���ӽ�Ǯ

	double useSkill();	//ʹ�ü��ܣ������˺���ֵ

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

	int goodsId[4]; //���������������Ʒ
	int goodsNum[4];//���������������Ʒ����
	int exp;  //�����������ӵľ���
	int money;  //�����������ӵĽ�Ǯ
};

class Pokemon_File :public Pokemon { //���
public:
	Pokemon_File();
	Pokemon_File(int type);
	~Pokemon_File() {};

};


#endif
