////////////////////////////////////////////////////////////////////////////
//	Module 		: pch_script.h
//	Created 	: 23.05.2007
//  Modified 	: 23.05.2007
//	Author		: Dmitriy Iassenev
//	Description : precompiled header for lua and luabind users
////////////////////////////////////////////////////////////////////////////

#ifndef PCH_SCRIPT_H
#define PCH_SCRIPT_H

#include "stdafx.h"

//#pragma warning(disable:4244)
//#pragma warning(disable:4995)
//#pragma warning(disable:4530)
//#pragma warning(disable:4267)

extern "C" {
	#include "../../LuaJIT/src/lua.h"
	#include "../../LuaJIT/src/lualib.h"
	#include "../../LuaJIT/src/lauxlib.h"
	#include "../../LuaJIT/src/luajit.h"
};

#pragma warning(push)
#pragma warning(disable:4995)
#include "../../Luabind/luabind/luabind.hpp"
#pragma warning(pop)

#include "../../Luabind/luabind/object.hpp"
#include "../../Luabind/luabind//functor.hpp"
#include "../../Luabind/luabind/operator.hpp"
#include "../../Luabind/luabind/adopt_policy.hpp"
#include "../../Luabind/luabind/return_reference_to_policy.hpp"
#include "../../Luabind/luabind/out_value_policy.hpp"
#include "../../Luabind/luabind/iterator_policy.hpp"

#endif // PCH_SCRIPT_H