#ifndef __SINGLETON_1_H
#define __SINGLETON_1_H

#include <iostream>

class Singleton {
	public:
		static Singleton& Instance() {
			if(instance_ == NULL) {
				instance_ = new Singleton;
			}
			//std::cout <<"instance addr " << instance_ << std::endl;
			return *instance_;
		}
		void Print() {
			std::cout << "singleton 1" << std::endl;
		}
	private:
		Singleton();
		~Singleton();
		Singleton(const Singleton&);
		Singleton& operator=(const Singleton&);
	private:
		static Singleton* instance_;
	// 定义私有类，实现单例模式 资源的自动释放
	private:
		class RGarbage {
		public:

			RGarbage() {
				std::cout << "RGarbage() is called" << std::endl;
			}

			~RGarbage() {
				std::cout << "~RGarbage() is called" << std::endl;
				if(Singleton::instance_ ) {
					std::cout << "delete Singleton::instance_ " << std::endl;
					delete Singleton::instance_;
				}
			}
		};

		static RGarbage rgar;
};

// 需要定义静态变量和构造函数

Singleton* Singleton::instance_ = NULL;
Singleton::RGarbage Singleton::rgar;

Singleton::Singleton() {
}

Singleton::~Singleton() {
}
#endif
