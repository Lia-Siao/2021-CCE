# 第06週

```c
#include <stdio.h>
int main()
{
    int a=999;
    int b=100;
    printf ("a:%d b:%d\n",a,b);
    b=a;
    printf ("a:%d b:%d\n",a,b);
}
```
```c
#include <stdio.h>
int main()
{
    int a=999;
    int b=100;
    int temp;
    printf ("a:%d b:%d\n",a,b);

    temp=a;
    a=b;
    b=temp;
    printf ("a:%d b:%d\n",a,b);
}
```
```c
#include <stdio.h>
int main()
{
    int a,b,c;
    int temp;
    scanf("%d%d%d",&a,&b,&c);
    printf("˛{Śba:%d b:%d c:%d\n",a,b,c);
    if ( a > c ){
    	temp=a;
    	a=c;
    	c=temp;
    }
    printf("˛{Śba:%d b:%d c:%d\n",a,b,c);
    if ( b > c ){
    	temp=b;
    	b=c;
    	c=temp;
    }
    printf("˛{Śba:%d b:%d c:%d\n",a,b,c);
}
```
```c
#include <stdio.h>
int main()
{
    int a,b,c;
    int temp;
    scanf("%d%d%d",&a,&b,&c);

    if ( a > c ){
    	temp=a;
    	a=c;
    	c=temp;
    }
    if ( b > c ){
    	temp=b;
    	b=c;
    	c=temp;
    }
    if ( a+b <= c ) printf("錯誤");
    else if( a*a + b*b == c*c ) printf("直角");
    else if( a*a + b*b < c*c ) printf("鈍角");
    else if( a*a + b*b > c*c ) printf("銳角");
}
```
```c
#include <stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(a>c){
	   temp=a;
	   a=c;
	   c=temp;
	}
	if(b>c){
	   temp=b;
	   b=c;
	   c=temp;
	}
	if(a>b){
	   temp=a;
	   a=b;
	   b=temp;
	}
	printf("%d %d %d", a, b, c);
}
```
