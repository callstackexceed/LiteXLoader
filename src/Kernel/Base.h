#include "Global.h"
#include <string>

bool Raw_Runcmd(const std::string &cmd);
bool Raw_RuncmdAs(Player *player, const std::string &cmd);
std::pair<bool, std::string> Raw_RuncmdEx(const std::string &cmd);
bool Raw_RegisterCmd(const std::string &cmd, const std::string &describe, int cmdLevel);