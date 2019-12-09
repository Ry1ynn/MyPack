#include "MyPack.h"

int main()
{
	MyPack pack;

	// 1 将相关文件读取到内存
	pack.LoadFile("demo.exe");// 源文件
	pack.LoadStub("MyStub.dll");// 壳代码
	// 2 后者复制到前者,实现添加新区段头
	pack.CopySection(".pack",".text");
	// 3 设置OEP(为start 函数地址
	pack.SetOEP();
	// 4 设置新区段内容(后者拷贝至前者
	pack.CopySectionData(".pack",".text");
	// 5 另存为新文件
	pack.SaveFile("demo_pack.exe");

	return 0;
}