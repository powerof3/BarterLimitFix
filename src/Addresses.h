#pragma once

namespace BarterLimitFix::Addresses
{
	namespace Events
	{
		/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EAA30, 1.6.318.0: SkyrimSE.exe + 0x1F62E0</summary>
		inline const REL::Relocation<std::uintptr_t> GetCount1{ RELOCATION_ID(15895, 16135), OFFSET(0x4F6, 0x5D5) };

		/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EAA30, 1.6.318.0: SkyrimSE.exe + 0x1F62E0</summary>
		inline const REL::Relocation<std::uintptr_t> GetCount2{ RELOCATION_ID(15895, 16135), OFFSET(0xA99, 0xB29) };

		/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EAA30, 1.6.318.0: SkyrimSE.exe + 0x1F62E0</summary>
		inline const REL::Relocation<std::uintptr_t> GetCount3{ RELOCATION_ID(15895, 16135), OFFSET(0xB76, 0xC06) };

		/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EAA30, 1.6.318.0: SkyrimSE.exe + 0x1F62E0</summary>
		inline const REL::Relocation<std::uintptr_t> GetCount4{ RELOCATION_ID(15895, 16135), OFFSET(0xC76, 0xD06) };

		/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EAA30, 1.6.318.0: SkyrimSE.exe + 0x1F62E0</summary>
		inline const REL::Relocation<std::uintptr_t> GetCount5{ RELOCATION_ID(15895, 16135), OFFSET(0xE36, 0xE49) };

		/// <summary>1.5.97.0: SkyrimSE.exe + 0x171790, 1.6.318.0: SkyrimSE.exe + 0x17C270</summary>
		inline const REL::Relocation<std::uintptr_t> HasIterated{ RELOCATION_ID(13661, 13771), 0x124 };

		/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EAA30, 1.6.318.0: SkyrimSE.exe + 0x1F62E0</summary>
		inline const REL::Relocation<std::uintptr_t> SetCount1{ RELOCATION_ID(15895, 16135), OFFSET(0x4FF, 0x5DE) };

		/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EAA30, 1.6.318.0: SkyrimSE.exe + 0x1F62E0</summary>
		inline const REL::Relocation<std::uintptr_t> SetCount2{ RELOCATION_ID(15895, 16135), OFFSET(0xAA0, 0xB30) };

		/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EAA30, 1.6.318.0: SkyrimSE.exe + 0x1F62E0</summary>
		inline const REL::Relocation<std::uintptr_t> SetCount3{ RELOCATION_ID(15895, 16135), OFFSET(0xB7E, 0xC0E) };

		/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EAA30, 1.6.318.0: SkyrimSE.exe + 0x1F62E0</summary>
		inline const REL::Relocation<std::uintptr_t> SetCount4{ RELOCATION_ID(15895, 16135), OFFSET(0xC7E, 0xD0E) };

		/// <summary>1.5.97.0: SkyrimSE.exe + 0x1EAA30, 1.6.318.0: SkyrimSE.exe + 0x1F62E0</summary>
		inline const REL::Relocation<std::uintptr_t> SetCount5{ RELOCATION_ID(15895, 16135), OFFSET(0xE3D, 0xE50) };
	}
}
