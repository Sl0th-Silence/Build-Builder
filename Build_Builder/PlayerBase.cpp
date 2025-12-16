#include "PlayerBase.h"
#include <iomanip>


//Main Class
//Default Constructor
PlayerBase::PlayerBase()
{
	int choice;
	std::cout << "Welcome! Please select a class:\n" <<
		"1. Unarmed\n2. 1-Handed Combat\n3. 2-Handed Combat\n" <<
		"4. Ranged\n5. Mage\n6. Tank" << std::endl;
	std::cin >> choice;

	while (std::cin.fail() || choice < 1 || choice > 6)
	{
		std::cin.clear();//Clear fail
		std::cin.ignore(80, '\n');//Clear cin
		std::cout << "Please enter a valid option (1-6)";
		std::cin >> choice;
	}
	//After validate
	switch (choice)
	{
		case 1:
		{
			//Unarmed
			setLevelStats(6, 1, 3, 7, 1);
			break;
		}
		case 2:
		{
			//1 handed
			break;
		}
		default:
		{
			//Also unarmed. If no choice is made then you are unarmed
			break;
		}
	}
}

//Non-default Constructor
PlayerBase::PlayerBase(std::string init_class)
{
	for (int ctr = 0; ctr < SIZE; ctr++)
	{
		if (init_class == classes[ctr])
		{
			class_name = classes[ctr]; //Set to that class if exists
			break;
		}
		else
		{
			class_name = classes[0]; //Set to unarmed
		}
	}
	
}

void PlayerBase::setLevelStats(int init_strength,
	int init_intelligence,
	int init_dexterity,
	int init_vitality,
	int init_wisdom)
{
	strength = init_strength;
	intelligence = init_intelligence;
	dexterity = init_dexterity;
	vitality = init_vitality;
	wisdom = init_wisdom;
}

void PlayerBase::setBaseStats(double init_HP,
	double init_armor,
	double init_evasion_chance,
	double init_MP)
{
	health_points = init_HP;
	armor = init_armor;
	evasion_chance = init_evasion_chance;
	mana_points = init_MP;
}

void PlayerBase::setOffensive(double init_base_attack,
	double init_attack_speed,
	double init_attack_precision)
{
	base_attack = init_base_attack;
	attack_speed = init_attack_speed;
	attack_precision = init_attack_precision;
}

void PlayerBase::setMagic(double init_fire,
	double init_cold,
	double init_lightning,
	double init_blood,
	double init_dark)
{
	base_fire = init_fire;
	base_cold = init_cold;
	base_lightning = init_lightning;
	base_blood = init_blood;
	base_dark = init_dark;
}

void PlayerBase::setResistance(double init_fireRes,
	double init_coldRes,
	double init_lightningRes,
	double init_bloodRes,
	double init_darkRes)
{
	base_fire_resistance = init_fireRes;
	base_cold_resistance = init_coldRes;
	base_lightning_resistance = init_lightningRes;
	base_blood_resistance = init_bloodRes;
	base_dark_resistance = init_darkRes;
}