//executes the alpha menu
#include "Pet.h"
#include "Inventory.h"
#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

#define PLACEHOLDER_TEXT cout << "\n((Item not finished yet))\n"

Pet* currentPet;
Inventory inventory;

void executeMainAction(char choice);
void load();

int main() {
	load();
	cout << "\nHello! Welcome to your virtual pet house."
		<< "\nHow can I help you?\n";
	char choice = '1';
	do {
		cout << "\n\np. Go to Pet"
			<< "\ni. Go to Inventory"
			<< "\ns. Go to Shop"
			<< "\ng. Go to Game Room"
			<< "\nq. Save and Quit\n";
		cin >> choice;
		cin.ignore();
		executeMainAction(choice);
	} while (choice != 'q');

	return 0;
}

void petMenu();
void inventoryMenu();
void shopMenu();
void gameMenu();
void saveQuit();
void executeMainAction(char choice) {
	switch (choice) {
	case 'p': petMenu(); break;
	case 'i': inventoryMenu(); break;
	case 's': shopMenu(); break;
	case 'g': gameMenu(); break;
	case 'q': saveQuit(); break;
	}
}

void executePetAction(char choice);
void petMenu() {
	PLACEHOLDER_TEXT;

	if (!currentPet) {
		cout << "\nWhoops, there's no pet here! Let's adopt a new pet."
			<< "\nWhat's your pet's name?\n";
		string name_input;
		cin >> name_input;
		cin.ignore();
		currentPet = new Pet(name_input);
	}

	currentPet->displayMood();
	//Stat display
	currentPet->displayStats();

	char choice = '1';
	do {
		cout << "\n\nf. Feed"
			<< "\nt. Give toy"
			<< "\nc. Clean pet"
			<< "\nn. Nap time"
			<< "\ng. Play a game"
			<< "\nd. Display stats again"
			<< "\nr. Return to last menu\n";
		cin >> choice;
		cin.ignore();
		executePetAction(choice);
	} while (choice != 'r');
}

void executePetAction(char choice) {
	//TODO: not how I want sleep to work

	switch (choice) {
	case 'f': inventoryMenu(); break;
	case 't': inventoryMenu(); break;
	case 'c': cout << "\nWashie washie\n"; currentPet->changeHygiene(50); break;
	case 'n': PLACEHOLDER_TEXT; currentPet->changeSleep(100); break;
	case 'g': gameMenu(); break;
	case 'd': currentPet->displayStats();
	case 'r': break;
	}

	PLACEHOLDER_TEXT;
}

void inventoryMenu() {
	//TODO: Needs to allow using items
	//TODO: Implement 
	PLACEHOLDER_TEXT;
}

void shopMenu() {
	//TODO: Implement
	PLACEHOLDER_TEXT;
}

void gameMenu() {
	//TODO: Implement
	PLACEHOLDER_TEXT;
}

void load() {
	//TODO: implement
	PLACEHOLDER_TEXT;
}

void saveQuit() {
	//TODO: implement;
	PLACEHOLDER_TEXT;
}
