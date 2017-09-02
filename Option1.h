#pragma once
#include <pthread.h>

class Singleton1
{
public:
	Singleton1(const Singleton1& a_rInstance) = delete;
	Singleton1* operator=(const Singleton1& a_rInstance) = delete;
	~Singleton1();

	static Singleton1* GetInstance();
private:
	Singleton1() {};

	static Singleton1* m_pInstance;
	static pthread_mutex_t m_Mutex;
};