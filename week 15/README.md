# 第15週

```c
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int ans=1;
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("%d",ans);
    return 0;
}
```
```c
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int c=a%b;
    while(c!=0){
        a=b;
        b=c;
        c=a%b;
    }
    printf("%d",b);
}
```
```c
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a%b;

    printf("a大的%d b中的%d c小的%d\n",a,b,c);

    while(1){
        if(c==0) break;
        a=b;
        b=c;
        c=a%b;
        printf("a大的%d b中的%d c小的%d\n",a,b,c);
    }
    printf("因為c是0，離開迴圈，而且答案是中間的b\n");
    printf("%d",b);
}
```
```c
#include <stdio.h>
int box(int a,int b)
{
    if(a==0) return b;
    if(b==0) return a;
    return box(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=box(a,b);
    printf("%d",ans);
}
```
