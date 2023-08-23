//class Pokemon {
//	//HP 攻击 防御 特攻 特防 速度
//	//等级 属性
//	//技能
//};
//
////妙蛙种子
//class Bulbasaur {
//
//};
//
////小火龙
//class Charmander {
//
//};
//
////杰尼龟
//class Squirtle {
//
//};
//
////皮卡丘
//class Pikachu {
//
//};
//
////绿毛虫
//class Caterpie {
//
//};
//
////波波
//class Pidgey {
//
//};
//
////可达鸭
//class Psyduck {
//
//};
//
////鬼斯
//class Gastly {
//
//};

#include <iostream>
#include "Pokemon.h"

using namespace std;

Pokemon::Pokemon() {}

Pokemon::~Pokemon() {}

string Pokemon::getName() {
	return name;
}



string Pokemon::getType() {
	return type;
}

void Pokemon::setNumber(int whatNumber) {
	number = whatNumber;
}

int Pokemon::getNumber() {
	return number;
}

int Pokemon::getHealth_max() {
	return health;
}

void Pokemon::setHealth_max(int hp_m) {
	health_max = hp_m;

}

int Pokemon::getHealth() {
	return health;
}

void Pokemon::setHealth(int hp) {
	health = hp;

}

int Pokemon::getSpa() {
	return spa;
}

void Pokemon::setSpa(int Spa) {
	spa = Spa;

}

int Pokemon::getSpd() {
	return spd;
}

void Pokemon::setSpd(int Spd) {
	spd = Spd;

}

int Pokemon::getAttack() {
	return attack;
}

void Pokemon::setAttack(int a) {
	attack = a;

}

int Pokemon::getDefend() {
	return defend;
}

void Pokemon::setDefend(int d) {
	defend = d;
}

int Pokemon::getSpe() {
	return spe;
}

void Pokemon::setSpe(int Spe) {
	spe = Spe;
}

int Pokemon::getLevel() {
	return level;
}

void Pokemon::setLevel(int Level) {
	level = Level;
}

int* Pokemon::getGoodsId() {
	return goodsId;
}

int* Pokemon::getGoodsNum() {
	return goodsNum;
}

int Pokemon::getExp() {
	return exp;
}

int Pokemon::getMoney() {
	return money;
}

double Pokemon::useSkill() {
	return getAttack() * 1.5;
}

void Pokemon::showPokemon() {
	cout << endl << "当前怪物属性:" << '\t';
	cout << "名称:" << name << '\t' << endl;
	cout << "生命值:" << health << "/" << health_max << '\t';
	cout << "特攻:" << spa << '\t';
	cout << "速度:" << spe << '\t';
	cout << "特防:" << spd << '\t';
	cout << "攻击:" << attack << '\t';
	cout << "等级:" << level << '\t';
	cout << "防御:" << defend << endl;
}



