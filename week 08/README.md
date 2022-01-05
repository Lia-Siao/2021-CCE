# 第08週

```c
   
///step01-1
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int sum=0, now=1;
	for(int i=1; i<=n; i++){
		now*=i;
		sum+=now;
	}
	printf("%d", sum);
}
```
```c
///step02-1
#include <stdio.h>
int main()
{   ///質數:只能被1和n本身整除!!!
    ///反話:只要有其他人可以整除，死掉了!!!
    int n;
    scanf("%d",&n);

    int bad=0;///一開始還沒有壞掉!
    for(int i=2; i<n; i++){
        if( n%i==0 ) bad=1;///整除! 壞掉了!
    }      ///整除

    if(bad==0) printf("%d是質數",n);
    else printf("%d 壞掉了!! 不是質數", n);
    ///把bad拿來用!!!
}
```
```c
///step02-2
#include <stdio.h>
int main()
{   ///想知道 100以下的全部質數
    for(int now=2; now<=100; now++){
        ///全部都測，測 now 是不是質數!!!
        ///now質數: 只有1和now可以整除
        int bad=0;
        for(int i=2; i<now; i++){
            if( now%i==0 ) bad=1;
        }
        if( bad==0 ) printf("%d ",now);///整到質數
    }
}
```
```c
///step03-1
#include <stdio.h>
int main()
{///三角形
    printf("1: *\n");///1樓，1顆星
    printf("2: **\n");///2樓，2顆星
    printf("3: ***\n");///3樓，3顆星
    printf("4: ****\n");///4樓，4顆星
    printf("5: *****\n");///5樓，5顆星
    printf("6: ******\n");///6樓，6顆星

    int n=6;
    for(int i=1; i<=n; i++){///先建出樓層
        printf("%d: \n",i);
    }
}///高度越高，程式越多... ex. 40層
```
```c
   
///step03-2
#include <stdio.h>
int main()
{///三角形
    printf("1: *\n");///1樓，1顆星
    printf("2: **\n");///2樓，2顆星
    printf("3: ***\n");///3樓，3顆星
    printf("4: ****\n");///4樓，4顆星
    printf("5: *****\n");///5樓，5顆星
    printf("6: ******\n");///6樓，6顆星
    ///高度越高，程式越多... ex. 40層

    int n=6;
    for(int i=1; i<=n; i++){///先建出樓層，第i層
        printf("%d: ",i);///第i樓
        for(int k=1; k<=i; k++) printf("*");///第i樓，有i顆星
        printf("\n");
    }
}
```
```c
///step03-3
#include <stdio.h>

int main( void )
{
    int i,j;
    int n;

    printf("½Ð¿é¤J¤j¤p:\n");
    scanf("%d",&n);

	for(int i=1; i<=n; i++){

		for(int k=1; k<=i; k++) printf(" ");

		for(int k=1; k<=n; k++) printf("*");

		printf("\n");
   	}
    return 0;
}
```
