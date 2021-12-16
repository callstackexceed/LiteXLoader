// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RaidBossComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDBOSSCOMPONENT
public:
    class RaidBossComponent& operator=(class RaidBossComponent const&) = delete;
    RaidBossComponent(class RaidBossComponent const&) = delete;
    RaidBossComponent() = delete;
#endif

public:
    MCAPI RaidBossComponent(class RaidBossComponent&&);
    MCAPI enum BossBarColor getColor();
    MCAPI float getHealthPercent();
    MCAPI std::string getName();
    MCAPI struct ActorUniqueID getOwnerUniqueID();
    MCAPI bool getRaidInProgress();
    MCAPI class std::shared_ptr<class Village> getVillage();
    MCAPI bool getWaveStarted();
    MCAPI void initialize(struct ActorUniqueID);
    MCAPI bool isWithinRange(class Mob const&);
    MCAPI class RaidBossComponent& operator=(class RaidBossComponent&&);
    MCAPI void registerPlayer(class Player*);
    MCAPI void removeBossBar(class Actor&);
    MCAPI void sendRegistryMessages(class Actor&);
    MCAPI void setVillage(class std::weak_ptr<class Village>);
    MCAPI void setWaveStarted(bool);
    MCAPI void setupBossBarInfo(class Actor&, class Village*);
    MCAPI bool tryRemoveBoss(class Actor&, class Player&);
    MCAPI void unRegisterPlayer(class Player*);
    MCAPI void updateBossBarStats(class Actor&, class Raid const&);
    MCAPI ~RaidBossComponent();

protected:

private:
    MCAPI void _broadcastBossEvent(enum BossEventUpdateType, class Actor&);
    MCAPI void _sendBossEvent(enum BossEventUpdateType, class Player&);

};