#pragma once
#include <string>
#include <vector>
using namespace std;

enum category { dummy = 0, food, toy, clothes };

typedef struct Item {
	string name;
	string description;
	int value;
	category category;
} Item;

class Inventory {
private:
	vector<Item> list;
public:
	void addItem(Item newItem);
	Item getItem();
	void deleteItem(Item targetItem);
	void sort();
	void display();
	void display(category category);

	Inventory() {
		list = {};
	}
	~Inventory() {
		while (!list.empty()) {
			deleteItem(list.back());
			list.pop_back();
		}
	}
	void addItem(Item newItem) {
		//iterate through list to find last insertion point for category
		//add item there
	}
};
  
