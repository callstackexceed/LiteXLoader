// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SmithingTableInputContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMITHINGTABLEINPUTCONTAINERVALIDATION
public:
    class SmithingTableInputContainerValidation& operator=(class SmithingTableInputContainerValidation const&) = delete;
    SmithingTableInputContainerValidation(class SmithingTableInputContainerValidation const&) = delete;
    SmithingTableInputContainerValidation() = delete;
#endif

public:
    /*0*/ virtual ~SmithingTableInputContainerValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual void __unk_vfn_1();
    /*4*/ virtual void __unk_vfn_2();

protected:

private:

};