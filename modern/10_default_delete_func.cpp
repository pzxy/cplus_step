#include <iostream>
using namespace std;
// 1. 类的特殊成员函数。c++11默认添加的构造函数如下：
// - 默认构造函数。
// - 析构函数。
// - 复制构造函数。
// - 复制赋值运算符函数。
// - 移动构造函数（C++11新增）。
// - 移动赋值运算符函数（C++11新增）。

// 注意：只要主动声明任何构造函数，则默认构造函数都不会生成。
// 自定义构造函数代替默认构造函数，类就会转变为非平凡类型。
// 非平凡类型:在C++中，非平凡类型是指具有构造函数、析构函数或拷贝构造函数的类型。这些函数的存在使得该类型的对象在创建、销毁或复制时需要执行特定的操作，因此被称为非平凡类型.

// 2. 显式默认和显式删除
// =default能在类内部使用，也能在类外部使用。
// =delete只能在类内部使用。


// 3. 显示删除的其他用法：
// - delete new运算符，则不能用过new创建对象。
// - delete 析构函数，则不能通过隐式方式创建对象。比如 O obj，static O obj，都会失败。

// 4. explicit和delete
// explicit type(long) = delete，这种还是会删除构造函数。
int main() {}