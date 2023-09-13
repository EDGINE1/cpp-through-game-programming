#include <iostream>
#include <string>

using namespace std;

int main(){
    const int Max_items = 10;
	
	string inventory[Max_items];

	int numitems = 0;
	inventory[numitems++] = "sword";
	inventory[numitems++] = "knife";
	inventory[numitems++] = "wand";

	cout << "your items: \n";
	for(int i = 0;i < numitems;i++){
		cout<< inventory[i] << "  ";
    }


	cout << "sword has been replaced with battle axe.\n";

	inventory[0] = "battle axe";

	cout << "your items: \n";
	for(int i = 0;i < numitems;i++){
		cout<< inventory[i] << " ";
    }

	cout << "you found an healing potion.\n";

	inventory[numitems++] = "healing potion";
	
	cout << "your items: \n";
	for(int i = 0;i < numitems;i++){
		cout<< inventory[i] << " ";
    }





}