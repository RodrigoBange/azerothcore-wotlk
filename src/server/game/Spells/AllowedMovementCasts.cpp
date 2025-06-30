#include "AllowedMovementCasts.h"

const std::unordered_set<uint32>& AllowedMovementCasts::GetSpellWhitelist()
{
    static const std::unordered_set<uint32> whitelist = {
        // Blizzard (Mage)
        10/*Lvl1*/, 6141/*Lvl2*/, 8427/*Lvl3*/, 10186/*Lvl4*/, 10187/*Lvl5*/, 27085/*Lvl6*/, 42939/*Lvl7*/, 42940/*Lvl8*/,
        // Arcane Missiles (Mage)
        5143/*Lvl1*/, 5144/*Lvl2*/, 5145/*Lvl3*/, 8416/*Lvl4*/, 8417/*Lvl5*/, 10211/*Lvl6*/, 10212/*Lvl7*/, 25345/*Lvl8*/, 27075/*Lvl9*/, 38699/*Lvl10*/, 38704/*Lvl11*/, 42843/*Lvl12*/, 42846/*Lvl13*/,
        // Rain of Fire (Warlock)
        5740/*Lvl1*/, 6219/*Lvl2*/, 11677/*Lvl3*/, 11678/*Lvl4*/, 27212/*Lvl5*/, 47819/*Lvl6*/, 47820/*Lvl7*/,
        // Volley (Hunter)
        1510/*Lvl1*/, 14294/*Lvl2*/, 14295/*Lvl3*/, 27022/*Lvl4*/, 58431/*Lvl5*/, 58434 /*Lvl6*/,
        // Evocation (Mage)
        12051/*Lvl1*/,
        // Hurricane (Druid)
        16914/*Lvl1*/, 17401/*Lvl2*/, 17402/*Lvl3*/, 27012/*Lvl4*/, 48467/*Lvl5*/
    };

    return whitelist;
}
