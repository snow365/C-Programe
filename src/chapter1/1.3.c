#include <stdio.h>

int main()
{
	/**
	 * 关于定义max函数：
	 * 	书上说，max之所以要在main函数显式定义，是因为max函数声明是在main函数之后。
	 * 	而编译也自上而下进行的，因此为了让编译器能识别出max函数，需要在调用前先对其
	 * 	声明。
	 *
	 * 	但我发现将这行定义删除，也能够正常编译和运行。
	 */
	int max(int x, int y);
	int inputNumber1, inputNumber2;
	// 当我input输入字符串时，会根据ASCII转成10进制
	printf("please input a number1\n");
	scanf("%d", &inputNumber1);
	printf("please input a number2\n");
	scanf("%d", &inputNumber2);

	// 我想打印inputNumber1的地址，怎么写？
	printf("inputNumber1 address is %s, inputNumber2 address is %s\n", &inputNumber1, &inputNumber2);
	printf("max number is\n %d", max(inputNumber1, inputNumber2));
}

int max(int x, int y)
{
	return x > y ? x : y;
}
