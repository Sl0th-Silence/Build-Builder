// Main Character Class (Unarmed)
// This will be the parent that sub classes derive from
#include <string>

//Globals
const int SIZE = 6;

class PlayerBase
{
private:
	std::string class_name;
	std::string classes[SIZE] = { "Unarmed", "1-Handed", "2-Handed", "Ranged", "Mage", "Tank" };
protected:
	//Base Information
	std::string name;

	//Leveling
	//========= INTS ===============================================
	int char_level = 1,
		//Level stats
		strength = 0,
		intelligence = 0,
		dexterity = 0, //Strength with dex based weapons increases
		vitality = 0, //HealthPoints
		wisdom = 0; //ManaPool

	//========= Doubles =========================================================================================//
	double
		//Base stats
		//Health Defence
		health_points = 0.0, //Amount of Health
		armor = 0.0, //Rolls for amount of damage negated
		evasion_chance = 0.0, //Rolls for change to dodge attack and negate 100% of damage
		mana_points = 0.0, //Amount of Mana

		//Attack Offence
		base_attack = 0.0, //Attack power based off level only
		attack_speed = 0.0, //Rolls for chance to attack again in succession
		attack_precision = 0.0, //Counter effects evasionChance

		//Elemental
			//Attack
			//Elemental attacks can cause DOT(Damage Over Time)
		base_fire = 0.0, //Burn
		base_cold = 0.0, //Chill
		base_lightning = 0.0, //Shock
		base_blood = 0.0, //Bleed
		base_dark = 0.0, //Cursed

		//Resistance
		//This will block initial elem damage
		base_fire_resistance = 0.0,
		base_cold_resistance = 0.0,
		base_lightning_resistance = 0.0,
		base_blood_resistance = 0.0,
		base_dark_resistance = 0.0;



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

	void switchOnType(int /*int choice of char*/);

};

//As we add more classes, we can set randomized start values or 
//values that we can multiply with depending on the class.
//ie; Armor and strength are higher with tanks but lower with rougues/archers/mages