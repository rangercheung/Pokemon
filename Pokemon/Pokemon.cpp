//class Pokemon {
//	//HP ���� ���� �ع� �ط� �ٶ�
//	//�ȼ� ����
//	//����
//};
//
////��������
//class Bulbasaur {
//
//};
//
////С����
//class Charmander {
//
//};
//
////�����
//class Squirtle {
//
//};
//
////Ƥ����
//class Pikachu {
//
//};
//
////��ë��
//class Caterpie {
//
//};
//
////����
//class Pidgey {
//
//};
//
////�ɴ�Ѽ
//class Psyduck {
//
//};
//
////��˹
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
	cout << endl << "��ǰ��������:" << '\t';
	cout << "����:" << name << '\t' << endl;
	cout << "����ֵ:" << health << "/" << health_max << '\t';
	cout << "�ع�:" << spa << '\t';
	cout << "�ٶ�:" << spe << '\t';
	cout << "�ط�:" << spd << '\t';
	cout << "����:" << attack << '\t';
	cout << "�ȼ�:" << level << '\t';
	cout << "����:" << defend << endl;
}



Pokemon_File::Pokemon_File(int whatNumber) {

	setNumber(whatNumber);
	switch (whatNumber) {
	case 1: {
		name = "�����";
		number = 1;
		type = "water";
		health = 12 + 4 * level;
		health_max = 12 + 4 * level;
		spa = 6 + 4 * level;
		spd = 6 + 4 * level;
		attack = 6 + 4 * level;
		defend = 6 + 4 * level;
		spe = 6 + 4 * level;

		goodsNum[0] = 2;		//��Ӧÿ����Ʒ������
		goodsNum[1] = 1;
		goodsNum[2] = 0;
		goodsNum[3] = 0;
		goodsId[0] = 0;	//�����ù����������Ʒ
		goodsId[1] = 1;
		goodsId[2] = -1;	//�գ�����ֻ����������
		goodsId[3] = -1;

		exp = 3 * level;		//�����ù���õ��ľ���
		money = 30;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 2: {
		name = "�����";
		number = 2;
		type = "water";
		health = 30 + 5 * level;
		health_max = 30 + 5 * level;
		spa = 15 + 5 * level;
		spd = 15 + 5 * level;
		attack = 15 + 5 * level;
		defend = 15 + 5 * level;
		spe = 15 + 5 * level;



		exp = 5 * level;		//�����ù���õ��ľ���
		money = 200;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 3: {
		name = "ˮ����";
		number = 3;
		type = "water";
		health = 50 + 6 * level;
		health_max = 50 + 6 * level;
		spa = 50 + 6 * level;
		spd = 50 + 6 * level;
		attack = 50 + 6 * level;
		defend = 50 + 6 * level;
		spe = 50 + 6 * level;



		exp = 7 * level;		//�����ù���õ��ľ���
		money = 50;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 4: {
		name = "С����";
		number = 4;
		type = "fire";
		health = 12 + 4 * level;
		health_max = 12 + 4 * level;
		spa = 6 + 4 * level;
		spd = 6 + 4 * level;
		attack = 6 + 4 * level;
		defend = 6 + 4 * level;
		spe = 6 + 4 * level;



		exp = 3 * level;		//�����ù���õ��ľ���
		money = 30;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 5: {
		name = "�����";
		number = 5;
		type = "fire";
		health = 30 + 5 * level;
		health_max = 30 + 5 * level;
		spa = 15 + 5 * level;
		spd = 15 + 5 * level;
		attack = 15 + 5 * level;
		defend = 15 + 5 * level;
		spe = 15 + 5 * level;



		exp = 5 * level;		//�����ù���õ��ľ���
		money = 200;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 6: {
		name = "�����";
		number = 6;
		type = "fire";
		health = 50 + 6 * level;
		health_max = 50 + 6 * level;
		spa = 50 + 6 * level;
		spd = 50 + 6 * level;
		attack = 50 + 6 * level;
		defend = 50 + 6 * level;
		spe = 50 + 6 * level;



		exp = 7 * level;		//�����ù���õ��ľ���
		money = 50;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 7: {
		name = "��������";
		number = 7;
		type = "grass";
		health = 12 + 4 * level;
		health_max = 12 + 4 * level;
		spa = 6 + 4 * level;
		spd = 6 + 4 * level;
		attack = 6 + 4 * level;
		defend = 6 + 4 * level;
		spe = 6 + 4 * level;

		goodsNum[0] = 2;		//��Ӧÿ����Ʒ������
		goodsNum[1] = 1;
		goodsNum[2] = 0;
		goodsNum[3] = 0;
		goodsId[0] = 0;	//�����ù����������Ʒ
		goodsId[1] = 1;
		goodsId[2] = -1;	//�գ�����ֻ����������
		goodsId[3] = -1;

		exp = 3 * level;		//�����ù���õ��ľ���
		money = 30;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 8: {
		name = "���ܲ�";
		number = 8;
		type = "grass";
		health = 30 + 5 * level;
		health_max = 30 + 5 * level;
		spa = 15 + 5 * level;
		spd = 15 + 5 * level;
		attack = 15 + 5 * level;
		defend = 15 + 5 * level;
		spe = 15 + 5 * level;



		exp = 5 * level;		//�����ù���õ��ľ���
		money = 200;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 9: {
		name = "���ܻ�";
		number = 9;
		type = "grass";
		health = 50 + 6 * level;
		health_max = 50 + 6 * level;
		spa = 50 + 6 * level;
		spd = 50 + 6 * level;
		attack = 50 + 6 * level;
		defend = 50 + 6 * level;
		spe = 50 + 6 * level;



		exp = 7 * level;		//�����ù���õ��ľ���
		money = 50;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 10: {
		name = "��˹";
		number = 10;
		type = "ghost";
		health = 12 + 4 * level;
		health_max = 12 + 4 * level;
		spa = 6 + 4 * level;
		spd = 6 + 4 * level;
		attack = 6 + 4 * level;
		defend = 6 + 4 * level;
		spe = 6 + 4 * level;

		goodsNum[0] = 2;		//��Ӧÿ����Ʒ������
		goodsNum[1] = 1;
		goodsNum[2] = 0;
		goodsNum[3] = 0;
		goodsId[0] = 0;	//�����ù����������Ʒ
		goodsId[1] = 1;
		goodsId[2] = -1;	//�գ�����ֻ����������
		goodsId[3] = -1;

		exp = 3 * level;		//�����ù���õ��ľ���
		money = 30;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 11: {
		name = "��˹ͨ";
		number = 11;
		type = "ghost";
		health = 30 + 5 * level;
		health_max = 30 + 5 * level;
		spa = 15 + 5 * level;
		spd = 15 + 5 * level;
		attack = 15 + 5 * level;
		defend = 15 + 5 * level;
		spe = 15 + 5 * level;



		exp = 5 * level;		//�����ù���õ��ľ���
		money = 200;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 12: {
		name = "����";
		number = 12;
		type = "ghost";
		health = 50 + 6 * level;
		health_max = 50 + 6 * level;
		spa = 50 + 6 * level;
		spd = 50 + 6 * level;
		attack = 50 + 6 * level;
		defend = 50 + 6 * level;
		spe = 50 + 6 * level;



		exp = 7 * level;		//�����ù���õ��ľ���
		money = 50;		//�����ù���õ��Ľ�Ǯ
		break;
	}

	case 13: {
		name = "������";
		number = 13;
		type = "water";
		health = 12 + 1 * level;
		health_max = 12 + 1 * level;
		spa = 6 + 1 * level;
		spd = 6 + 1 * level;
		attack = 6 + 1 * level;
		defend = 6 + 1 * level;
		spe = 6 + 1 * level;



		exp = 3 * level;		//�����ù���õ��ľ���
		money = 30;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 14: {
		name = "������";
		number = 14;
		type = "water";
		health = 50 + 7 * level;
		health_max = 50 + 7 * level;
		spa = 25 + 7 * level;
		spd = 25 + 7 * level;
		attack = 25 + 7 * level;
		defend = 25 + 7 * level;
		spe = 25 + 7 * level;



		exp = 5 * level;		//�����ù���õ��ľ���
		money = 200;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 15: {
		name = "��ë��";
		number = 15;
		type = "bug";
		health = 12 + 4 * level;
		health_max = 12 + 4 * level;
		spa = 6 + 4 * level;
		spd = 6 + 4 * level;
		attack = 6 + 4 * level;
		defend = 6 + 4 * level;
		spe = 6 + 4 * level;

		goodsNum[0] = 2;		//��Ӧÿ����Ʒ������
		goodsNum[1] = 1;
		goodsNum[2] = 0;
		goodsNum[3] = 0;
		goodsId[0] = 0;	//�����ù����������Ʒ
		goodsId[1] = 1;
		goodsId[2] = -1;	//�գ�����ֻ����������
		goodsId[3] = -1;

		exp = 3 * level;		//�����ù���õ��ľ���
		money = 30;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 16: {
		name = "����Ӽ";
		number = 16;
		type = "bug";
		health = 30 + 5 * level;
		health_max = 30 + 5 * level;
		spa = 15 + 5 * level;
		spd = 15 + 5 * level;
		attack = 15 + 5 * level;
		defend = 15 + 5 * level;
		spe = 15 + 5 * level;



		exp = 5 * level;		//�����ù���õ��ľ���
		money = 200;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 17: {
		name = "�ʹ��";
		number = 17;
		type = "bug";
		health = 50 + 6 * level;
		health_max = 50 + 6 * level;
		spa = 50 + 6 * level;
		spd = 50 + 6 * level;
		attack = 50 + 6 * level;
		defend = 50 + 6 * level;
		spe = 50 + 6 * level;



		exp = 7 * level;		//�����ù���õ��ľ���
		money = 50;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 18: {
		name = "����";
		number = 18;
		type = "fly";
		health = 12 + 4 * level;
		health_max = 12 + 4 * level;
		spa = 6 + 4 * level;
		spd = 6 + 4 * level;
		attack = 6 + 4 * level;
		defend = 6 + 4 * level;
		spe = 6 + 4 * level;

		goodsNum[0] = 2;		//��Ӧÿ����Ʒ������
		goodsNum[1] = 1;
		goodsNum[2] = 0;
		goodsNum[3] = 0;
		goodsId[0] = 0;	//�����ù����������Ʒ
		goodsId[1] = 1;
		goodsId[2] = -1;	//�գ�����ֻ����������
		goodsId[3] = -1;

		exp = 3 * level;		//�����ù���õ��ľ���
		money = 30;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 19: {
		name = "�ȱ���";
		number = 19;
		type = "fly";
		health = 30 + 5 * level;
		health_max = 30 + 5 * level;
		spa = 15 + 5 * level;
		spd = 15 + 5 * level;
		attack = 15 + 5 * level;
		defend = 15 + 5 * level;
		spe = 15 + 5 * level;



		exp = 5 * level;		//�����ù���õ��ľ���
		money = 200;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 20: {
		name = "�����";
		number = 20;
		type = "fly";
		health = 50 + 6 * level;
		health_max = 50 + 6 * level;
		spa = 50 + 6 * level;
		spd = 50 + 6 * level;
		attack = 50 + 6 * level;
		defend = 50 + 6 * level;
		spe = 50 + 6 * level;



		exp = 7 * level;		//�����ù���õ��ľ���
		money = 50;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 21: {
		name = "��ë��?";
		number = 21;
		type = "dragon";
		health = 12 + 1 * level;
		health_max = 12 + 1 * level;
		spa = 6 + 1 * level;
		spd = 6 + 1 * level;
		attack = 6 + 1 * level;
		defend = 6 + 1 * level;
		spe = 6 + 1 * level;



		exp = 0;		//�����ù���õ��ľ���
		money = 0;		//�����ù���õ��Ľ�Ǯ
		break;
	}
	case 22: {
		name = "�ѿ���";
		number = 22;
		type = "dragon";
		health = 200 + 15 * level;
		health_max = 200 + 15 * level;
		spa = 100 + 15 * level;
		spd = 100 + 15 * level;
		attack = 100 + 15 * level;
		defend = 100 + 15 * level;
		spe = 100 + 15 * level;



		exp = 0;		//�����ù���õ��ľ���1
		money = 0;		//�����ù���õ��Ľ�Ǯ
		break;
	}



	default:break;
	}
}