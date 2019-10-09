//函数使用的实例
#include <iostream>

using namespace std;
//函数声明，注意，在这里void函数是没有返回值的
void display_message();
//主程序
int main()
{
cout << "Hello from main" << endl;
for (unsigned count = 0; count < 5; count++)
{
    //函数调用
    display_message();
}
cout << "Back in main again" << endl;
return 0;
}

//函数的解释，同样，void函数是没有返回值的
void display_message()
{
cout << "Hello from display_message" << endl;
}