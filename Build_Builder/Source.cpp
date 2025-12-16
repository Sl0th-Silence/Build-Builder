#include <iostream>
#include <random>
#include <cassert>

#include "PlayerBase.h"

//Jay Mills
//Build-Builder Source
/*
* ========== Concept ===========
* To make a build to go against other builds
* Once I make the base stats, we can use those to generate random enemies
* The player will be able to create his own char via constructor or prompts.
* Lets start with constructor first
* 
* TODO
* ========== CLASSES ===========
* - Create the player class
* - Enemy class
* - Attack class (Unarmed, Ranged, 1-Handed Weapon, 2-Handed Weapon)
* - Elemental class (Ice, Fire, Lightning, Dark, Blood)
* - Defence class (Shield, Resistances, Evasion)
* - Buffs (Buff to defence or Attack, buff to evasion)
* - Items (Potions(Health, Mana), Elixers(Buff, Defence))
* - Attack Speed (Accuracy, Chance To Dodge(evasion))
* 
* Need to make the player class have all sorts of stats and maybe array for inventory.
* These should be selected depending on how well your higher stats are;
*	If your strength is high, you can roll for a higher damage hit or AOE type attack
*	If your Attack speed is high, you might be able to get a double hit
* 
* Random Ideas
* If your health is below a certain percentage, you check to see if you have a health potion, if not, you keep attacking
* Same with the enemies, they can get random items too

*/

int main()
{
	//PlayerBase* playerOne = new PlayerBase;
	//Maths testing
	PlayerBase* playerTwo = new PlayerBase("Mage");
	assert(playerTwo);

	std::cout << "Char class: " << playerTwo->getCharClass() << std::endl;
	
	delete(playerTwo);
	system("pause");
}


// Doing git stuff