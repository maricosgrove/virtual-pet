#include <string>
#include <iostream>
using namespace std;
//TODO: Needs decay over time

class Pet {

private:
	int health, hunger, happiness, hygiene, sleep;
	string name;
	bool sleeping;

public:
	Pet(string name_input) {
		health = 100;
		hunger = 100;
		happiness = 100;
		hygiene = 100;
		sleep = 100;
		name = name_input;
		sleeping = false;
	}

	int getHealth() {
		return health;
	}
	int getHunger() {
		return hunger;
	}
	int getHappiness() {
		return happiness;
	}
	int getHygiene() {
		return hygiene;
	}
	int getSleep() {
		return sleep;
	}

	void changeHealth(int change) {
		health = health + change;
		if (health > 100) health = 100;
	}
	void changeHunger(int change) {
		hunger = hunger + change;
		if (hunger > 100) hunger = 100;
	}
	void changeHappiness(int change) {
		happiness = happiness + change;
		if (happiness > 100) happiness = 100;
	}
	void changeHygiene(int change) {
		hygiene = hygiene + change;
		if (hygiene > 100) hygiene = 100;
	}
	void changeSleep(int change) {
		sleep = sleep + change;
		if (sleep > 100) sleep = 100;
	}

	void displayMood() {
		//TODO: changes message based on stats
		cout << "\n" << name << " stares back.";
	}

	void displayStats() {
		cout << "\nHealth: " << health << "%"
			<< "\nHunger: " << hunger << "%"
			<< "\nHappiness: " << happiness << "%"
			<< "\nHygiene: " << hygiene << "%"
			<< "\nSleep: " << sleep << "%";
	}
};
