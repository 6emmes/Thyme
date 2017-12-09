/**
 * @file
 *
 * @author OmniBlade
 *
 * @brief Wrapper around std::bitset.
 *
 * @copyright Thyme is free software: you can redistribute it and/or
 *            modify it under the terms of the GNU General Public License
 *            as published by the Free Software Foundation, either version
 *            2 of the License, or (at your option) any later version.
 *            A full copy of the GNU General Public License can be found in
 *            LICENSE
 */
#pragma once

#ifndef BITFLAGS_H
#define BITFLAGS_H

#include <bitset>

 // TODO move this somewhere more appropriate?
 // Don't add or remove anything to these until all code accessing the BitFlags type
 // for these enums have been reimplemented.
enum ObjectStatuses
{
    OBJECT_STATUS_NONE,
    OBJECT_STATUS_DESTROYED,
    OBJECT_STATUS_CAN_ATTACK,
    OBJECT_STATUS_UNDER_CONSTRUCTION,
    OBJECT_STATUS_UNSELECTABLE,
    OBJECT_STATUS_NO_COLLISIONS,
    OBJECT_STATUS_NO_ATTACK,
    OBJECT_STATUS_AIRBORNE_TARGET,
    OBJECT_STATUS_PARACHUTING,
    OBJECT_STATUS_REPULSOR,
    OBJECT_STATUS_HIJACKED,
    OBJECT_STATUS_AFLAME,
    OBJECT_STATUS_BURNED,
    OBJECT_STATUS_WET,
    OBJECT_STATUS_IS_FIRING_WEAPON,
    OBJECT_STATUS_IS_BRAKING,
    OBJECT_STATUS_STEALTHED,
    OBJECT_STATUS_DETECTED,
    OBJECT_STATUS_CAN_STEALTH,
    OBJECT_STATUS_SOLD,
    OBJECT_STATUS_UNDERGOING_REPAIR,
    OBJECT_STATUS_RECONSTRUCTING,
    OBJECT_STATUS_MASKED,
    OBJECT_STATUS_IS_ATTACKING,
    OBJECT_STATUS_USING_ABILITY,
    OBJECT_STATUS_IS_AIMING_WEAPON,
    OBJECT_STATUS_NO_ATTACK_FROM_AI,
    OBJECT_STATUS_IGNORING_STEALTH,
    OBJECT_STATUS_IS_CARBOMB,
    OBJECT_STATUS_DECK_HEIGHT_OFFSET,
    OBJECT_STATUS_STATUS_RIDER1,
    OBJECT_STATUS_STATUS_RIDER2,
    OBJECT_STATUS_STATUS_RIDER3,
    OBJECT_STATUS_STATUS_RIDER4,
    OBJECT_STATUS_STATUS_RIDER5,
    OBJECT_STATUS_STATUS_RIDER6,
    OBJECT_STATUS_STATUS_RIDER7,
    OBJECT_STATUS_STATUS_RIDER8,
    OBJECT_STATUS_FAERIE_FIRE,
    OBJECT_STATUS_KILLING_SELF,
    OBJECT_STATUS_REASSIGN_PARKING,
    OBJECT_STATUS_BOOBY_TRAPPED,
    OBJECT_STATUS_IMMOBILE,
    OBJECT_STATUS_DISGUISED,
    OBJECT_STATUS_DEPLOYED,
    OBJECT_STATUS_COUNT,
};

