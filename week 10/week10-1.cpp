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
