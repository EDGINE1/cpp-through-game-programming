#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;


int main(){
    //setup 
    string guess, hint, jumble, random_word;
    bool success = false;
    string word_array[10][2] = {{"ant", "a for :)"}, 
                                {"ball", "b for :)"},
                                {"cat", "c for :)"},
                                {"dog", "d for :)"},
                                {"elephant", "e for :)"},
                                {"fan", "f for :)"},
                                {"goat", "g for :)"},
                                {"ice", "i for :)"},
                                {"jug", "j for :)"},
                                {"kite", "k for :)"}};

    

    cout << "unscramble the the word to make sense."<< endl;
    cout << "enter \"hint\" to get a hint. \n";
    cout << "enter \"quit\" to get a quit. \n";

    //generating random numbers
    srand(static_cast<unsigned int>(time(0)));
    int random = rand();
    int rand_index = (random % 10);
    //random word is chosen from the array
    random_word = word_array[rand_index][0];
    hint = word_array[rand_index][1];

    jumble = random_word;
    //creating the jumble
    for(int i = 0; i < jumble.size(); i++){
        int index1 = (rand() % jumble.size());
        int index2 = (rand() % jumble.size());
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    cout <<"guess the word:"<< jumble <<endl;
    //game loop
    while(!success){
        cout << "your answer: ";
        cin >> guess;

        if(guess == random_word){
            cout << "right";
            success = true;
        }else if(guess == "hint"){
            cout <<"hint: " << hint << endl;
            success = false;
        }else if(guess == "quit"){
            break;
        }else{
            cout << "wrong"<< endl;
            success = false;
        }
    }


}