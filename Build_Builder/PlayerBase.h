#include <iostream>
// Main Character Class (Unarmed)
// This will be the parent that sub classes derive from
// 

class PlayerBase
{
private:
	std::string class_name;
protected:
	//Base Information
	std::string name;
	
	//Leveling
	//========= INTS ===============================================
	int char_level,
	//Level stats
		strength,
		intelligence,
		dexterity, //Strength with dex based weapons increases
		vitality, //HealthPoints
		wisdom; //ManaPool

	//========= Doubles =========================================================================================//
	double
		//Base stats
		//Health Defence
		mana_points, //Amount of Mana
		health_points, //Amount of Health
		armor, //Rolls for amount of damage negated
		evasion_chance, //Rolls for change to dodge attack and negate 100% of damage

		//Attack Offence
		base_attack, //Attack power based off level only
		attack_speed, //Rolls for chance to attack again in succession
		attack_precision, //Counter effects evasionChance

		//Elemental
			//Attack
			//Elemental attacks can cause DOT(Damage Over Time)
		base_fire, //Burn
		base_cold, //Chill
		base_lightning, //Shock
		base_blood, //Bleed
		base_dark, //Cursed

		//Resistance
		//This will block initial elem damage
		base_fire_resistance,
		base_cold_resistance,
		base_lightning_resistance,
		base_blood_resistance,
		base_dark_resistance;



	//Curses
		
		
	//========== End of doubles =================================================================================//

	//After all of the base vars are set, we can add the methods
	//Constructors to set chars base
	PlayerBase();

	//Getters

	//Setters

	//Methods


public:

};

//As we add more classes, we can set randomized start values or 
//values that we can multiply with depending on the class.
//ie; Armor and strength are higher with tanks but lower with rougues/archers/mages