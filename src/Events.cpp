#include "Events.h"

#include "Addresses.h"
#include "Patterns.h"

namespace BarterLimitFix
{
	void Events::Register()
	{
		Patterns::Events::AssertGetCount1();
		Patterns::Events::AssertGetCount2();
		Patterns::Events::AssertGetCount3();
		Patterns::Events::AssertGetCount4();
		Patterns::Events::AssertGetCount5();
		Patterns::Events::AssertHasIterated();
		Patterns::Events::AssertSetCount1();
		Patterns::Events::AssertSetCount2();
		Patterns::Events::AssertSetCount3();
		Patterns::Events::AssertSetCount4();
		Patterns::Events::AssertSetCount5();

		/* Remove the limit of two iterations */
		REL::WriteSafeFill(Addresses::Events::HasIterated.address() + 0x2, 0x00, 4);

		/* Remove the cast from a 32-byte integer to a 16-byte integer */
		constexpr std::uint8_t getCount1[]{ 0x41, 0x8B, 0x54, 0x24, 0x10, REL::NOP };  // mov edx, [r12 + 10]
		constexpr std::uint8_t getCount2[]{ 0x44, 0x29, 0xF2, REL::NOP };              // sub edx, r14d
		constexpr std::uint8_t getCount3[]{ 0x41, 0x8B, 0x55, 0x10, REL::NOP };        // mov edx, [r13 + 10]
		constexpr std::uint8_t getCount4[]{ 0x41, 0x8B, 0x57, 0x10, REL::NOP };        // mov edx, [r15 + 10]
		constexpr std::uint8_t getCount5[]{ 0x44, 0x29, 0xE2, REL::NOP };              // sub edx, r12d

		REL::WriteSafe(Addresses::Events::GetCount1.address(), getCount1, sizeof(getCount1));
		REL::WriteSafe(Addresses::Events::GetCount2.address(), getCount2, sizeof(getCount2));
		REL::WriteSafe(Addresses::Events::GetCount3.address(), getCount3, sizeof(getCount3));
		REL::WriteSafe(Addresses::Events::GetCount4.address(), getCount4, sizeof(getCount4));
		REL::WriteSafe(Addresses::Events::GetCount5.address(), getCount5, sizeof(getCount5));

		/* Limit count to the maximum value that a 16-byte integer can store (32,767) */
		stl::write_thunk_call<SetCount<1>>(Addresses::Events::SetCount1.address());
		stl::write_thunk_call<SetCount<2>>(Addresses::Events::SetCount2.address());
		stl::write_thunk_call<SetCount<3>>(Addresses::Events::SetCount3.address());
		stl::write_thunk_call<SetCount<4>>(Addresses::Events::SetCount4.address());
		stl::write_thunk_call<SetCount<5>>(Addresses::Events::SetCount5.address());

		REX::INFO("Registered events");
	}
}
