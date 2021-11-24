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
