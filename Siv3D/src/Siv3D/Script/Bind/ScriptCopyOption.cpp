﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2021 Ryo Suzuki
//	Copyright (c) 2016-2021 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include <Siv3D/Script.hpp>
# include <Siv3D/CopyOption.hpp>

namespace s3d
{
	using namespace AngelScript;

	void RegisterCopyOption(asIScriptEngine* engine)
	{
		int32 r = 0;
		constexpr char TypeName[] = "CopyOption";

		{
			r = engine->RegisterEnumValue(TypeName, "Default", static_cast<uint32>(CopyOption::Default)); assert(r >= 0);
			r = engine->RegisterEnumValue(TypeName, "SkipExisting", static_cast<uint32>(CopyOption::SkipExisting)); assert(r >= 0);
			r = engine->RegisterEnumValue(TypeName, "OverwriteExisting", static_cast<uint32>(CopyOption::OverwriteExisting)); assert(r >= 0);
			r = engine->RegisterEnumValue(TypeName, "UpdateExisting", static_cast<uint32>(CopyOption::UpdateExisting)); assert(r >= 0);
		}
	}
}
