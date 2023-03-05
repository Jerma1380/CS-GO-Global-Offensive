class rational {
private:
	int a, b;
public:
	friend rational operator -(const rational& first, const rational& second);
	rational operator ++(int);
	rational operator ++();
	rational operator +(const rational& first);
	bool operator ==(const rational& first);
	rational operator =(const rational& first);
	bool operator >(const rational& first);
	rational(int a1, int b1);
	rational();
	void set(int a1, int b1);
	void show();
};
