#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/I/IDEvent.h"
#include "RE/I/InputEvent.h"
#include "RE/M/MemoryManager.h"

namespace RE
{
	class ButtonEvent : public IDEvent
	{
	public:
		inline static constexpr auto RTTI = RTTI_ButtonEvent;
		inline static constexpr auto VTABLE = VTABLE_ButtonEvent;

		~ButtonEvent() override;  // 00

		void Init(INPUT_DEVICE a_device, std::int32_t a_id, float a_value, float a_duration)
		{
			Init(a_device, a_id, a_value, a_duration, ""sv);
		}

		void Init(INPUT_DEVICE a_device, std::int32_t a_id, float a_value, float a_duration, const BSFixedString& a_userEvent)
		{
			value = a_value;
			heldDownSecs = a_duration;
			device = a_device;
			idCode = a_id;
			userEvent = a_userEvent;
		}

		[[nodiscard]] constexpr float Value() const noexcept { return value; }
		[[nodiscard]] constexpr float HeldDuration() const noexcept { return heldDownSecs; }
		[[nodiscard]] constexpr bool  IsPressed() const noexcept { return Value() > 0.0F; }
		[[nodiscard]] constexpr bool  IsRepeating() const noexcept { return HeldDuration() > 0.0F; }
		[[nodiscard]] constexpr bool  IsDown() const noexcept { return IsPressed() && (HeldDuration() == 0.0F); }
		[[nodiscard]] constexpr bool  IsHeld() const noexcept { return IsPressed() && IsRepeating(); }
		[[nodiscard]] constexpr bool  IsUp() const noexcept { return (Value() == 0.0F) && IsRepeating(); }

		// members
		float value;         // 28
		float heldDownSecs;  // 2C
	};
	static_assert(sizeof(ButtonEvent) == 0x30);
}
