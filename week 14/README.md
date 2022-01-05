# 第14週

```c
   
#include <stdio.h>
int a[2][3]={
    {10,20,30},
    {40,50,60}
};
int main()
{
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){\
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
```c
   
#include <stdio.h>
int a[2][3]={
    {10,20,30},
    {40,50,60}
};
int main()
{
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){\
            printf("a[%d][%d]=%d ",i,j,a[i][j]);
        }
        printf("\n");
    }
}
```
```c
#include <stdio.h>
int a[3]={10,20,30};
int b[3]={40,50,60};
int c[3];
int main()
{
    for(int i=0;i<3;i++){
        c[i]=a[i]*b[i];
    }

    int ans=0;
    for(int i=0;i<3;i++){
        ans+=c[i];
    }
    printf("ans:%d\n",ans);
}
```
```c
#include <stdio.h>
int a[10][10],b[10][10],c[10][10];
int main()
{
	int i,j,k,n;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}
```
```c
#include <stdio.h>
int a[10][10],b[10][10],c[10][10];
int main()
{
	int i,j,k,n;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			//c[i][j]=a[i][j]+b[i][j];
			c[i][j]=0;
			for(int k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
			printf("%3d ",c[i][j]);
		}
		printf("\n");
	}
}
```
```c
   
#include <stdio.h>
int a[1000][1000];
int main()
{
	int M,N;
	scanf("%d %d",&M,&N);
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int j=0;j<N;j++){
		for(int i=M-1;i>=0;i--){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
}
```
