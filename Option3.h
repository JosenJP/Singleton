#pragma once
#include <pthread.h>

class Singleton3
{
public:
	Singleton3(const Singleton3& a_rInstance) = delete;
	Singleton3* operator=(const Singleton3& a_rInstance) = delete;
	~Singleton3() {};

	static Singleton3* GetInstance();
private:
	Singleton3() {};

	static pthread_mutex_t m_Mutex;
};