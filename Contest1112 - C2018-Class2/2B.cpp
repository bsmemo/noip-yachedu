// 题目描述 Problem  B	判断是否为两位数
// 判断一个正整数是否是两位数（即大于等于10且小于等于99）。
// 输入
// 一个正整数，不超过1000。
// 输出
// 一行。若该正整数是两位数，输出1，否则输出0。
// 样例输入
//
// 54
//
// 样例输出
//
// 1
#include<iostream>;
using namespace std;
int main()
{
	int n;
	cin>>n;
	if (n>=10&&n<=99) cout<<1;
	else cout<<0;
	return 0;
}
