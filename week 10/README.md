# 第10週

```c
///Week10-1 step01-1 數質數有幾個
#include <stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int ans=0;
    for(int n=2;n<=m;n++){
        int bad=0;
        for(int i=2; i<n; i++){
            if(n%i==0)bad=1;
        }
        if(bad==0){///找到1葛質數
            ans++;///多一個質數囉!!!
            printf("%d ",n);
        }
    }
    printf("\n Ans: %d \n",ans);
}
```
```c
///Week10-2.cpp step02-1
#include <stdio.h>
int main()
{
    int a=100;
    int b=200;
    int c;
    printf("a:%d b:%d c:%d\n",a,b,c);

    int d[3]={100,200,300};
    printf("d[0]:%d\n",d[0]);
    printf("d[1]:%d\n",d[1]);
    printf("d[2]:%d\n",d[2]);

    int f[3];
    printf("f[0]:%d\n",f[0]);
    printf("f[1]:%d\n",f[1]);
    printf("f[2]:%d\n",f[2]);
}
```
```c
///Week10-3.cpp step02-2
#include <stdio.h>
int main()
{
    int d[3]={100,200,300};
    ///printf("d[0]:%d\n",d[0]);
    ///printf("d[1]:%d\n",d[1]);
    ///printf("d[2]:%d\n",d[2]);
    ///¹q¸£±q0¶}©l
    for(int i=0;i<3;i++){
        printf("d[%d]:%d\n",i,d[i]);
    }
}
```
```c
///Week10-4.cpp step03-1
#include <stdio.h>
int a[10000000]= {};
int main()
{
    int ans=0;
    for(int i=2; i<10000000; i++){
        if(a[i]==0){
            ans++;
            for(int k=i+i; k<10000000; k=k+i){
                a[k]=1;
            }
        }
    }
    printf(" Ans: %d ",ans);
}
```
