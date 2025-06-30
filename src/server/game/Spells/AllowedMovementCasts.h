#pragma once

#include <unordered_set>
#include <cstdint>
#include "Define.h"

// This class holds a list of spells that can be cast while moving
class AllowedMovementCasts
{
public:
    static const std::unordered_set<uint32>& GetSpellWhitelist();
};
