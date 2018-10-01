// 题目描述： Problem  G	分段函数
//
// 编写程序，计算下列分段函数y=f(x)的值。
//
// y=-x+2.5; 0 <= x < 5
//
// y=2-1.5(x-3)(x-3); 5 <= x < 10
//
// y=x/2-1.5; 10 <= x < 20
// 输入
//
// 一个浮点数x,0 <=x < 20
// 输出
//
// 输出x对应的分段函数值：f(x)。结果保留到小数点后三位。
// 样例输入
//
// 1.0
//
// 样例输出
//
// 1.500

#include<iostream>
using namespace  std;
int main()
{
    double x,y;
    cin>>x;
    if(x>=0&&x<5) y=-1*x+2.5;
    else if(x<10) y=2-1.5*(x-3)*(x-3);
    else y=x/2-1.5;
    printf("%.3f",y);
    return 0;
}
