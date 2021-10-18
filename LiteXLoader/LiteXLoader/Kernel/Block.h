#pragma once
#include <string>

class Block;
class Container;
class IntVec4;
class FloatVec4;
class Actor;
class Tag;

std::string Raw_GetBlockName(Block* block);
std::string Raw_GetBlockType(Block* block);
int Raw_GetBlockId(Block* block);
unsigned short Raw_GetTileData(Block* bl);

Block* Raw_NewBlockFromNameAndState(string str, unsigned short state);
Block* Raw_NewBlockFromNbt(Tag* tag);
bool Raw_SetBlockByBlock(IntVec4 pos, Block* block);
bool Raw_SetBlockByNameAndState(IntVec4 pos, const string& name, unsigned short state);
bool Raw_SetBlockByNbt(IntVec4 pos, Tag* nbt);
bool Raw_SpawnParticle(FloatVec4 pos, const string& type);

bool Raw_ResendBlocksAroundPlayer(Player* pl, IntVec4 pos);