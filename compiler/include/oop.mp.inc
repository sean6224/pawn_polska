/*
	SA:MP OOP include
	Copyright (c) Sean
*/

#if defined _oop_included
	#endinput
#endif

#define _oop_included

#if !defined _samp_included || !defined _players_included
	#error Include Open Multiplayer inc (open.mp) before a_oop!
#endif



/*
	SQLite (DB) Class functions
*/




#define SQLite::		SQLite_
#define SQLiteDB->		DB:
#define SQLiteResult->		DBResult:

#define SQLite_open		db_open
#define SQLite_close		db_close
#define SQLite_query		db_query
#define SQLite_free_result	db_free_result
#define SQLite_num_rows		db_num_rows
#define SQLite_next_row		db_next_row
#define SQLite_num_fields	db_num_fields
#define SQLite_field_name	db_field_name
#define SQLite_get_field	db_get_field
#define SQLite_get_field_assoc	db_get_field_assoc

/*
native _:SQLiteDB->SQLite::open(name[]);
native _:SQLite::close(SQLiteDB->db);
native _:SQLiteResult->SQLite::query(SQLiteDB->db, query[]);
native _:SQLite::free_result(SQLiteResult->result);
native _:SQLite::num_rows(SQLiteResult->result);
native _:SQLite::next_row(SQLiteResult->result);
native _:SQLite::num_fields(SQLiteResult->result);
native _:SQLite::field_name(SQLiteResult->result, field, dest[], len);
native _:SQLite::get_field(SQLiteResult->result, field, dest[], len);
native _:SQLite::get_field_assoc(SQLiteResult->result, const field[], dest[], len);
*/



/*
	PVar(s) Class functions
*/



#define PVar::              	PVar_

#define PVar_SetInt         	SetPVarInt
#define PVar_GetInt         	GetPVarInt
#define PVar_SetString      	SetPVarString
#define PVar_GetString      	GetPVarString
#define PVar_SetFloat       	SetPVarFloat
#define PVar_GetFloat       	GetPVarFloat
#define PVar_Delete         	DeletePVar
#define PVar_UpperIndex  		GetPVarsUpperIndex
#define PVar_NameAtIndex    	GetPVarNameAtIndex
#define PVar_Type           	GetPVarType

#define PVar_None           	PLAYER_VARTYPE_NONE
#define PVar_Int            	PLAYER_VARTYPE_INT
#define PVar_String         	PLAYER_VARTYPE_STRING
#define PVar_Float          	PLAYER_VARTYPE_FLOAT

/*
native _:PVar::SetInt(playerid, varname[], value);
native _:PVar::GetInt(playerid, varname[]);
native _:PVar::SetString(playerid, varname[], value[]);
native _:PVar::GetString(playerid, varname[], dest[], len);
native _:PVar::SetFloat(playerid, varname[], Float:value);
native Float:PVar::GetFloat(playerid, varname[]);
native _:PVar::Delete(playerid, varname[]);
native _:PVar::UpperIndex(playerid);
native _:PVar::NameAtIndex(playerid, index, dest[], len);
native _:PVar::Type(playerid, varname[]);
*/



/*
	TextDraw Class functions
*/



#define TD::                	TextDraw
#define Text->			Text:

/*
native _:Text->TD::Create(Float:x, Float:y, text[]);
native _:TD::Destroy(Text->text);
native _:TD::LetterSize(Text->text, Float:x, Float:y);
native _:TD::TextSize(Text->text, Float:x, Float:y);
native _:TD::Alignment(Text->text, alignment);
native _:TD::Color(Text->text, color);
native _:TD::UseBox(Text->text, use);
native _:TD::BoxColor(Text->text, color);
native _:TD::SetShadow(Text->text, size);
native _:TD::SetOutline(Text->text, size);
native _:TD::BackgroundColor(Text->text, color);
native _:TD::Font(Text->text, font);
native _:TD::SetProportional(Text->text, set);
native _:TD::SetSelectable(Text->text, set);
native _:TD::ShowForPlayer(playerid, Text->text);
native _:TD::HideForPlayer(playerid, Text->text);
native _:TD::ShowForAll(Text->text);
native _:TD::HideForAll(Text->text);
native _:TD::SetString(Text->text, string[]);
*/



/*
	PlayerTextDraw Class functions
*/



#define PlayerTD::          	PlayerTextDraw
#define PlayerText->		PlayerText:

#define PlayerTextDrawCreate    CreatePlayerTextDraw