Pokemon_File::Pokemon_File(int whatNumber) {

	setNumber(whatNumber);
	switch (whatNumber) {
	case 1: {
		name = "杰尼龟";
		number = 1;
		type = "water";
		health = 12 + 4 * level;
		health_max = 12 + 4 * level;
		spa = 6 + 4 * level;
		spd = 6 + 4 * level;
		attack = 6 + 4 * level;
		defend = 6 + 4 * level;
		spe = 6 + 4 * level;

		goodsNum[0] = 2;		//对应每件物品的数量
		goodsNum[1] = 1;
		goodsNum[2] = 0;
		goodsNum[3] = 0;
		goodsId[0] = 0;	//打死该怪物会掉落的物品
		goodsId[1] = 1;
		goodsId[2] = -1;	//空，代表只有以上两件
		goodsId[3] = -1;

		exp = 3 * level;		//打死该怪物得到的经验
		money = 30;		//打死该怪物得到的金钱
		break;
	}
	case 2: {
		name = "卡咪龟";
		number = 2;
		type = "water";
		health = 30 + 5 * level;
		health_max = 30 + 5 * level;
		spa = 15 + 5 * level;
		spd = 15 + 5 * level;
		attack = 15 + 5 * level;
		defend = 15 + 5 * level;
		spe = 15 + 5 * level;



		exp = 5 * level;		//打死该怪物得到的经验
		money = 200;		//打死该怪物得到的金钱
		break;
	}
	case 3: {
		name = "水箭龟";
		number = 3;
		type = "water";
		health = 50 + 6 * level;
		health_max = 50 + 6 * level;
		spa = 50 + 6 * level;
		spd = 50 + 6 * level;
		attack = 50 + 6 * level;
		defend = 50 + 6 * level;
		spe = 50 + 6 * level;



		exp = 7 * level;		//打死该怪物得到的经验
		money = 50;		//打死该怪物得到的金钱
		break;
	}
	case 4: {
		name = "小火龙";
		number = 4;
		type = "fire";
		health = 12 + 4 * level;
		health_max = 12 + 4 * level;
		spa = 6 + 4 * level;
		spd = 6 + 4 * level;
		attack = 6 + 4 * level;
		defend = 6 + 4 * level;
		spe = 6 + 4 * level;



		exp = 3 * level;		//打死该怪物得到的经验
		money = 30;		//打死该怪物得到的金钱
		break;
	}
	case 5: {
		name = "火恐龙";
		number = 5;
		type = "fire";
		health = 30 + 5 * level;
		health_max = 30 + 5 * level;
		spa = 15 + 5 * level;
		spd = 15 + 5 * level;
		attack = 15 + 5 * level;
		defend = 15 + 5 * level;
		spe = 15 + 5 * level;



		exp = 5 * level;		//打死该怪物得到的经验
		money = 200;		//打死该怪物得到的金钱
		break;
	}
	case 6: {
		name = "喷火龙";
		number = 6;
		type = "fire";
		health = 50 + 6 * level;
		health_max = 50 + 6 * level;
		spa = 50 + 6 * level;
		spd = 50 + 6 * level;
		attack = 50 + 6 * level;
		defend = 50 + 6 * level;
		spe = 50 + 6 * level;



		exp = 7 * level;		//打死该怪物得到的经验
		money = 50;		//打死该怪物得到的金钱
		break;
	}
	case 7: {
		name = "妙蛙种子";
		number = 7;
		type = "grass";
		health = 12 + 4 * level;
		health_max = 12 + 4 * level;
		spa = 6 + 4 * level;
		spd = 6 + 4 * level;
		attack = 6 + 4 * level;
		defend = 6 + 4 * level;
		spe = 6 + 4 * level;

		goodsNum[0] = 2;		//对应每件物品的数量
		goodsNum[1] = 1;
		goodsNum[2] = 0;
		goodsNum[3] = 0;
		goodsId[0] = 0;	//打死该怪物会掉落的物品
		goodsId[1] = 1;
		goodsId[2] = -1;	//空，代表只有以上两件
		goodsId[3] = -1;

		exp = 3 * level;		//打死该怪物得到的经验
		money = 30;		//打死该怪物得到的金钱
		break;
	}
	case 8: {
		name = "妙蛙草";
		number = 8;
		type = "grass";
		health = 30 + 5 * level;
		health_max = 30 + 5 * level;
		spa = 15 + 5 * level;
		spd = 15 + 5 * level;
		attack = 15 + 5 * level;
		defend = 15 + 5 * level;
		spe = 15 + 5 * level;



		exp = 5 * level;		//打死该怪物得到的经验
		money = 200;		//打死该怪物得到的金钱
		break;
	}
	case 9: {
		name = "妙蛙花";
		number = 9;
		type = "grass";
		health = 50 + 6 * level;
		health_max = 50 + 6 * level;
		spa = 50 + 6 * level;
		spd = 50 + 6 * level;
		attack = 50 + 6 * level;
		defend = 50 + 6 * level;
		spe = 50 + 6 * level;



		exp = 7 * level;		//打死该怪物得到的经验
		money = 50;		//打死该怪物得到的金钱
		break;
	}
	case 10: {
		name = "鬼斯";
		number = 10;
		type = "ghost";
		health = 12 + 4 * level;
		health_max = 12 + 4 * level;
		spa = 6 + 4 * level;
		spd = 6 + 4 * level;
		attack = 6 + 4 * level;
		defend = 6 + 4 * level;
		spe = 6 + 4 * level;

		goodsNum[0] = 2;		//对应每件物品的数量
		goodsNum[1] = 1;
		goodsNum[2] = 0;
		goodsNum[3] = 0;
		goodsId[0] = 0;	//打死该怪物会掉落的物品
		goodsId[1] = 1;
		goodsId[2] = -1;	//空，代表只有以上两件
		goodsId[3] = -1;

		exp = 3 * level;		//打死该怪物得到的经验
		money = 30;		//打死该怪物得到的金钱
		break;
	}
	case 11: {
		name = "鬼斯通";
		number = 11;
		type = "ghost";
		health = 30 + 5 * level;
		health_max = 30 + 5 * level;
		spa = 15 + 5 * level;
		spd = 15 + 5 * level;
		attack = 15 + 5 * level;
		defend = 15 + 5 * level;
		spe = 15 + 5 * level;



		exp = 5 * level;		//打死该怪物得到的经验
		money = 200;		//打死该怪物得到的金钱
		break;
	}
	case 12: {
		name = "耿鬼";
		number = 12;
		type = "ghost";
		health = 50 + 6 * level;
		health_max = 50 + 6 * level;
		spa = 50 + 6 * level;
		spd = 50 + 6 * level;
		attack = 50 + 6 * level;
		defend = 50 + 6 * level;
		spe = 50 + 6 * level;



		exp = 7 * level;		//打死该怪物得到的经验
		money = 50;		//打死该怪物得到的金钱
		break;
	}

	case 13: {
		name = "鲤鱼王";
		number = 13;
		type = "water";
		health = 12 + 1 * level;
		health_max = 12 + 1 * level;
		spa = 6 + 1 * level;
		spd = 6 + 1 * level;
		attack = 6 + 1 * level;
		defend = 6 + 1 * level;
		spe = 6 + 1 * level;



		exp = 3 * level;		//打死该怪物得到的经验
		money = 30;		//打死该怪物得到的金钱
		break;
	}
	case 14: {
		name = "暴鲤龙";
		number = 14;
		type = "water";
		health = 50 + 7 * level;
		health_max = 50 + 7 * level;
		spa = 25 + 7 * level;
		spd = 25 + 7 * level;
		attack = 25 + 7 * level;
		defend = 25 + 7 * level;
		spe = 25 + 7 * level;



		exp = 5 * level;		//打死该怪物得到的经验
		money = 200;		//打死该怪物得到的金钱
		break;
	}
	case 15: {
		name = "绿毛虫";
		number = 15;
		type = "bug";
		health = 12 + 4 * level;
		health_max = 12 + 4 * level;
		spa = 6 + 4 * level;
		spd = 6 + 4 * level;
		attack = 6 + 4 * level;
		defend = 6 + 4 * level;
		spe = 6 + 4 * level;

		goodsNum[0] = 2;		//对应每件物品的数量
		goodsNum[1] = 1;
		goodsNum[2] = 0;
		goodsNum[3] = 0;
		goodsId[0] = 0;	//打死该怪物会掉落的物品
		goodsId[1] = 1;
		goodsId[2] = -1;	//空，代表只有以上两件
		goodsId[3] = -1;

		exp = 3 * level;		//打死该怪物得到的经验
		money = 30;		//打死该怪物得到的金钱
		break;
	}
	case 16: {
		name = "铁甲蛹";
		number = 16;
		type = "bug";
		health = 30 + 5 * level;
		health_max = 30 + 5 * level;
		spa = 15 + 5 * level;
		spd = 15 + 5 * level;
		attack = 15 + 5 * level;
		defend = 15 + 5 * level;
		spe = 15 + 5 * level;



		exp = 5 * level;		//打死该怪物得到的经验
		money = 200;		//打死该怪物得到的金钱
		break;
	}
	case 17: {
		name = "巴大蝶";
		number = 17;
		type = "bug";
		health = 50 + 6 * level;
		health_max = 50 + 6 * level;
		spa = 50 + 6 * level;
		spd = 50 + 6 * level;
		attack = 50 + 6 * level;
		defend = 50 + 6 * level;
		spe = 50 + 6 * level;



		exp = 7 * level;		//打死该怪物得到的经验
		money = 50;		//打死该怪物得到的金钱
		break;
	}
	case 18: {
		name = "波波";
		number = 18;
		type = "fly";
		health = 12 + 4 * level;
		health_max = 12 + 4 * level;
		spa = 6 + 4 * level;
		spd = 6 + 4 * level;
		attack = 6 + 4 * level;
		defend = 6 + 4 * level;
		spe = 6 + 4 * level;

		goodsNum[0] = 2;		//对应每件物品的数量
		goodsNum[1] = 1;
		goodsNum[2] = 0;
		goodsNum[3] = 0;
		goodsId[0] = 0;	//打死该怪物会掉落的物品
		goodsId[1] = 1;
		goodsId[2] = -1;	//空，代表只有以上两件
		goodsId[3] = -1;

		exp = 3 * level;		//打死该怪物得到的经验
		money = 30;		//打死该怪物得到的金钱
		break;
	}
	case 19: {
		name = "比比鸟";
		number = 19;
		type = "fly";
		health = 30 + 5 * level;
		health_max = 30 + 5 * level;
		spa = 15 + 5 * level;
		spd = 15 + 5 * level;
		attack = 15 + 5 * level;
		defend = 15 + 5 * level;
		spe = 15 + 5 * level;



		exp = 5 * level;		//打死该怪物得到的经验
		money = 200;		//打死该怪物得到的金钱
		break;
	}
	case 20: {
		name = "大比鸟";
		number = 20;
		type = "fly";
		health = 50 + 6 * level;
		health_max = 50 + 6 * level;
		spa = 50 + 6 * level;
		spd = 50 + 6 * level;
		attack = 50 + 6 * level;
		defend = 50 + 6 * level;
		spe = 50 + 6 * level;



		exp = 7 * level;		//打死该怪物得到的经验
		money = 50;		//打死该怪物得到的金钱
		break;
	}
	case 21: {
		name = "绿毛虫?";
		number = 21;
		type = "dragon";
		health = 12 + 1 * level;
		health_max = 12 + 1 * level;
		spa = 6 + 1 * level;
		spd = 6 + 1 * level;
		attack = 6 + 1 * level;
		defend = 6 + 1 * level;
		spe = 6 + 1 * level;



		exp = 0;		//打死该怪物得到的经验
		money = 0;		//打死该怪物得到的金钱
		break;
	}
	case 22: {
		name = "裂空座";
		number = 22;
		type = "dragon";
		health = 200 + 15 * level;
		health_max = 200 + 15 * level;
		spa = 100 + 15 * level;
		spd = 100 + 15 * level;
		attack = 100 + 15 * level;
		defend = 100 + 15 * level;
		spe = 100 + 15 * level;



		exp = 0;		//打死该怪物得到的经验1
		money = 0;		//打死该怪物得到的金钱
		break;
	}



	default:break;
	}
}