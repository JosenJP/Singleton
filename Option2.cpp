#include"Option2.h"

Singleton2* Singleton2::m_pInstance = new Singleton2();

Singleton2::~Singleton2()
{
	if (nullptr != m_pInstance)
	{
		delete m_pInstance;
		m_pInstance = nullptr;
	}
}

Singleton2* Singleton2::GetInstance()
{
	return m_pInstance;
}

