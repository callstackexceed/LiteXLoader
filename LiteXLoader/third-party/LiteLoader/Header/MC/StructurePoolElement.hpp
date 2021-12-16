// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StructurePoolElement {

#define AFTER_EXTRA
// Add Member There
public:
class LazyTemplate {
public:
    LazyTemplate() = delete;
    LazyTemplate(LazyTemplate const&) = delete;
    LazyTemplate(LazyTemplate const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLELEMENT
public:
    class StructurePoolElement& operator=(class StructurePoolElement const&) = delete;
    StructurePoolElement(class StructurePoolElement const&) = delete;
    StructurePoolElement() = delete;
#endif

public:
    /*0*/ virtual class BlockPos getSize(int /*enum enum Rotation*/) const;
    /*1*/ virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos, int /*enum enum Rotation*/) const;
    /*2*/ virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos, class LegacyStructureSettings&, class BlockSource*) const;
    /*3*/ virtual class BoundingBox getBoundingBox(class BlockPos, int /*enum enum Rotation*/) const;
    /*4*/ virtual void setProjection(int /*enum enum Projection*/);
    /*5*/ virtual int /*enum enum Projection*/ getProjection() const;
    /*6*/ virtual int /*enum enum PostProcessSettings*/ getPostProcessSettings() const;
    /*7*/ virtual bool place(class BlockSource&, class BlockPos, int /*enum enum Rotation*/, class BoundingBox, class Random&, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier> > > >&, class BlockPos) const;
    /*8*/ virtual void placeActors(class BlockSource&, class BlockPos, int /*enum enum Rotation*/, class Random&) const;
    /*9*/ virtual void handleJigsawBlock(class BlockSource&, class JigsawBlockInfo&, class LegacyStructureSettings&) const;
    /*10*/ virtual void handleDataMarker(class BlockSource&, class BlockPos, std::string, class std::unordered_map<class BlockPos, class std::optional<struct ActorDefinitionIdentifier>, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, class std::optional<struct ActorDefinitionIdentifier> > > >&) const;
    /*11*/ virtual bool isValid() const;
    /*12*/ virtual ~StructurePoolElement();
    /*
    inline  ~StructurePoolElement(){
         (StructurePoolElement::*rv)();
        *((void**)&rv) = dlsym("??1StructurePoolElement@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI StructurePoolElement(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager> >, std::string const&, std::vector<std::unique_ptr<class StructurePoolBlockRule>> const*, std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const*, std::vector<std::unique_ptr<class StructurePoolActorRule>> const*, enum Projection, enum PostProcessSettings);
    MCAPI StructurePoolElement(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager> >, std::string const&, struct StructurePoolElementSettings);
    MCAPI StructurePoolElement(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager> >, std::string const&, enum Projection, enum PostProcessSettings);

protected:

private:
    MCAPI class StructurePoolElement::LazyTemplate const& _getTemplate() const;

};