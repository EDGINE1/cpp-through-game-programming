#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("shield");
    inventory.push_back("knife");

    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter;

    cout <<" your items:\n";
    for (iter = inventory.begin(); iter < inventory.end(); iter++)
    {
        /* code */
        cout << *iter << endl;
    }


    cout << "you trade sword for a battle axe.\n";
    myIterator = inventory.begin();
    *myIterator = "battle axe";

    cout <<" your items:\n";
    for (iter = inventory.begin(); iter < inventory.end(); iter++)
    {
        /* code */
        cout << *iter << endl;
    }

    cout<< (*myIterator).size() << " is the size of the first item.\n";
    cout<< myIterator->size() << " is the size of the first item.\n";

    cout << "you obtained a crossbow from a battle.\n";
    inventory.insert(inventory.begin(),"crossbow");

    cout <<" your items:\n";
    for (iter = inventory.begin(); iter < inventory.end(); iter++)
    {
        /* code */
        cout << *iter << endl;
    }

    
    cout << "your sword was destroyed in a battle.\n";
    inventory.erase(inventory.begin() + 2);

    cout << "your items:\n";
    for (iter = inventory.begin(); iter < inventory.end(); iter++)
    {
        cout << *iter <<endl;
    }
    



    
}