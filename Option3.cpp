#include"Option3.h"

pthread_mutex_t Singleton3::m_Mutex = PTHREAD_MUTEX_INITIALIZER; //Initialize the Mutex

Singleton3* Singleton3::GetInstance()
{
	pthread_mutex_lock(&m_Mutex); // This is need before C++Ox
	static Singleton3 l_Instance;
	pthread_mutex_unlock(&m_Mutex); // This is need before C++Ox

	return &l_Instance;
}

