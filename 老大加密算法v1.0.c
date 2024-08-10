#include<stdio.h>
int main()
{
    long long user,b,c,d,e;//user是用户输入的内容，b是24的系数，c是user%24后剩余的部分，d是8的系数，e是经过前面运算后的剩余部分
    printf("Please enter an integer(After typing, press the [Enter] key to continue):\n");//翻译：请输入整数（输入后，按[Enter]键继续）
    scanf("%lld",&user);//我会指针啦！（自豪）虽然是最简单的（小声嘀咕）
    b=user/24;//由于结果是浮点数，所以long long在储存的时候直接将小数部分截去，不会进行四舍五入或其他（其实也用不上小数部分）
    c=user%24;
    d=c/8;//同上
    e=c%8;
    printf("The result after encryption is:%lldMAN+(%lldman)+(%lld)\n",b,d,e);//翻译：加密后的结果是（MAN=24,man=8）
    return 0;
}
