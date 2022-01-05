# 第17週

```c
#include <stdio.h>
int main()
{
    int n=20030219;
    printf("%d => %d %d\n",n,n/10,n%10);

    n=n/10;
    printf("%d => %d %d\n",n,n/10,n%10);

    n=n/10;
    printf("%d => %d %d\n",n,n/10,n%10);

    n=n/10;
    printf("%d => %d %d\n",n,n/10,n%10);

    n=n/10;
    printf("%d => %d %d\n",n,n/10,n%10);
}
```
```c
#include <stdio.h>
int main()
{
    int n=20030219;
    while(n>0){
        printf("%d => %d %d\n",n,n/10,n%10);
        n=n/10;
    }
}
```
```c
#include <stdio.h>
int main()
{
    int n=1234567892;
    int sum=0;
    while(n>0){
        //printf("%d => %d %d\n",n,n/10,n%10);
        sum+=n%10;
        n=n/10;
    }
    printf("%d\n",sum);
}
```
```c
   
#include <stdio.h>
int f(int n)
{
	int sum=0;
	while(n>0){
		sum+=n%10;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n;
	while(scanf("%d",&n)==1){
	if(n==0)break;
	int ans=f(f(f(n)));
	printf("%d\n",ans);
	}
}
```
