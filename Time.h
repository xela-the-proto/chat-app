
class Time
{

	protected:
	int ora;	 // ore
	int minuti;	 // minuti
	int secondi; // secondi

	public:
	Time()
	{
		ora = 0;
		minuti = 0;
		secondi = 0;
	}

	Time(int h, int m, int s)
	{
		ora = h;
		minuti = m;
		secondi = s;
	}

	int getora(void)
	{
		return ora;
	}
	int getminuti(void)
	{
		return minuti;
	}
	int getsecondi(void)
	{
		return secondi;
	}
	void setora(int h)
	{
		if (h >= 0 && h <= 23)
			ora = h;
	}
	void setminuti(int m)
	{
		if (m >= 0 && m <= 59)
			minuti = m;
	}
	void setsecondi(int s)
	{
		if (s >= 0 && s <= 59)
			secondi = s;
	}

	float diff(Time time)
	{
		float my_h = (float)(this->ora) + (float)(this->minuti) / 60 + (float)(this->secondi) / 3600;
		float h = (float)(time.ora) + (float)(time.minuti) / 60 + (float)(time.secondi) / 3600;

		return (h - my_h);
	}
};
