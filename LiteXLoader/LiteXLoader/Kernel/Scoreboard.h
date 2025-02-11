#pragma once
#include "Global.h"
#include <optional>

enum class ObjectiveSortOrder : char { ASCENDING = 0, DESCENDING = 1 };
enum class PlayerScoreSetFunction : char { SET = 0, ADD = 1, REMOVE = 2 };

class Scoreboard;
class ScoreboardId;
class Objective;

struct ScoreInfo
{
	char filler[20];
	Objective* getObjective()
	{
		return dAccess<Objective*>(this, 0);
	}
	int getCount()
	{
		return dAccess<int>(this, 12);
	}
};

class PlayerScore {};

class Objective
{
public:
	inline ScoreInfo getPlayerScore(const ScoreboardId& a1)
	{
		ScoreInfo sc;
		SymCall("?getPlayerScore@Objective@@QEBA?AUScoreInfo@@AEBUScoreboardId@@@Z", 
			ScoreInfo*, Objective*, ScoreInfo*, const ScoreboardId&)(this, &sc, a1);
		return sc;
	}
	inline std::string getName()
	{
		return dAccess<std::string>(this, 64);
	}
	inline std::string getDisplayName()
	{
		return dAccess<std::string>(this, 96);
	}
};

class DisplayObjective
{
public:
	inline Objective* getObjective()
	{
		return dAccess<Objective*>(this, 0);
	}
};

class ScoreboardId 
{
public:
	int id;
	void* null;
};

class ScoreboardIdentityRef
{
public:
	inline bool modifyScoreInObjective(int* a1, Objective* a2, int a3, PlayerScoreSetFunction a4)
	{
		return SymCall("?modifyScoreInObjective@ScoreboardIdentityRef@@QEAA_NAEAHAEAVObjective@@"
			"HW4PlayerScoreSetFunction@@@Z", bool, ScoreboardIdentityRef*, int*, Objective*, int,
			PlayerScoreSetFunction)(this, a1, a2, a3, a4);
	}
	inline bool removeFromObjective(Scoreboard* scb, Objective* obj)
	{
		return SymCall("?removeFromObjective@ScoreboardIdentityRef@@QEAA_NAEAVScoreboard@@AEAV"
			"Objective@@@Z", bool, ScoreboardIdentityRef*, Scoreboard*, Objective*)(this, scb, obj);
	}
	inline bool hasScoreInObjective(Objective* obj)
	{
		return SymCall("?hasScoreInObjective@ScoreboardIdentityRef@@QEBA_NAEBVObjective@@@Z",
			bool, ScoreboardIdentityRef*, Objective*)(this, obj);
	}
};

