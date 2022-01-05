# 第11週

week11-1.cpp
```c
///Week11-1.cpp step01-1 把篩子法改成印出m以下的質數
#include <stdio.h>
int a[10000000];
int main()
{
	int m;
	scanf("%d",&m);

	///int ans=0;
	for(int i=2;i<m;i++){
		if(a[i]==0){
		///ans++;
		printf("%d ",i);
		for(int k=i+i;k<m;k=k+i){
		a[k]=1;
		}
		}
	}
	///printf("%d\n",ans);
}
```
week11-2.cpp
```c
   
///Week11-2 step02-1 列印前N個質數
#include <stdio.h>
int a[10000000];
int main()
{
	printf("請問你想要幾個質數? (最大的質數不超過10000000) ");
	int Q;
	scanf("%d",&Q);

	int ans=0;
	for(int i=2;ans<Q;i++){
		if(a[i]==0){
		ans++;
		printf("%d ",i);
		for(int k=i+i;k<10000000;k=k+i){
		a[k]=1;
		}
		}
	}
	///printf("%d\n",ans);
}
```
week11-3.cpp
```c
///Week11-3 step02-2 ªwªw±Æ§Çªk
#include <stdio.h>
///int a[10]={4,5,6, 1,2,3, 7,8,9, 0};
///int a[10]={0,3,2,1,4,5,6,7,8,9};
int a[10]={9,8,7,6,5,4,3,2,1,0};
int main()
{
	for(int i=0;i<10;i++)printf("%d ",a[i]);
	printf("\n");

	for(int k=0;k<100;k++){
        for(int i=0;i<10-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        for(int i=0;i<10;i++)printf("%d ",a[i]);
        printf("\n");
	}
}
```
week11-4.cpp
```c
///Week11-4 step03-1 ªwªw±Æ§Çªk
#include <stdio.h>
int a[100];
int main()
{
	for(int i=0;i<100;i++){
        scanf("%d",&a[i]);
	}

	for(int k=0;k<100-1;k++){
        for(int i=0;i<100-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
      }
        for(int i=0;i<100;i++){
        printf("%d\n",a[i]);
	}
}
```
