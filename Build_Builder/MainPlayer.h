#include <iostream>
// Main Character Class (Unarmed)
// This will be the parent that sub classes derive from
// 

class MainPlayer
{
private:
	std::string class_name;
protected:
	//Base Information
	std::string name;
	int char_level;


	//========= Doubles =========================================================================================//
	double
		//Base stats
		//Health Defence
		health_points, //Amount of Health
		armor, //Rolls for amount of damage negated
		evasion_chance, //Rolls for change to dodge attack and negate 100% of damage

		//Attack Offence
		base_attack, //Attack power based off level only
		attack_speed, //Rolls for chance to attack again in succession
		attack_precision, //Counter effects evasionChance

		//Elemental
			//Attack
		base_fire,
		base_cold,
		base_lightning,
		base_blood,
		base_dark,

		//Resistance
		base_fire_resistance,
		base_cold_resistance,
		base_lightning_resistance,
		base_blood_resistance,
		base_dark_resistance;



	//Curses
		
		
	//========== End of doubles =================================================================================//
	

public:

};