enum KindsOfParameter
{
    KIND_OF_OBSTACLE,
    KIND_OF_SELECTABLE,
    KIND_OF_IMMOBILE,
    KIND_OF_CAN_ATTACK,
    KIND_OF_STICK_TO_TERRAIN_SLOPE,
    KIND_OF_CAN_CAST_REFLECTIONS,
    KIND_OF_SHRUBBERY,
    KIND_OF_STRUCTURE,
    KIND_OF_INFANTRY,
    KIND_OF_VEHICLE,
    KIND_OF_AIRCRAFT,
    KIND_OF_HUGE_VEHICLE,
    KIND_OF_DOZER,
    KIND_OF_HARVESTER,
    KIND_OF_COMMANDCENTER,
    KIND_OF_LINEBUILD,
    KIND_OF_SALVAGER,
    KIND_OF_WEAPON_SALVAGER,
    KIND_OF_TRANSPORT,
    KIND_OF_BRIDGE,
    KIND_OF_LANDMARK_BRIDGE,
    KIND_OF_BRIDGE_TOWER,
    KIND_OF_PROJECTILE,
    KIND_OF_PRELOAD,
    KIND_OF_NO_GARRISON,
    KIND_OF_WAVEGUIDE,
    KIND_OF_WAVE_EFFECT,
    KIND_OF_NO_COLLIDE,
    KIND_OF_REPAIR_PAD,
    KIND_OF_HEAL_PAD,
    KIND_OF_STEALTH_GARRISON,
    KIND_OF_CASH_GENERATOR,
    KIND_OF_DRAWABLE_ONLY,
    KIND_OF_MP_COUNT_FOR_VICTORY,
    KIND_OF_REBUILD_HOLE,
    KIND_OF_SCORE,
    KIND_OF_SCORE_CREATE,
    KIND_OF_SCORE_DESTROY,
    KIND_OF_NO_HEAL_ICON,
    KIND_OF_CAN_RAPPEL,
    KIND_OF_PARACHUTABLE,
    KIND_OF_CAN_BE_REPULSED,
    KIND_OF_MOB_NEXUS,
    KIND_OF_IGNORED_IN_GUI,
    KIND_OF_CRATE,
    KIND_OF_CAPTURABLE,
    KIND_OF_CLEARED_BY_BUILD,
    KIND_OF_SMALL_MISSILE,
    KIND_OF_ALWAYS_VISIBLE,
    KIND_OF_UNATTACKABLE,
    KIND_OF_MINE,
    KIND_OF_CLEANUP_HAZARD,
    KIND_OF_PORTABLE_STRUCTURE,
    KIND_OF_ALWAYS_SELECTABLE,
    KIND_OF_ATTACK_NEEDS_LINE_OF_SIGHT,
    KIND_OF_WALK_ON_TOP_OF_WALL,
    KIND_OF_DEFENSIVE_WALL,
    KIND_OF_FS_POWER,
    KIND_OF_FS_FACTORY,
    KIND_OF_FS_BASE_DEFENSE,
    KIND_OF_FS_TECHNOLOGY,
    KIND_OF_AIRCRAFT_PATH_AROUND,
    KIND_OF_LOW_OVERLAPPABLE,
    KIND_OF_FORCEATTACKABLE,
    KIND_OF_AUTO_RALLYPOINT,
    KIND_OF_TECH_BUILDING,
    KIND_OF_POWERED,
    KIND_OF_PRODUCED_AT_HELIPAD,
    KIND_OF_DRONE,
    KIND_OF_CAN_SEE_THROUGH_STRUCTURE,
    KIND_OF_BALLISTIC_MISSILE,
    KIND_OF_CLICK_THROUGH,
    KIND_OF_SUPPLY_SOURCE_ON_PREVIEW,
    KIND_OF_PARACHUTE,
    KIND_OF_GARRISONABLE_UNTIL_DESTROYED,
    KIND_OF_BOAT,
    KIND_OF_IMMUNE_TO_CAPTURE,
    KIND_OF_HULK,
    KIND_OF_SHOW_PORTRAIT_WHEN_CONTROLLED,
    KIND_OF_SPAWNS_ARE_THE_WEAPONS,
    KIND_OF_CANNOT_BUILD_NEAR_SUPPLIES,
    KIND_OF_SUPPLY_SOURCE,
    KIND_OF_REVEAL_TO_ALL,
    KIND_OF_DISGUISER,
    KIND_OF_INERT,
    KIND_OF_HERO,
    KIND_OF_IGNORES_SELECT_ALL,
    KIND_OF_DONT_AUTO_CRUSH_INFANTRY,
    KIND_OF_CLIFF_JUMPER,
    KIND_OF_FS_SUPPLY_DROPZONE,
    KIND_OF_FS_SUPERWEAPON,
    KIND_OF_FS_BLACK_MARKET,
    KIND_OF_FS_SUPPLY_CENTER,
    KIND_OF_FS_STRATEGY_CENTER,
    KIND_OF_MONEY_HACKER,
    KIND_OF_ARMOR_SALVAGER,
    KIND_OF_REVEALS_ENEMY_PATHS,
    KIND_OF_BOOBY_TRAP,
    KIND_OF_FS_FAKE,
    KIND_OF_FS_INTERNET_CENTER,
    KIND_OF_BLAST_CRATER,
    KIND_OF_PROP,
    KIND_OF_OPTIMIZED_TREE,
    KIND_OF_FS_ADVANCED_TECH,
    KIND_OF_FS_BARRACKS,
    KIND_OF_FS_WARFACTORY,
    KIND_OF_FS_AIRFIELD,
    KIND_OF_AIRCRAFT_CARRIER,
    KIND_OF_NO_SELECT,
    KIND_OF_REJECT_UNMANNED,
    KIND_OF_CANNOT_RETALIATE,
    KIND_OF_TECH_BASE_DEFENSE,
    KIND_OF_EMP_HARDENED,
    KIND_OF_DEMOTRAP,
    KIND_OF_CONSERVATIVE_BUILDING,
    KIND_OF_IGNORE_DOCKING_BONES,
    KIND_OF_COUNT,
};

template <int bits>
class BitFlags
{
public:
    bool operator==(BitFlags &that) const { return m_bits == that.m_bits; }
    bool operator!=(BitFlags &that) const { return m_bits != that.m_bits; }

    void Set(unsigned bit) { m_bits.set(bit); }

    static const char *s_bitNamesList[];
private:
    std::bitset<bits> m_bits;
};

// TODO Temp to force instantiation. Fixes issue with Parameter::Read_Parameter.
extern BitFlags<KIND_OF_COUNT> g_bf;

#endif // _BITFLAGS_H
