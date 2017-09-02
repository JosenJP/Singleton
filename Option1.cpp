#include"Option1.h"

Singleton1* Singleton1::m_pInstance = nullptr;
pthread_mutex_t Singleton1::m_Mutex = PTHREAD_MUTEX_INITIALIZER; //Initialize the Mutex

Singleton1::~Singleton1()
{
	if (nullptr != m_pInstance)
	{
		delete m_pInstance;
		m_pInstance = nullptr;
	}
}

Singleton1* Singleton1::GetInstance()
{
	if (nullptr == m_pInstance)
	{
		pthread_mutex_lock(&m_Mutex);

		if (nullptr == m_pInstance)
		{
			m_pInstance = new Singleton1();
		}

		pthread_mutex_unlock(&m_Mutex);
	}

	return m_pInstance;
}

