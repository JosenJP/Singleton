#pragma once

class Singleton2
{
public:
	Singleton2(const Singleton2& a_rInstance) = delete;
	Singleton2* operator=(const Singleton2& a_rInstance) = delete;
	~Singleton2();

	static Singleton2* GetInstance();
private:
	Singleton2() {};

	static Singleton2* m_pInstance;
};