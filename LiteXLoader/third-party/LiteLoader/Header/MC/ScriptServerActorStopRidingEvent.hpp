// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptServerActorStopRidingEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERACTORSTOPRIDINGEVENT
public:
    class ScriptServerActorStopRidingEvent& operator=(class ScriptServerActorStopRidingEvent const&) = delete;
    ScriptServerActorStopRidingEvent(class ScriptServerActorStopRidingEvent const&) = delete;
#endif

public:
    /*0*/ virtual ~ScriptServerActorStopRidingEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;
    /*
    inline  ~ScriptServerActorStopRidingEvent(){
         (ScriptServerActorStopRidingEvent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptServerActorStopRidingEvent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScriptServerActorStopRidingEvent();
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setEntityIsBeingDestroyed(bool);
    MCAPI void setExitFromPassenger(bool);
    MCAPI void setSwitchingVehicles(bool);

protected:

private:
    MCAPI static class HashedString const mHash;

};