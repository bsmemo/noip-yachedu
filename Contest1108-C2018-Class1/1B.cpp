// 问题 B: 输入正整数n，输出1+2+….+n的的值
// 时间限制: 1 Sec  内存限制: 128 MB
// 提交: 1328  解决: 852
// [提交][状态][讨论版]
// 题目描述
//
// 输入正整数n，输出1+2+….+n的的值
// 输入
//
// 一个正整数n
// 输出
//
// 输出1+2+….+n的的值
// 样例输入
//
// 100
//
// 样例输出
//
// 5050
//
// 提示
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<n*(n+1)/2;

	return 0;
}
