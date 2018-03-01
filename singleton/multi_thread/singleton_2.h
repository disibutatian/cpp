#ifndef __SINGLETON_1_H
#define __SINGLETON_1_H

#include <iostream>



class Singleton {
	public:
		static Singleton& Instance() {
			static Singleton instance_;
			return instance_;
		}

		void Print() {
			std::cout << "singleton 2" << std::endl;
		}
	private:
		Singleton();
		~Singleton();
		Singleton(const Singleton&);
		Singleton& operator=(const Singleton&);
	private:

		class Object_creator {
			public:
				Object_creator() {
					std::cout << "Object_creator()" << std::endl;
					Singleton::Instance();
				}
				~Object_creator() {
				}
		};
		static Object_creator create_object;
};

// 需要定义构造函数 析构函数

Singleton::Object_creator Singleton::create_object;


Singleton::Singleton() {
}

Singleton::~Singleton() {
}

#endif
