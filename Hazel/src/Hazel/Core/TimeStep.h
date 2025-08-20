#pragma once

namespace Hazel
{
	class TimeStep
	{
	public:
		TimeStep(float time = 0.0f)
			:m_Time(time)
		{
		}
		float GetSceonds() const { return m_Time; }
		float GetMilliSceonds() const { return m_Time * 1000.0f; }

		operator float()const { return m_Time; }
	private:
		float m_Time;
	};
}