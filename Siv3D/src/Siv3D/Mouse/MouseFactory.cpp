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

# include <Siv3D/Mouse/CMouse.hpp>

namespace s3d
{
	ISiv3DMouse* ISiv3DMouse::Create()
	{
		return new CMouse;
	}
}
