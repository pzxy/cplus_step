# 总结
- 预处理不属于 C++ 语言，过多的预处理语句会扰乱正常的代码，除非必要，应当少用慎用；
- “#include”可以包含任意文件，所以可以写一些小的代码片段，再引进程序里；
- 头文件应该加上“Include Guard”，防止重复包含；
- “#define”用于宏定义，非常灵活，但滥用文本替换可能会降低代码的可读性；
- “条件编译”其实就是预处理编程里的分支语句，可以改变源码的形态，针对系统生成最合适的代码。