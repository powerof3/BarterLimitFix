#pragma once

namespace BarterLimitFix
{
	class Events
	{
	public:
		static void Register();

	private:
		template <std::size_t N>
		struct SetCount
		{
			static void thunk(RE::ExtraDataList* extraDataList, std::int32_t count)
			{
				func(extraDataList,
					static_cast<std::int16_t>(std::min(
						count,
						static_cast<std::int32_t>(std::numeric_limits<std::int16_t>::max()))));
			}
			static inline REL::Relocation<decltype(thunk)> func;
		};
	};
}