class ObjectiveCriteria {};
class Scoreboard
{
public:
	static constexpr const char* DISPLAY_SLOT_LIST = "list";
	static constexpr const char* DISPLAY_SLOT_SIDEBAR = "sidebar";
	static constexpr const char* DISPLAY_SLOT_BELOWNAME = "belowname";
	inline std::vector<ScoreInfo> getIdScores(ScoreboardId* id)
	{
		std::vector<ScoreInfo> rv;
		SymCall("?getIdScores@Scoreboard@@QEBA?AV?$vector@UScoreInfo@@V?$allocator@UScoreInfo"
			"@@@std@@@std@@AEBUScoreboardId@@@Z", void, Scoreboard*,
			std::vector<ScoreInfo>&, ScoreboardId*)(this, rv, id);
		return rv;
	}
	inline const ScoreboardIdentityRef& registerScoreboardIdentity(ScoreboardId& a1, const std::string& a2)
	{
		return SymCall(
			"?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@"
			"AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
			const ScoreboardIdentityRef&, Scoreboard*, ScoreboardId&,
			const std::string&)(this, a1, a2);
	}
	inline std::vector<PlayerScore> getDisplayInfoFiltered(const std::string& a1)
	{
		return *SymCall(
			"?getDisplayInfoFiltered@Scoreboard@@QEBA?AV?$vector@UPlayerScore@@V?$allocator@"
			"UPlayerScore@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@"
			"D@2@@3@@Z", std::vector<PlayerScore>*, Scoreboard*, const std::string&)(this, a1);
	}
	inline DisplayObjective* getDisplayObjective(const std::string& slot)
	{
		return SymCall("?getDisplayObjective@Scoreboard@@QEBAPEBVDisplayObjective@@AEBV?$basic_"
			"string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z", DisplayObjective*, Scoreboard*,
			const std::string&)(this, slot);
	}
	inline Objective* clearDisplayObjective(const std::string& slot)
	{
		return SymCall("?clearDisplayObjective@Scoreboard@@UEAAPEAVObjective@@AEBV?$basic_string"
			"@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z", Objective*, Scoreboard*, 
			const std::string&)(this, slot);
	}
	// @param a1 槽位
	// @param sort 升序/降序
	inline DisplayObjective* setDisplayObjective(const std::string& a1, Objective* obj,
		ObjectiveSortOrder sort)
	{
		return SymCall(
			"?setDisplayObjective@Scoreboard@@UEAAPEBVDisplayObjective@@AEBV?$basic_string@DU?$"
			"char_traits@D@std@@V?$allocator@D@2@@std@@AEBVObjective@@W4ObjectiveSortOrder@@@Z",
			DisplayObjective*, Scoreboard*, const std::string&, Objective*,
			ObjectiveSortOrder&)(this, a1, obj, sort);
	}
	// @param a1 "dummy"
	inline ObjectiveCriteria* getCriteria(const std::string& a1)
	{
		return SymCall("?getCriteria@Scoreboard@@QEBAPEAVObjectiveCriteria@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
			ObjectiveCriteria*, Scoreboard*, const std::string&) (this, a1);
	}
	// @param a1 计分项名
	// @param a2 计分项显示名称
	inline Objective* addObjective(const std::string& a1, const std::string& a2,
		ObjectiveCriteria* crit)
	{
		return SymCall("?addObjective@Scoreboard@@QEAAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBVObjectiveCriteria@@@Z",
			Objective*, Scoreboard*,const std::string&, const std::string&, ObjectiveCriteria*)
			(this, a1, a2, crit);
	}
	inline bool removeObjective(Objective* obj) 
	{
		return SymCall("?removeObjective@Scoreboard@@QEAA_NPEAVObjective@@@Z", bool, Scoreboard*, 
			Objective*)(this, obj);
	}
	inline Objective* getObjective(const std::string& a1)
	{
		return SymCall("?getObjective@Scoreboard@@QEBAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
			Objective*, Scoreboard*,const std::string&)(this, a1);
	}
	inline std::vector<Objective*> getObjectives()
	{
		std::vector<Objective*> vec;
		SymCall("?getObjectives@Scoreboard@@QEBA?AV?$vector@PEBVObjective@@V?$allocator@"
			"PEBVObjective@@@std@@@std@@XZ", void, Scoreboard*, std::vector<Objective*>*)(this, &vec);
		return vec;
	}
	inline std::vector<std::string> getObjectiveNames()
	{
		std::vector<std::string> vec;
		SymCall(
			"?getObjectiveNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_"
			"traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@"
			"std@@V?$allocator@D@2@@std@@@2@@std@@XZ",
			void, Scoreboard*, std::vector<std::string>*)(this, &vec);
		return vec;
	}
	inline const ScoreboardId* getScoreboardId(Actor*a1)
	{
		return SymCall("?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBVActor@@@Z",
			ScoreboardId*, Scoreboard*, Actor*)(this, a1);
	}
	inline ScoreboardId* getScoreboardId(Player* a1)
	{
		return SymCall("?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBVPlayer@@@Z",
			ScoreboardId*, Scoreboard*, Player*)(this, a1);
	}
	inline ScoreboardId* getScoreboardId(const std::string& a1)
	{
		return SymCall("?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
			ScoreboardId*, Scoreboard*,const std::string&)
			(this, a1);
	}
	inline std::vector<ScoreboardIdentityRef> getScoreboardIdentityRefs()
	{
		std::vector<ScoreboardIdentityRef> rv;
		SymCall("?getScoreboardIdentityRefs@Scoreboard@@QEBA?AV?$vector@VScoreboardIdentityRef@@V?$"
			"allocator@VScoreboardIdentityRef@@@std@@@std@@XZ", void, Scoreboard*,
			std::vector<ScoreboardIdentityRef>*)(this, &rv);
		return rv;
	}
	inline ScoreboardIdentityRef* getScoreboardIdentityRef(ScoreboardId* a1)
	{
		return SymCall("?getScoreboardIdentityRef@Scoreboard@@QEAAPEAVScoreboardIdentityRef@@"
			"AEBUScoreboardId@@@Z", ScoreboardIdentityRef*, Scoreboard*, ScoreboardId*)(this, a1);
	}
	/*
	inline ScoreboardId* createScoreboardId(std::string const& a1) {
		return SymCall("?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBV?$basic_string"
			"@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z", ScoreboardId*, Scoreboard*, 
			const std::string&)(this, a1);
	}
	*/
	inline int modifyPlayerScore(const ScoreboardId& a3, Objective* a4, int count, int mode)
	{
		bool a2 = true;
		return SymCall("?modifyPlayerScore@Scoreboard@@QEAAHAEA_NAEBUScoreboardId@@AEAVObjective@@HW4PlayerScoreSetFunction@@@Z",
			int, Scoreboard*, bool* ,const ScoreboardId&, Objective*, int, int)
			(this, &a2, a3, a4, count, mode);
	}
};

extern Scoreboard* globalScoreBoard;

Objective* Raw_NewObjective(const string& objname, const string& displayName);
bool Raw_SetDisplayObjective(const std::string& objname, const std::string& slot, int sort);
Objective* Raw_ClearDisplayObjective(const std::string& slot);
Objective* Raw_GetDisplayObjective(const std::string& slot);
bool Raw_RemoveFromObjective(const std::string& objname, const std::string& id);
bool Raw_RemoveFromObjective(const std::string& objname, Player *player);

int Raw_GetScore(const std::string& objname, const std::string& id);
std::optional<int> Raw_SetScore(const std::string& objname, const std::string& id, int score);
std::optional<int> Raw_AddScore(const std::string& objname, const std::string& id, int score);
std::optional<int> Raw_ReduceScore(const std::string& objname, const std::string& id, int score);

int Raw_GetScore(Player* player, const std::string& key);
bool Raw_SetScore(Player* player, const std::string& key, int value);
bool Raw_AddScore(Player* player, const std::string& key, int value);
bool Raw_ReduceScore(Player* player, const std::string& key, int value);
bool Raw_DeleteScore(Player* player, const std::string& objname);

bool Raw_ScoreboardIdIsValid(ScoreboardId* id);