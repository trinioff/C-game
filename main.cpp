#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class character {
public:
    int health;
    int attack;
    int defense;
    int speed;
    int level;
    int exp;
    string name;
    int gold;
};

character newCharacter(int health, int attack, int defense, int speed, int level, int exp, string name, int gold) {
    character player;
    player.health = health;
    player.attack = attack;
    player.defense = defense;
    player.speed = speed;
    player.level = level;
    player.exp = exp;
    player.name = name;
    player.gold = gold;
    return player;
}

int main() 
{
    cout << "Welcome to the game!" << endl;
    cout << "To create a new character, press enter" << endl;

    string input;
    getline(cin, input);
    if (input.empty()) {
        character player = newCharacter(100, 10, 10, 10, 1, 0, "", 0);
        cout << "please enter your name" << endl;
        getline(cin, player.name);
        cout << "Name: " << player.name << endl;
        cout << "Health: " << player.health << endl;
        cout << "Attack: " << player.attack << endl;
        cout << "Defense: " << player.defense << endl;
        cout << "Speed: " << player.speed << endl;
        cout << "Level: " << player.level << endl;
        cout << "Experience: " << player.exp << endl;
        cout << "Gold: " << player.gold << endl;
    }
    else {
        cout << "Invalid input, please press enter or select an option" << endl;
    }

    return 0;
}