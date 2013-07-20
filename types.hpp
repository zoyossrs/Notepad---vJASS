#pragma once

#include "definition_db.hpp"

using namespace std;

void registerTypes(DefinitionDB& definitions) {
	definitions.add(new Type("boolean"));
	definitions.add(new Type("code"));
	definitions.add(new Type("handle"));
	definitions.add(new Type("integer"));
	definitions.add(new Type("real"));
	definitions.add(new Type("string"));
	definitions.add(new Type("ability"));
	definitions.add(new Type("agent"));
	definitions.add(new Type("aidifficulty"));
	definitions.add(new Type("alliancetype"));
	definitions.add(new Type("attacktype"));
	definitions.add(new Type("blendmode"));
	definitions.add(new Type("boolexpr"));
	definitions.add(new Type("buff"));
	definitions.add(new Type("button"));
	definitions.add(new Type("camerafield"));
	definitions.add(new Type("camerasetup"));
	definitions.add(new Type("conditionfunc"));
	definitions.add(new Type("damagetype"));
	definitions.add(new Type("defeatcondition"));
	definitions.add(new Type("destructable"));
	definitions.add(new Type("dialog"));
	definitions.add(new Type("dialogevent"));
	definitions.add(new Type("effect"));
	definitions.add(new Type("effecttype"));
	definitions.add(new Type("event"));
	definitions.add(new Type("eventid"));
	definitions.add(new Type("fgamestate"));
	definitions.add(new Type("filterfunc"));
	definitions.add(new Type("fogmodifier"));
	definitions.add(new Type("fogstate"));
	definitions.add(new Type("force"));
	definitions.add(new Type("gamecache"));
	definitions.add(new Type("gamedifficulty"));
	definitions.add(new Type("gameevent"));
	definitions.add(new Type("gamespeed"));
	definitions.add(new Type("gamestate"));
	definitions.add(new Type("gametype"));
	definitions.add(new Type("group"));
	definitions.add(new Type("hashtable"));
	definitions.add(new Type("igamestate"));
	definitions.add(new Type("image"));
	definitions.add(new Type("item"));
	definitions.add(new Type("itempool"));
	definitions.add(new Type("itemtype"));
	definitions.add(new Type("leaderboard"));
	definitions.add(new Type("lightning"));
	definitions.add(new Type("limitop"));
	definitions.add(new Type("location"));
	definitions.add(new Type("mapcontrol"));
	definitions.add(new Type("mapdensity"));
	definitions.add(new Type("mapflag"));
	definitions.add(new Type("mapsetting"));
	definitions.add(new Type("mapvisibility"));
	definitions.add(new Type("multiboard"));
	definitions.add(new Type("multiboarditem"));
	definitions.add(new Type("pathingtype"));
	definitions.add(new Type("placement"));
	definitions.add(new Type("player"));
	definitions.add(new Type("playercolor"));
	definitions.add(new Type("playerevent"));
	definitions.add(new Type("playergameresult"));
	definitions.add(new Type("playerscore"));
	definitions.add(new Type("playerslotstate"));
	definitions.add(new Type("playerstate"));
	definitions.add(new Type("playerunitevent"));
	definitions.add(new Type("quest"));
	definitions.add(new Type("questitem"));
	definitions.add(new Type("race"));
	definitions.add(new Type("racepreference"));
	definitions.add(new Type("raritycontrol"));
	definitions.add(new Type("rect"));
	definitions.add(new Type("region"));
	definitions.add(new Type("sound"));
	definitions.add(new Type("soundtype"));
	definitions.add(new Type("startlocprio"));
	definitions.add(new Type("terraindeformation"));
	definitions.add(new Type("texmapflags"));
	definitions.add(new Type("texttag"));
	definitions.add(new Type("timer"));
	definitions.add(new Type("timerdialog"));
	definitions.add(new Type("trackable"));
	definitions.add(new Type("trigger"));
	definitions.add(new Type("triggeraction"));
	definitions.add(new Type("triggercondition"));
	definitions.add(new Type("ubersplat"));
	definitions.add(new Type("unit"));
	definitions.add(new Type("unitevent"));
	definitions.add(new Type("unitpool"));
	definitions.add(new Type("unitstate"));
	definitions.add(new Type("unittype"));
	definitions.add(new Type("version"));
	definitions.add(new Type("volumegroup"));
	definitions.add(new Type("weapontype"));
	definitions.add(new Type("weathereffect"));
	definitions.add(new Type("widget"));
	definitions.add(new Type("widgetevent"));
}