/*
native _:PlayerText->PlayerTD::Create(playerid, Float:x, Float:y, text[]);
native _:PlayerTD::Destroy(playerid, PlayerText->text);
native _:PlayerTD::LetterSize(playerid, PlayerText->text, Float:x, Float:y);
native _:PlayerTD::TextSize(playerid, PlayerText->text, Float:x, Float:y);
native _:PlayerTD::Alignment(playerid, PlayerText->text, alignment);
native _:PlayerTD::Color(playerid, PlayerText->text, color);
native _:PlayerTD::UseBox(playerid, PlayerText->text, use);
native _:PlayerTD::BoxColor(playerid, PlayerText->text, color);
native _:PlayerTD::SetShadow(playerid, PlayerText->text, size);
native _:PlayerTD::SetOutline(playerid, PlayerText->text, size);
native _:PlayerTD::BackgroundColor(playerid, PlayerText->text, color);
native _:PlayerTD::Font(playerid, PlayerText->text, font);
native _:PlayerTD::SetProportional(playerid, PlayerText->text, set);
native _:PlayerTD::SetSelectable(playerid, PlayerText->text, set);
native _:PlayerTD::Show(playerid, PlayerText->text);
native _:PlayerTD::Hide(playerid, PlayerText->text);
native _:PlayerTD::SetString(playerid, PlayerText->text, string[]);
*/



/*
	MySQL (R7) Class functions
	(Original by BlueG (c), 2011)
*/



#if defined mysql_included

#define MySQL:: 		MySQL_

#define MySQL_close         	mysql_close
#define MySQL_connect       	mysql_connect
#define MySQL_debug         	mysql_debug
#define MySQL_get_charset       mysql_get_charset
#define MySQL_set_charset   	mysql_set_charset
#define MySQL_ping              mysql_ping
#define MySQL_escape_string     mysql_real_escape_string
#define MySQL_query             mysql_function_query
#define MySQL_cache_row         cache_get_row
#define MySQL_cache_field       cache_get_field
#define MySQL_cache_data        cache_get_data
#define MySQL_cache_content     cache_get_field_content
#define MySQL_mutex  		enable_mutex

#endif

/*
native _:MySQL::close(handle = 1);
native _:MySQL::connect(const host[], const user[], const database[], const password[], port = 3306);
native _:MySQL::debug(enable = 1);
native _:MySQL::get_charset(dest[], handle = 1);
native _:MySQL::set_charset(charset[], handle = 1);
native _:MySQL::ping(handle = 1);
native _:MySQL::escape_string(const source[], dest[], handle = 1);
native _:MySQL::query(handle, query[], bool:cache, callback[], format[], {Float,_}:...);
native _:MySQL::cache_row(row, index, dest[], handle = 1);
native _:MySQL::cache_field(field_index, dest[], handle = 1);
native _:MySQL::cache_data(&num_rows, &num_fields, handle = 1);
native _:MySQL::cache_content(row, const field_name[], dest[], handle = 1);
native _:MySQL::mutex(bool:enable);
*/



/*
	GVar Class functions
	(Original by Incognito (c), 2011)
*/



#if defined _gvar_included

#define GVar::              	GVar_

#define GVar_SetInt     	SetGVarInt
#define GVar_GetInt 		GetGVarInt
#define GVar_SetString  	SetGVarString
#define GVar_GetString  	GetGVarString
#define GVar_SetFloat   	SetGVarFloat
#define GVar_GetFloat   	GetGVarFloat
#define GVar_Delete     	DeleteGVar
#define GVar_UpperIndex  	GetGVarsUpperIndex
#define GVar_NameAtIndex    	GetGVarNameAtIndex
#define GVar_Type           	GetGVarType

#define GVar_None		GLOBAL_VARTYPE_NONE
#define GVar_Int            	GLOBAL_VARTYPE_INT
#define GVar_String         	GLOBAL_VARTYPE_STRING
#define GVar_Float          	GLOBAL_VARTYPE_FLOAT

#endif

/*
native _:GVar::SetInt(const name[], value, id = 0);
native _:GVar::GetInt(const name[], id = 0);
native _:GVar::SetString(const name[], const value[], id = 0);
native _:GVar::GetString(const name[], dest[], maxlength = sizeof dest, id = 0);
native _:GVar::SetFloat(const name[], Float:value, id = 0);
native Float:GVar::GetFloat(const name[], id = 0);
native _:GVar::Delete(const name[], id = 0);
native _:GVar::UpperIndex(id = 0);
native _:GVar::NameAtIndex(index, dest[], maxlength = sizeof dest, id = 0);
native _:GVar::Type(const name[], id = 0);
*/