
#include "Time.h"

class EnglishTime : public Time
{

public:
	using Time::setora;

	EnglishTime(void) : Time() {}

	EnglishTime(int h, int m, int s) : Time(h, m, s) {}

	EnglishTime(int h, int m, int s, bool pm)
	{
		if (pm)
		{
			if (h >= 1 && h < 12)
				ora = h + 12;
			else
			{
				if (h == 12)
					ora = 12;
				else
					ora = 0;
			}
		}
		else
		{ // AM
			if (h >= 1 && h < 12)
				ora = h;
			else
				ora = 0;
		}
		if (m >= 0 && m <= 59)
			minuti = m;
		else
			minuti = 0;
		if (s >= 0 && s <= 59)
			secondi = s;
		else
			secondi = 0;
	}

	void setora(int h, bool pm)
	{
		if (pm)
		{
			if (h >= 1 && h < 12)
				ora = h + 12;
			if (h == 12)
				ora = 12;
		}
		else
		{ // AM
			if (h >= 1 && h < 12)
				ora = h;
			if (h == 12)
				ora = 0;
		}
	}

	int getEnglishora(void)
	{
		if (ora > 12)
			return ora - 12;
		else
		{
			if (ora == 0)
				return 12;
			else
				return ora;
		}
	}

	bool isPM(void)
	{
		if (ora >= 12)
			return true;
		else
			return false;
	}
};