// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptServerBroadcastActorDefinitionEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERBROADCASTACTORDEFINITIONEVENT
public:
    class ScriptServerBroadcastActorDefinitionEvent& operator=(class ScriptServerBroadcastActorDefinitionEvent const&) = delete;
    ScriptServerBroadcastActorDefinitionEvent(class ScriptServerBroadcastActorDefinitionEvent const&) = delete;
    ScriptServerBroadcastActorDefinitionEvent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptServerBroadcastActorDefinitionEvent();
    /*1*/ virtual bool receivedEvent(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, std::string const&, class ScriptApi::ScriptObjectHandle const&);
    /*2*/ virtual bool getEventData(class ScriptApi::ScriptVersionInfo const&, class ScriptEngine&, class ScriptServerContext&, std::string const&, class ScriptApi::ScriptObjectHandle&);

protected:

private:
    MCAPI static class HashedString const mHash;

};