#include<stdio.h>
int main(void)
{
    //常量部分
    int UserRange=0;//UserRange是用户输入的数字的范围
    long long user;//user是用户输入的内容
    long long b,c,d,e;//b是24的系数，c是user%24后剩余的部分，d是8的系数，e是经过前面运算后的剩余部分

    //用户提示部分
    printf("Please enter an integer(After typing, press the [Enter] key to continue):\n");//翻译：请输入整数（输入后，按[Enter]键继续）

    //运算部分
    scanf("%lld",&user);
    b=user/24;//由于结果是浮点数，所以long long在储存的时候直接将小数部分截去，不会进行四舍五入或其他
    c=user%24;
    d=c/8;//同上
    e=c%8;

    //判断部分（user的范围）
    if(user<=-24)
        {
            UserRange=1;
        }
    else if(user<0&&user>-24)
        {
            UserRange=2;
        }
    else if(user==0)
        {
            UserRange=3;
        }
    else if(user>0&&user<24)
        {
            UserRange=4;
        }
    else if(user>=24)
        {
            UserRange=5;
        }

    //打印部分（MAN=24,man=8）
    switch(UserRange)
    {
        case 1:
            if(d==0&&e!=0)
            {
                printf("The result after encryption is:%lldMAN%lld\n",b,e);
            }
            else if(d!=0&&e==0)
            {
                printf("The result after encryption is:%lldMAN%lldman\n",b,d);

            }
            else if(d!=0&&e!=0)
            {
                printf("The result after encryption is:%lldMAN%lldman%lld\n",b,d,e);
            }
            else if(d==0&&e==0)
            {
                printf("The result after encryption is:%lldMAN\n",b);
            }
            break;
        case 2:
            if(d==0&&e!=0)
            {
                printf("The result after encryption is:%lld\n",e);
            }
            else if(d!=0&&e==0)
            {
                printf("The result after encryption is:%lldman\n",d);
            }
            else if(d!=0&&e!=0)
            {
                printf("The result after encryption is:%lldman%lld",d,e);
            }
            break;
        case 3:
            printf("The result after encryption is:0\n");
            break;
        case 4:
            if(d==0&&e!=0)
            {
                printf("The result after encryption is:%lld\n",e);
            }
            else if(d!=0&&e==0)
            {
                printf("The result after encryption is:%lldman\n",d);
            }
            else if(d!=0&&e!=0)
            {
                printf("The result after encryption is:%lldman+%lld\n",d,e);
            }
            break;
        case 5:
            if(d==0&&e!=0)
            {
                printf("The result after encryption is:%lldMAN+%lld\n",b,e);
            }
            else if(d!=0&&e==0)
            {
                printf("The result after encryption is:%lldMAN+%lldman\n",b,d);
            }
            else if(d!=0&&e!=0)
            {
                printf("The result after encryption is:%lldMAN+%lldman+%lld\n",b,d,e);
            }
            else if(d==0&&e==0)
            {
                printf("The result after encryption is:%lldMAN\n",b);
            }
            break;
    }
    return 0;
}