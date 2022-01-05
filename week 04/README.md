# 第04週

week04-1.cpp
```c
#include <stdio.h>
int main()
{
    int a=123,b=10;
    printf("%d\n",a/b);
    printf("%d\n",a%b);
}
```
week04-2.cpp
```c
#include <stdio.h>
int main()
{
    int a=123,b=10;
    int ans=a/b;
    float ans2=123.0/10.0;
    printf("¾ã¼Æ°£¾ã¼Æ %d\n",ans);
    printf("floatªº°£ªk %f\n",ans2);
}
```
week04-3.cpp
```c
#include <stdio.h>
int main()
{
    float pi = 3.14159265358979;
    double pii=3.14159265358979;
    printf("%f\n",pi);
    printf("%f\n",pii);

    printf("%.8f\n",pii);
    printf("%.12f\n",pii);
    printf("%9.5f\n",pii);
}
```
week04-4.cpp
```c
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n>=90)printf("A+");
    else if(n>=80)printf("A");
    else if(n>=70)printf("B");
    else if(n>=60)printf("C");
    else printf("D");
}
```
