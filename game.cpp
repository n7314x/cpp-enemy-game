#include "game.h"

#include <iostream>
#include <vector>
#include <string>

class Player {
	public:
		std::string name;
		int health = 100;
};

class Enemy {
	public:
		std::string name;
		int health;
		int damage;
};

class Weapon {
	public:
		std::string name;
		int damage;
};

std::vector<Weapon> inventory;

void takeSword() {
	system("clear");
	Weapon sword;

	sword.name = "Sword";
	sword.damage = 20;

	std::cout << "You lift the sword from the table. The blade is worn, but still sharp.";
	inventory.push_back(sword);

	zombieReveal();
}

void takeKnife() {
	system("clear");
	Weapon knife;

	knife.name = "Knife";
	knife.damage = 10;

	std::cout << "You take the knife and test its weight in your hand. Small, fast, and easy to carry.";
	inventory.push_back(knife);

	zombieReveal();
}

void takeDagger() {
	system("clear");
	Weapon dagger;

	dagger.name = "Dagger";
	dagger.damage = 15;

	std::cout << "You grab the dagger. Its dark blade catches the lantern light.";
	inventory.push_back(dagger);

	zombieReveal();
}

void takeAxe() {
	system("clear");
	Weapon axe;

	axe.name = "Axe";
	axe.damage = 30;

	std::cout << "You pull the axe from the table. Heavy, but one clean hit should do serious damage.";
	inventory.push_back(axe);

	zombieReveal();
}

void gameStart() {
	system("clear");
	int choice;

	std::cout << "You wake to the sound of something scratching against the cabin door.\n";
	std::cout << "The room is dark. The windows are boarded shut, and a weak lantern flickers beside you. Outside, something lets out a low, broken growl\n";
	std::cout << "On a wooden table nearby, four weapons have been left behind. The scratching at the door grows louder.\n";
	std::cout << "Choose a weapon quickly.\n\n";

	std::cout << "1. Take the sword\n";
	std::cout << "2. Take the knife\n";
	std::cout << "3. Take the dagger\n";
	std::cout << "4. Take the axe\n\n";

	std::cout << "Choose your weapon: ";
	std::cin >> choice;

	switch (choice) {
		case 1:
			takeSword();
			break;
		case 2:
			takeKnife();
			break;
		case 3:
			takeDagger();
			break;
		case 4:
			takeAxe();
			break;
		default:
			std::cout << "Invalid choice";
			break;
	}
}

void zombieReveal() {
	system("clear");
	int choice;

	Enemy zombie;
	zombie.name = "Zombie";
	zombie.health = 25;
	zombie.damage = 30;

	std::cout << "The door breaks open. A zombie walks through, looking around.\n";
	std::cout << "The zombie sees you and rushes towards you. What are you going to do?\n\n";

	std::cout << "1. Attack the zombie with your weapon\n";
	std::cout << "2. Run away into the forest\n\n";

	std::cout << "Make your decision: ";
	std::cin >> choice;

	if (choice == 1) {
		attackZombieWithWeapon();
	} else if (choice == 2) {
		runAwayToForest();
	} else {
       std::cout << "Invalid choice";
	}
}

void attackZombieWithWeapon() {
	system("clear");
	int choice;

	Player player;
	player.health = 75

	std::cout << "Your health: " << player.health << '\n\n';

    std::cout << "You make an attempt to attack the zombie with your " << inventory[0].name << ".\n";
void preStartMenu() {
	system("clear");
	int choice;
    std::string name;
	
	std::cout << "Welcome to N's enemy game. Before starting, please enter a name to give your player.\n\n":
	std::cout << "Enter a name: ";
	std::cin >> name;

}

	std::cout << "Your " << inventory[0].name << " does " << inventory[0].damage << " damage.\n";
	std::cout << "The zombie is still alive and lunges at you. You are bit by the zombie.\n";
	std::cout << "What do you want to do?\n\n";

	std::cout << "1. Make one more attempt at killing the zombie\n";
	std::cout << "2. Run away to the forest\n\n";
	
	std::cout << "Make your decision: ";
    std::cin >> choice;

	if (choice == 1) {
		finalAttempt();
	} else if (choice == 2) {
		runAwayToForest();
	} else {
		std::cout << "Invalid choice";
	}
}

void runAwayToForest() {
	system("clear");
	int choice;

    std::cout << "You run away to the forest, making a narrow escape from the zombie.\n";
	std::cout << "As you run away, you reach the end of a cliff where you can look over the whole area.\n";
	std::cout << "You see villages being burnt down, zombies feeding on people, and warriers killing enemies you've never seen before.\n";
	std::cout << "What do you want to do first? Choose wisely.\n\n";

	std::cout << "1. Make your way down the cliff\n";
	std::cout << "2. Look around for a better weapon\n";
	std::cout << "3. Build a tent made out of leaf for the night\n\n";

	std::cout << "Make your choice: ":
	std::cin >> choice;
}

void finalAttempt() {
	system("clear");
	int choice;

	std::cout << "You make the final attempt at eliminating the zombie: You successfully do.\n";
	std::cout << "In the process, your " << inventory[0].name << " breaks. You no longer have any defense.";
}

void goDownCliff() {
}

void lookForBetterWeapon() {
}

void setupTent() {
}
