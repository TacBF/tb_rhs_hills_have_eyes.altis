#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY,     {3}      	, {}    , 1      , {}        , 0    , "BLUFOR Main Base" },
{ 2, TEAM_RED, 		SPAWN_XRAY,     {9}			, {}    , 1      , {}        , 0    , "OPFOR Main Base" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {1,4}      	, {}   	, 1      , {}        , 0    , "Magos" },
{ 4, TEAM_BLUE, 	SPAWN_NEVER,    {3,5}  		, {}    , 1      , {}        , 0    , "Negades" },
{ 5, TEAM_NEUTRAL, 	SPAWN_NEVER,    {4,6}      	, {}  	, 1      , {}        , 0    , "Plateau" },
{ 6, TEAM_NEUTRAL, 	SPAWN_NEVER,    {5,7}      	, {}   	, 1      , {}        , 0    , "Factory" },
{ 7, TEAM_NEUTRAL, 	SPAWN_NEVER,    {6,8}		, {}    , 1      , {}        , 0    , "Windmills" },
{ 8, TEAM_RED, 		SPAWN_NEVER,    {7,9}      	, {}    , 1      , {}		 , 0    , "Kore" },
{ 9, TEAM_RED, 		SPAWN_NEVER,  	{8,2}		, {}    , 1      , {}    	 , 0    , "Amoni" },

{ 10,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1	     , {1,5}     , 2    , "BLUFOR Forward Base" },
{ 11,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1      , {2,7}   	 , 2    , "OPFOR Forward Base" }
};