#define _CRT_SECURE_NO_WARNINGS
//2.static修饰全局变量
static int g_val = 17;
/*
* 1.static如果修饰全局变量则只能在变量所在的源文件(.c)内部可以使
* 用其他源文件不可用。
*/

//3.static修饰函数
int Add(int a, int b) {
	/*
	* 1.static如果修饰函数则只能在函数所在的源文件(.c)内部可以使
	* 用其他源文件不可用。
	*
	* 2.函数：在其他源文件中依然可以使用，因为函数具有外部链接属
	* 性但被static修饰后，就变成了内部链接属性，其他源文件就不能
	* 链接到这个静态的函数了(和全局变量类似)
	*/
	return a + b;
}
