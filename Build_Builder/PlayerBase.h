#include <iostream>
// Main Character Class (Unarmed)
// This will be the parent that sub classes derive from
// 

//Globals
const int SIZE = 6;

class PlayerBase
{
private:
	std::string class_name;
	std::string classes[SIZE] = {"Unarmed", "1-Handed", "2-Handed", "Ranged", "Mage", "Tank"};
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
		health_points, //Amount of Health
		armor, //Rolls for amount of damage negated
		evasion_chance, //Rolls for change to dodge attack and negate 100% of damage
		mana_points, //Amount of Mana

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
public:
	//Constructors to set chars base
	PlayerBase(); //Default
	PlayerBase(std::string/*Class name*/); //Non-Default

	//Getters
	int getCharLevel() const { return char_level; }
	std::string getCharClass() const { return class_name; }
	
	//Setters
	void setLevelStats(int/*Strength*/,
		int/*Intelligence*/,
		int/*Dexterity*/,
		int/*Vitality*/,
		int/*Wisdom*/);

	void setBaseStats(double/*health_points*/,
		double/*armor*/,
		double/*evasionChance*/,
		double/*ManaPoints*/);

	void setOffensive(double/*base_attack*/,
		double/*attack_speed*/,
		double/*attack_precision*/);

	void setMagic(double/*fire*/,
		double/*cold*/,
		double/*lightning*/,
		double/*blood*/,
		double/*dark*/);
	
	void setResistance(double/*fireRES*/,
		double/*coldRES*/,
		double/*lightningRES*/,
		double/*bloodRES*/,
		double/*darkRES*/);

	//Methods

};

//As we add more classes, we can set randomized start values or 
//values that we can multiply with depending on the class.
//ie; Armor and strength are higher with tanks but lower with rougues/archers/mages