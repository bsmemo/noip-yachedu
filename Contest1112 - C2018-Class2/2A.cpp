// 题目描述:Problem  A	判断数的正负
// 给定一个整数N，判断其正负。
// 输入
// 一个整数N(-109 <= N <= 109)
// 输出
// 如果N > 0, 输出positive
// 如果N = 0, 输出zero
// 如果N < 0, 输出negative
// 样例输入
//
// 1
//
// 样例输出
//
// positive
#include<iostream>;
using namespace std;
int main()
{
	int n;
	cin>>n;
	if (n>0)cout<<"positive";
	else if (n==0)cout<<"zero";
	else cout<<"negative";
	return 0;
}
