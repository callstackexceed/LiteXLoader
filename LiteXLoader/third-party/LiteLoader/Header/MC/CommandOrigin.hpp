// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class ServerPlayer;

#undef BEFORE_EXTRA

class CommandOrigin {

#define AFTER_EXTRA
// Add Member There
public:
LIAPI ServerPlayer* getPlayer() const;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDORIGIN
public:
    class CommandOrigin& operator=(class CommandOrigin const&) = delete;
    CommandOrigin(class CommandOrigin const&) = delete;
#endif

public:
    /*0*/ virtual ~CommandOrigin();
    /*1*/ virtual std::string const& getRequestId() const = 0;
    /*2*/ virtual std::string getName() const = 0;
    /*3*/ virtual class BlockPos getBlockPosition() const = 0;
    /*4*/ virtual class Vec3 getWorldPosition() const = 0;
    /*5*/ virtual class Level* getLevel() const = 0;
    /*6*/ virtual class Dimension* getDimension() const = 0;
    /*7*/ virtual class Actor* getEntity() const = 0;
    /*8*/ virtual enum CommandPermissionLevel getPermissionsLevel() const = 0;
    /*9*/ virtual std::unique_ptr<class CommandOrigin> clone() const = 0;
    /*10*/ virtual class std::optional<class BlockPos> getCursorHitBlockPos() const;
    /*11*/ virtual class std::optional<class Vec3> getCursorHitPos() const;
    /*12*/ virtual bool hasChatPerms() const;
    /*13*/ virtual bool hasTellPerms() const;
    /*14*/ virtual bool canUseAbility(enum AbilitiesIndex) const;
    /*15*/ virtual bool isWorldBuilder() const;
    /*16*/ virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /*17*/ virtual bool isSelectorExpansionAllowed() const;
    /*18*/ virtual class NetworkIdentifier const& getSourceId() const;
    /*19*/ virtual unsigned char getSourceSubId() const;
    /*20*/ virtual class CommandOrigin const& getOutputReceiver() const;
    /*21*/ virtual struct CommandOriginIdentity getIdentity() const;
    /*22*/ virtual enum CommandOriginType getOriginType() const = 0;
    /*23*/ virtual struct CommandOriginData toCommandOriginData() const;
    /*24*/ virtual class mce::UUID const& getUUID() const;
    /*25*/ virtual void handleCommandOutputCallback(class Json::Value&&) const;
    /*26*/ virtual class CompoundTag serialize() const;
    /*27*/ virtual bool isValid() const = 0;
    /*28*/ virtual void _setUUID(class mce::UUID const&);
    MCAPI CommandOrigin();
    MCAPI std::unique_ptr<class CommandArea> getAreaAt(class BlockPos const&, class BlockPos const&, bool) const;
    MCAPI std::unique_ptr<class CommandArea> getAreaAt(class BlockPos const&) const;
    MCAPI std::unique_ptr<class CommandArea> getAreaAtWithBuffer(class BlockPos const&, class BlockPos const&, bool) const;
    MCAPI std::unique_ptr<class CommandArea> getAreaAtWithBuffer(class BlockPos const&) const;
    MCAPI static std::unique_ptr<class CommandOrigin> fromCommandOriginData(struct CommandOriginData const&, class Bedrock::NonOwnerPointer<class ILevel> const&, class NetworkIdentifier const&, unsigned char);

protected:
    MCAPI static class NetworkIdentifier sUnknownSource;

private:

};