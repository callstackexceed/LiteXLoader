// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EndPodiumFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDPODIUMFEATURE
public:
    class EndPodiumFeature& operator=(class EndPodiumFeature const&) = delete;
    EndPodiumFeature(class EndPodiumFeature const&) = delete;
    EndPodiumFeature() = delete;
#endif

public:
    /*0*/ virtual ~EndPodiumFeature();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /*
    inline  ~EndPodiumFeature(){
         (EndPodiumFeature::*rv)();
        *((void**)&rv) = dlsym("??1EndPodiumFeature@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI EndPodiumFeature(bool);
    MCAPI static float const CORNER_ROUNDING;
    MCAPI static class BlockPos const END_PODIUM_CHUNK_POSITION;
    MCAPI static class BlockPos const END_PODIUM_LOCATION;
    MCAPI static int const PODIUM_PILLAR_HEIGHT;
    MCAPI static int const PODIUM_RADIUS;
    MCAPI static int const RIM_RADIUS;

protected:

private:

};