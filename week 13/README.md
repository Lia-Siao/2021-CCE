# 第13週

```c
#include <stdio.h>
int main()
{
    printf("請輸入座號1~10=>");
    int id;
    scanf("%d",&id);

    printf(" %5s %5s %5s %5s %5s %5s %5s %5s %5s\n",
           "姓名","座號","國語","數學","英文","基電","電子","總分","平均成績");
    printf(" %5s %5d %5d %5d %5d %5d %5d %5d %6.2f\n",
           "名字1",1, 1, 1, 1, 1, 1, 5, 1.0f);
    printf(" %5s %5d %5d %5d %5d %5d %5d %5d %6.2f\n",
           "名字5",5, 100, 100, 100, 100, 100, 500, 100.0f);
}
```
```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("¤U­±·|¨q¥X system()¨ç¦¡ªºµ²ªG\n");

    system("dir");

    printf("Hello World");
    return 0;
}
```
```c
#include <stdio.h>

void printStar(int n)
{
    for(int i=0;i<n;i++) printf("*");
}

int main()
{
    printStar(7);
}
```
```c
   
#include <stdio.h>

void printStar(int n)
{
    for(int i=0;i<n;i++) printf("*");
}

int main()
{
    for(int i=0;i<10;i++){
        printStar(i);
        printf("\n");
    }
}
```
```c
   
#include <stdio.h>

void printStar(int n)
{
    for(int i=0;i<n;i++) printf("*");
}
void printSpace(int n)
{
    for(int i=0;i<n;i++) printf(" ");
}
int main()
{
    for(int i=0;i<10;i++){
        printSpace(9-i);
        printStar(i);
        printf("\n");
    }
}
```
```c
   
#include <stdio.h>
int a[100];

int main()
{
	for(int i=0;i<100;i++)scanf("%d",&a[i]);

	for(int i=99;i>=0;i--)printf("%d\n",a[i]);
}
```
