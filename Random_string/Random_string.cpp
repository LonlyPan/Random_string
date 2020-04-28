// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <time.h>
#include <windows.h>
#include <fstream>
#include <iostream>

using namespace std;

/* 自定义字符集随机生成*/
/* 添加 斜杠 取消注释
char* generateRandomString(int size)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJK";

    int i;
    char* res = (char*)malloc(size + 1);
    for (i = 0; i < size; i++) {
        res[i] = charset[rand() % (int)(sizeof charset - 1)];
    }
    res[i] = '\0';
    return res;
}
//*/

/* 全部 ASCII 码随机生成*/
//* 添加 斜杠 取消注释
#define ASCII_START 32
#define ASCII_END 126

char* generateRandomString(int size)
{
    int i;
    char* res = (char*)malloc(size + 1);
    for (i = 0; i < size; i++) {
        res[i] = (char)(rand() % (ASCII_END - ASCII_START)) + ASCII_START;
    }
    res[i] = '\0';
    return res;
}
//*/
int main()
{
    srand(time(NULL));
    std::cout << "Hello World!\n";

    /* 新建文件并打开，每次都要手动修改文件名*/
    ofstream outfile;
    char tmp[100];
    outfile.open("D:\\G0 X Y Z E.gcode", ios::out | ios::trunc);  // 写模式打开并清除文件内容（若已存在）

    for (int i = 0; i < 1000; i++) {
        /* 生成指定格式数据，需手动修改以匹配不同格式 */
        sprintf_s(tmp, "G0 X%s Y%s Z%s E%s", generateRandomString(2), generateRandomString(2), generateRandomString(2), generateRandomString(2));
        outfile << tmp << endl; // 向文件写入数据
    }
    outfile.close(); // 关闭打开的文件
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件


// test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <time.h>
#include <windows.h>
#include <fstream>
#include <iostream>
#include <stdio.h>

using namespace std;

/* 自定义字符集随机生成*/
/* 添加 斜杠 取消注释
char* generateRandomString(int size)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJK";

    int i;
    char* res = (char*)malloc(size + 1);
    for (i = 0; i < size; i++) {
        res[i] = charset[rand() % (int)(sizeof charset - 1)];
    }
    res[i] = '\0';
    return res;
}
//*/

/* 全部 ASCII 码随机生成*/
//* 添加 斜杠 取消注释
#define ASCII_START 32
#define ASCII_END 126

char* generateRandomString(int size)
{
    int i;
    char* res = (char*)malloc(size + 1);
    for (i = 0; i < size; i++) {
        res[i] = (char)(rand() % (ASCII_END - ASCII_START)) + ASCII_START;
    }
    res[i] = '\0';
    return res;
}
//*/
int main()
{
    srand(time(NULL));
    char filename[100];
    char string_format[100];
    int string_num[100];
    char tmp[100];

    char c;
    int i = 0;

    ofstream outfile;

    std::cout << "/********** Random String **********/\n\n";

    /*
    std::cout << "请输入要保存的文件名+扩展名\n";
    std::cout << "格式示例：123.txt\n";

    while ((c = getchar()) != '\n')
    {
        filename[i] = c;
        i++;
    }
    filename[i] = 0;
    // 新建文件并打开，每次都要手动修改文件名


    outfile.open(filename, ios::out | ios::trunc);  // 写模式打开并清除文件内容（若已存在）
    //std::cout << filename << '\n';
    */

    std::cout << "请输入字符串格式\n";
    std::cout << "格式示例: G0 X%s Y%s Z%s E%s . 其中 %s 将被随机字符串替换\n";
    i = 0;
    while ((c = getchar()) != '\n')
    {
        string_format[i] = c;
        i++;
    }
    string_format[i] = 0;

    std::cout << "请输入字符串长度,与上面的 %s 数量对应\n";
    std::cout << "格式示例: 1235，则第一个 %s 出会被一个随机字符串替代，第二个 %s 会被两个字符替代...示例如下\n";
    scanf_s("%d", string_num, sizeof(string_num));

    sprintf_s(tmp, string_format, generateRandomString(2), generateRandomString(2), generateRandomString(2), generateRandomString(2));


    std::cout << tmp << '\n';





    for (int i = 0; i < 1000; i++) {
        /* 生成指定格式数据，需手动修改以匹配不同格式 */
        sprintf_s(tmp, "'string_format'", generateRandomString(2), generateRandomString(2), generateRandomString(2), generateRandomString(2));
        outfile << tmp << endl; // 向文件写入数据
    }
    outfile.close(); // 关闭打开的文件
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
