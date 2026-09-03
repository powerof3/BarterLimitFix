#include "Patterns.h"

#include "Addresses.h"

namespace BarterLimitFix::Patterns
{
	namespace Events
	{
		void AssertGetCount1()
		{
			REL::Pattern<"41 0F B7 54 24 10">().match_or_fail(  // movzx edx, word ptr [r12 + 10]
				Addresses::Events::GetCount1.address());        // 0x6
		}

		void AssertGetCount2()
		{
			REL::Pattern<"66 41 2B D6">().match_or_fail(  // sub dx, r14w
				Addresses::Events::GetCount2.address());  // 0x4
		}

		void AssertGetCount3()
		{
			REL::Pattern<"41 0F B7 55 10">().match_or_fail(  // movzx edx, word ptr [r13 + 10]
				Addresses::Events::GetCount3.address());     // 0x5
		}

		void AssertGetCount4()
		{
			REL::Pattern<"41 0F B7 57 10">().match_or_fail(  // movzx edx, word ptr [r15 + 10]
				Addresses::Events::GetCount4.address());     // 0x5
		}

		void AssertGetCount5()
		{
			REL::Pattern<"66 41 2B D4">().match_or_fail(  // sub dx, r12w
				Addresses::Events::GetCount5.address());  // 0x4
		}

		void AssertHasIterated()
		{
			REL::Pattern<OFFSET("0F 85 5D 04 00 00", "0F 85 5F 04 00 00")>().match_or_fail(  // jnz 45D / jnz 45F
				Addresses::Events::HasIterated.address());                                   // 0x6
		}

		void AssertSetCount1()
		{
			REL::Pattern<"E8">().match_or_fail(           // call ExtraDataList::SetCount
				Addresses::Events::SetCount1.address());  // 0x5
		}

		void AssertSetCount2()
		{
			REL::Pattern<"E8">().match_or_fail(           // call ExtraDataList::SetCount
				Addresses::Events::SetCount2.address());  // 0x5
		}

		void AssertSetCount3()
		{
			REL::Pattern<"E8">().match_or_fail(           // call ExtraDataList::SetCount
				Addresses::Events::SetCount3.address());  // 0x5
		}

		void AssertSetCount4()
		{
			REL::Pattern<"E8">().match_or_fail(           // call ExtraDataList::SetCount
				Addresses::Events::SetCount4.address());  // 0x5
		}

		void AssertSetCount5()
		{
			REL::Pattern<"E8">().match_or_fail(           // call ExtraDataList::SetCount
				Addresses::Events::SetCount5.address());  // 0x5
		}
	}
}
