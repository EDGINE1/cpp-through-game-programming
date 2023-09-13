#include <iostream>
#include <string>
#include <random>

using namespace std;

int main(){
    string jumble = "theWord"; // jumbled version of word
    int length = jumble.size();
    for (int i = 0; i < length; ++i)
    {
    int index1 = (rand() % length);
    int index2 = (rand() % length);
    char temp = jumble[index1];
    jumble[index1] = jumble[index2];
    jumble[index2] = temp;
}

cout << jumble;
}