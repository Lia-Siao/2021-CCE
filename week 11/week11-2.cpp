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
