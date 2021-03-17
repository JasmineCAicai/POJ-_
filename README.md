# 准备机试
POJ练习，并按类别记录每题的思路和答案。

## 简单计算题

### poj-2750-鸡兔同笼
脚的总数：N
1. N为奇数，直接输出“0 0”；
2. N为4的倍数，输出N/4和N/2；
3. N不为4的倍数，输出N/4+1和N/2；

### poj-1657-棋盘上的距离
x = 起始位置与终止位置在水平方向上的距离（如f-e=1，在每步一格的情况下，f到e需要一步）

y = 起始位置与终止位置在竖直方向上的距离（如5-2=3，在每步一格的情况下，5到2需要三步）

1. 王：x,y中的最大值
2. 后：同行/同列/x=y --> 1；其他情况 --> 2
3. 车：同行/同列 --> 1；其他情况 --> 2
4. 象：x-y的绝对值不是偶数 --> Inf；x=y --> 1；其他情况 --> 2

注意！！是Inf，不是lnf也不是inf。

### poj-2808-校门外的树
树的总数 = 路的长度+ 1

使用指针来定义数组。

使用malloc来分配内存，最后记得free数组所占的内存。

数组的每个元素的值设为1，每输入一组 起始值 与 终止值，便将区间内的元素的值设为0（若存在区间重合的情况也不会影响正确率）。

### poj-2801-填词
定义一个有26个元素的数组，分别记录在输入的矩形中每个字母出现的次数，当读入但此时，将数组中对应到单词中的字母的元素值减1,。处理完所有的单词后，将数组中的非0的元素对应的字母依次输出，数组元素的值是几就输出几次该字母。

**隐式转换问题：C++中不能直接输出 'A' + i ，需要static_cast<char>('A'+i);**
  
### poj-1017-装箱问题
6x6 占1个

5x5 占1个

4x4 占1个

3x3 考虑4的倍数

2x2 被4x4占用的箱子还可放入5个2x2的箱子

1X1 总箱子个数x36 - （已占用的总和）

### poj-2714-平均年龄
输出保留到小数点后两位：cout << fixed << setprecision(2) << ans << endl;

### poj-2796-数字求和

### poj-2807-两倍

### poj-2714-肿瘤面积
分别算出出现的第一行‘0’的个数x，和第一列‘0’的个数y，肿瘤面积=（x-2)*(y-2)。

### poj-2800-垂直直方图

### poj-2677-肿瘤检测

### poj-2767-简单密码
要注意是解密还是加密。加密用加法，解密用减法。

## 数制转换问题

### poj-2972-确定进制

### poj-2973-Skew数
用一个整型数组base[31], 一次存储skew数最末位、倒数第2位、···、第31位的基数值。使用这个数组，把每个skew数转换成对应的十进制数。

base[0] = 1; base[k] = 2^(k+1) - 1 = 2 * (2^k - 1) + 1 = 2 * base[k - 1] + 1;

### poj-2734-十进制到八进制

### poj-2735-八进制到十进制
注意pow返回值是double类型。

## 字符串处理
### poj-2742-统计字符数
### poj-2974-487-3279
### poj-2744-子串
POJ环境下，C++不支持strrev，需自己实现；对于strcpy和strncpy的unsafe问题不会报错

VS环境下，支持strrev；但对于strcpy和strncpy的unsafe问题会报错。

使用的主要函数：strlen，strncpy，strcpy，strstr，strrev

### poj-2975-Caesar密码
### poj-2743-字符串判等
要注意区分两个字符串全是空格、长度为0、不全是空格的情况。
### poj-2976-All in All

## 日期和时间处理
### poj-2733-判断闰年
