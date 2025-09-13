// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character {
    std::string name;
    int level;
    character_role role;
};
int main(){
    game_character player;
    player.name = "Noam";
    player.level= 11;
    player.role = character_role::npc;
    std::cout << player.name << " is a level " << player.level << " and his role is " << (int)player.role << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
