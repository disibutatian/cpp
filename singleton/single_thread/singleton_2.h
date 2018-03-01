#ifndef __SINGLETON_1_H
#define __SINGLETON_1_H

#include <iostream>

class Singleton {
	public:
		static Singleton& Instance() {
			// 定义一个local static 变量
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
};

// 需要定义构造函数 析构函数

Singleton::Singleton() {
}

/*
 *
 * 析构函数在下边3种情况时被调用：
 * 1.对象生命周期结束，被销毁时；
 * 2.delete指向对象的指针时，或delete指向对象的基类类型指针，而其基类虚构函数是虚函数时；
 * 3.对象i是对象o的成员，o的析构函数被调用时，对象i的析构函数也被调用
 */

Singleton::~Singleton() {
}

#endif
