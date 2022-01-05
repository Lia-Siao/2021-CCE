# 第12週

```c
#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
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
```
```c
#include <stdio.h>
///int a[10]={3,0,1,8,7,2,5,4,6,9};
int a[10]={9,8,7,6,5,4,3,2,1,0};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
    for(int k=0;k<10-1;k++){
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
```c
#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
}
```
```c
   
#include <stdio.h>
int a[100];
int main()
{
    for(int i=0;i<100;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<100;i++){
        for(int j=i+1;j<100;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<100;i++){
        printf("%d\n",a[i]);
    }
}
```
