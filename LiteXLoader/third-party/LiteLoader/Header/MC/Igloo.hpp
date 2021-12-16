// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Igloo : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IGLOO
public:
    class Igloo& operator=(class Igloo const&) = delete;
    Igloo(class Igloo const&) = delete;
    Igloo() = delete;
#endif

public:
    /*0*/ virtual ~Igloo();
    /*1*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*5*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*7*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;

protected:

private:
    MCAPI static std::string const STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR;
    MCAPI static std::string const STRUCTURE_LOCATION_IGLOO_TRAPDOOR;
    MCAPI static std::string const STRUCTURE_LOCATION_LABORATORY;
    MCAPI static std::string const STRUCTURE_LOCATION_LADDER;

};