//
// This file is shared between the game src and the offline bake to assist in making 
// queries and other stuff which can be prepared offline a bit faster
//
#ifndef ROGUE_BAKED_H
#define ROGUE_BAKED_H

struct Evolution;
struct Item;

void Rogue_ModifyEvolution(u16 species, u8 evoIdx, struct Evolution* outEvo);
const u8* Rogue_GetItemName(u16 itemIdx);
void Rogue_ModifyItem(u16 itemIdx, struct Item* outItem);
u32 Rogue_ModifyExperienceTables(u8 growthRate, u8 level);
u16 Rogue_GetEggSpecies(u16 species);
u8 Rogue_GetEvolutionCount(u16 species);

#endif