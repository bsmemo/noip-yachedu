// 问题 E: 小鱼的游泳时间
// 时间限制: 1 Sec  内存限制: 128 MB
// 提交: 720  解决: 394
// [提交][状态][讨论版]
// 题目描述
// 伦敦奥运会要到了，小鱼在拼命练习游泳准备参加游泳比赛，可怜的小鱼并不知道鱼类是不能参加人类的奥运会的。这一天，小鱼给自己的游泳时间做了精确的计时 （本题中的计时都按24小时制计算），它发现自己从a时b分一直游泳到当天的c时d分，请你帮小鱼计算一下，它这天一共游了多少时间呢？小鱼游的好辛苦 呀，你可不要算错了哦。
// 输入
// 游泳的开始时间与结束时间
// 输出
// 小鱼一共游了多少时间
// 样例输入
//
// 12 50 19 10
//
// 样例输出
//
// 6 20
//
// 提示
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<((c*60+d)-(a*60+b))/60;
    cout<<" ";
    cout<<((c*60+d)-(a*60+b))%60;
    return 0;
}
