#include <stdio.h> //头文件
int main()
{
    double f[50];
    int n,i;
    f[0]=0;
    f[1]=1;
    f[2]=1;	//递归边界条件
    scanf("%d",&n);
    for (i=3;i<=n;i++)
    f[i]=f[i-1]+f[i-2];  //开始使用斐波那契数列
    printf("%0.2lf",f[n]); //输出，保留两位小数
    return 0;
}
