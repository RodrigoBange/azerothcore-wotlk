/*
 * This file is part of the AzerothCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Affero General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

// This is where scripts' loading functions should be declared:
// void MyExampleScript()
//void AddSC_stealth_speed_rogue();
//void AddSC_stealth_speed_druid();
void AddSC_spell_backstab_front();
void AddSC_ShapeshiftRaceForms();
void AddSC_RespawnAtInstanceEntrance();
void AddSC_IccBuffScript();

// -- Debug
void AddSC_DebugCanFlyZone();


// The name of this function should match:
// void Add${NameOfDirectory}Scripts()
void AddCustomScripts()
{
    // MyExampleScript()
    //AddSC_stealth_speed_rogue();
    //AddSC_stealth_speed_druid();
    AddSC_spell_backstab_front();
    AddSC_ShapeshiftRaceForms();
    AddSC_RespawnAtInstanceEntrance();
    AddSC_IccBuffScript();

    // -- Debug
    //AddSC_DebugCanFlyZone();
}
