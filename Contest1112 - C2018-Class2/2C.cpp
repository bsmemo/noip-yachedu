// 题目描述：Problem  C	收集瓶盖赢大奖
//
// 某饮料公司最近推出了一个“收集瓶盖赢大奖”的活动：如果你拥有10个印有“幸运”、或20个印有“鼓励”的瓶盖，就可以兑换一个神秘大奖。
//
// 现分别给出你拥有的印有“幸运”和“鼓励”的瓶盖数，判断是否可以去兑换大奖。
// 输入
// 一行，包含两个整数，分别是印有“鼓励”和“幸运”的瓶盖数，用一个空格隔开。
// 输出
// 一行。若可以兑换大奖，输出Yes，否则输出No。
// 样例输入
//
// 19 11
//
// 样例输出
//
// Yes
#include<iostream>;
using namespace std;
int main()
{
	int n,y;
	cin>>n>>y;
	if (n>=20||y>=10) cout<<"Yes";
	else cout<<"No";
	return 0;
}
