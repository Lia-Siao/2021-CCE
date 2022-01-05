# 第07週

week07-1.cpp
```c
///Week07 step01-1

#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if(a<=b && b<=c) printf("%d %d %d", a,b,c);
	else if(a<=c && c<=b) printf("%d %d %d", a,c,b);
	else if(b<=a && a<=c) printf("%d %d %d", b,a,c);
	else if(b<=c && c<=a) printf("%d %d %d", b,c,a);
	else if(c<=a && a<=b) printf("%d %d %d", c,a,b);
	else if(c<=b && b<=a) printf("%d %d %d", c,b,a);

}
```
week07-2.cpp
```c
   
///Week07 step01-2 複習 if(判斷) 及新的 while(迴圈)
#include <stdio.h>
int main()
{
    int n=10;
//  if(n>0){
//    printf("n大於0\n");
//  }
    while(n>0){
        printf("n大於0\n");
    }
}
```
week07-3.cpp
```c
///Week07 step02-1 while(°j°é) °t n=n-1
#include <stdio.h>
int main()
{
    int n=2;
    while(n>0){
        printf("n¤j©ó0\n");
        n=n-1;
    }
}
```
week07-4.cpp
```c
///Week07 step02-2 變成 for(迴圈)
#include <stdio.h>

int main()
{    ///前面   ;中間; 最後
    for(int n=7; n>0; n--){
        printf("n大於0\n");
    }
}
```
week07-5.cpp
```c
///Week07 step03-1
///了解 for (迴圈)
#include <stdio.h>
int main()
{
    int i; ///1973年的C發明者的寫法，1989年的ANSI
    for( i = 0; i<=3; i++){
        printf("有幾次呢?\n");
    }///課本的寫法，不好!!!

    ///1998/1999 新版的 C++/C寫法
    for( int i=0; i<3; i++){
        printf("老師推薦的寫法，有幾次?\n");
    }///會跑3次
}
```
week07-6.cpp
```c
///Week07 step03-2 各種比較 for迴圈
#include <stdio.h>
int main()
{   ///最簡單的基礎型 電腦
    for(int i=0; i<4; i++){
        printf("i:%d\n", i);
    }///跑4次: 0 1 2 3

    ///最簡單的基礎型 人類數數字
    for(int i=1; i<=4; i++){
        printf("人類的數法i:%d\n",i);
    }///跑4次: 1 2 3 4

    for(int i=0; i<=4; i++){
        printf("怪怪的...%d\n",i);
    }///怪怪的，可以從基礎型走過來
}
```
