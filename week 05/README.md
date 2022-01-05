# 第05週

```c
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n<=100 && n>=90) printf("A+");
    if (n<=89 && n>=80) printf("A");
    if (n<=79 && n>=70) printf("B");
    if (n<=69 && n>=60) printf("C");
    if (n<=59) printf("D");
}
```
```c
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)printf("a¬O¥¿¼Æ");
    if(a<0)printf("a¬O­t¼Æ");
    if(a==0)printf("a¬O0");
}
```
```c
#include <stdio.h>
int main()
{
    if (10>0) printf("10>0成立\n");
    if (10<0) printf("10<0成立\n");
    if (-3) printf("-3是成立的嗎?\n");
    if (-2) printf("-2是成立的嗎?\n");
    if (-1) printf("-1是成立的嗎?\n");
    if (0) printf("0是成立的嗎?\n");
    if (1) printf("1是成立的嗎?\n");
    if (2) printf("2是成立的嗎?\n");
    if (3) printf("3是成立的嗎?\n");
}
```
```c
   
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n%2==0)printf("even");
	if (n%2==1)printf("odd");
}
```
```c
#include <stdio.h>
int main()
{
    int n;
    n = 2; //scanf("%d",&n);
    if (n%2==0) printf("even");
    else printf ("odd");
}
```
