// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class GrowsCropDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GROWSCROPDEFINITION
public:
    class GrowsCropDefinition& operator=(class GrowsCropDefinition const&) = delete;
    GrowsCropDefinition(class GrowsCropDefinition const&) = delete;
#endif

public:
    MCAPI GrowsCropDefinition();
    MCAPI void initialize(class EntityContext&, class GrowsCropComponent&);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class GrowsCropDefinition> >&);

protected:

private:

};