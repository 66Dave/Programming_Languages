#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Function.h"


#define LEN  20
#define MAX  10

typedef struct{
    char magic[LEN];
    int magicpower;
    int next;//next index
}Spell;

typedef struct{
    char Fname[LEN];
    char Lname[LEN];
}Name;

typedef struct mage{
    Name name;
    Spell spell[MAX];
    struct mage*next;
}Mage , *Mageptr;

typedef struct {
    Mage name;
}MageList;

typedef struct{
    Spell spell;
}SpellList;

typedef struct tower{
    char DeptName[LEN];
    Mageptr mageList;
    struct tower*next;
}MagicTower, *TowerPtr;


int main(void){
    MagicTower Tower = InitializeTower();

    
    


    MageList mages[10] = {
        {{ {"Aelric", "Veynor"}, {0}, NULL }},
        {{ {"Thalira", "Moonveil"}, {0}, NULL }},
        {{ {"Vaelis", "Draeven"}, {0}, NULL }},
        {{ {"Elyndra", "Valewyn"}, {0}, NULL }},
        {{ {"Caelus", "Mornveil"}, {0}, NULL }},
        {{ {"Seraphine", "Duskryn"}, {0}, NULL }},
        {{ {"Orwyn", "Halcrest"}, {0}, NULL }},
        {{ {"Lyssara", "Eldryn"}, {0}, NULL }},
        {{ {"Theron", "Ashvale"}, {0}, NULL }},
        {{ {"Maerith", "Solvane"}, {0}, NULL }}
    };

    SpellList Spells[20] = {
        {{"Fireball", 80, -1}},
        {{"Ice Lance", 75, -1}},
        {{"Lightning Bolt", 85, -1}},
        {{"Wind Blade", 70, -1}},
        {{"Earth Spike", 72, -1}},
        {{"Water Wave", 68, -1}},
        {{"Shadow Strike", 90, -1}},
        {{"Holy Light", 88, -1}},
        {{"Meteor", 100, -1}},
        {{"Dark Void", 95, -1}},
        {{"Flame Burst", 82, -1}},
        {{"Frost Nova", 78, -1}},
        {{"Thunder Storm", 92, -1}},
        {{"Wind Cutter", 74, -1}},
        {{"Stone Wall", 65, -1}},
        {{"Healing", 60, -1}},
        {{"Blood Spear", 93, -1}},
        {{"Shadow Army", 100, -1}},
        {{"Sword Aura", 89, -1}},
        {{"Dragon Breath", 99, -1}}
    };



    Populate(mages,Spells);
    return 0;
}




