#include"Option3.h"

pthread_mutex_t Singleton3::m_Mutex = PTHREAD_MUTEX_INITIALIZER; //Initialize the Mutex

Singleton3* Singleton3::GetInstance()
{
	pthread_mutex_lock(&m_Mutex); // This is need before C++11. C++11 make sure the constructor of static object is safe to multiple threads.
	static Singleton3 l_Instance;
	pthread_mutex_unlock(&m_Mutex); // This is need before C++11

	return &l_Instance;
}

